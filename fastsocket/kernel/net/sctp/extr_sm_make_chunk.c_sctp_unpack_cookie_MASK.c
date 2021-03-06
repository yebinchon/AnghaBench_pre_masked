
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ suseconds_t ;
struct timeval {long tv_sec; scalar_t__ tv_usec; } ;
struct sk_buff {int dummy; } ;
struct TYPE_24__ {long tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_17__ {scalar_t__ sin_port; } ;
struct TYPE_18__ {TYPE_2__ v4; } ;
struct sctp_cookie {scalar_t__ my_vtag; int my_port; TYPE_9__ expiration; TYPE_3__ peer_addr; } ;
struct sctp_signed_cookie {int signature; struct sctp_cookie c; } ;
struct TYPE_20__ {int sk; } ;
struct sctp_endpoint {size_t current_key; size_t last_key; TYPE_5__ base; scalar_t__* secret_key; int * digest; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_16__ {struct sctp_signed_cookie* cookie_hdr; } ;
struct sctp_chunk {int dest; TYPE_7__* sctp_hdr; TYPE_4__* chunk_hdr; TYPE_1__ subh; struct sk_buff* skb; } ;
struct TYPE_15__ {int adaptation_ind; int prsctp_capable; scalar_t__ initial_tsn; } ;
struct TYPE_21__ {int port; int adaptation_ind; int prsctp_capable; } ;
struct TYPE_14__ {int address_list; } ;
struct TYPE_23__ {TYPE_11__ bind_addr; } ;
struct sctp_association {TYPE_12__ c; TYPE_6__ peer; scalar_t__ ctsn_ack_point; scalar_t__ adv_peer_ack_point; scalar_t__ addip_serial; scalar_t__ next_tsn; TYPE_8__ base; } ;
struct scatterlist {int dummy; } ;
struct hash_desc {scalar_t__ tfm; scalar_t__ flags; } ;
typedef int sctp_scope_t ;
typedef int sctp_chunkhdr_t ;
typedef int n ;
typedef int gfp_t ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_22__ {scalar_t__ source; scalar_t__ dest; int vtag; } ;
struct TYPE_19__ {scalar_t__ length; } ;
struct TYPE_13__ {scalar_t__ hmac; } ;


 int GFP_ATOMIC ;
 int SCTP_ADDR_SRC ;
 int SCTP_COOKIE_MULTIPLE ;
 int SCTP_ERROR_STALE_COOKIE ;
 int SCTP_IERROR_BAD_PORTS ;
 int SCTP_IERROR_BAD_SIG ;
 int SCTP_IERROR_BAD_TAG ;
 int SCTP_IERROR_MALFORMED ;
 int SCTP_IERROR_NOMEM ;
 int SCTP_IERROR_STALE_COOKIE ;
 unsigned int SCTP_SECRET_SIZE ;
 int SCTP_SIGNATURE_SIZE ;
 int SOCK_TIMESTAMP ;
 scalar_t__ crypto_hash_digest (struct hash_desc*,struct scatterlist*,int,int *) ;
 scalar_t__ crypto_hash_setkey (scalar_t__,char*,unsigned int) ;
 int do_gettimeofday (struct timeval*) ;
 int htonl (scalar_t__) ;
 scalar_t__ list_empty (int *) ;
 scalar_t__ memcmp (int *,int ,int ) ;
 int memcpy (TYPE_12__*,struct sctp_cookie*,int) ;
 int memset (int *,int,int ) ;
 scalar_t__ ntohl (int ) ;
 int ntohs (scalar_t__) ;
 int sctp_add_bind_addr (TYPE_11__*,int *,int ,int ) ;
 int sctp_addto_chunk (struct sctp_chunk*,int,int *) ;
 scalar_t__ sctp_assoc_set_bind_addr_from_cookie (struct sctp_association*,struct sctp_cookie*,int ) ;
 int sctp_association_free (struct sctp_association*) ;
 struct sctp_association* sctp_association_new (struct sctp_endpoint const*,int ,int ,int ) ;
 int sctp_init_cause (struct sctp_chunk*,int ,int) ;
 struct sctp_chunk* sctp_make_op_error_space (struct sctp_association const*,struct sctp_chunk*,unsigned int) ;
 int sctp_scope (int ) ;
 TYPE_10__* sctp_sk (int ) ;
 int sctp_source (struct sctp_chunk*) ;
 int sg_init_one (struct scatterlist*,struct sctp_cookie*,int) ;
 int skb_get_timestamp (struct sk_buff*,struct timeval*) ;
 scalar_t__ sock_flag (int ,int ) ;
 scalar_t__ tv_lt (TYPE_9__,struct timeval) ;

struct sctp_association *sctp_unpack_cookie(
 const struct sctp_endpoint *ep,
 const struct sctp_association *asoc,
 struct sctp_chunk *chunk, gfp_t gfp,
 int *error, struct sctp_chunk **errp)
{
 struct sctp_association *retval = ((void*)0);
 struct sctp_signed_cookie *cookie;
 struct sctp_cookie *bear_cookie;
 int headersize, bodysize, fixed_size;
 __u8 *digest = ep->digest;
 struct scatterlist sg;
 unsigned int keylen, len;
 char *key;
 sctp_scope_t scope;
 struct sk_buff *skb = chunk->skb;
 struct timeval tv;
 struct hash_desc desc;




 headersize = sizeof(sctp_chunkhdr_t) +
       (sizeof(struct sctp_signed_cookie) -
        sizeof(struct sctp_cookie));
 bodysize = ntohs(chunk->chunk_hdr->length) - headersize;
 fixed_size = headersize + sizeof(struct sctp_cookie);





 len = ntohs(chunk->chunk_hdr->length);
 if (len < fixed_size + sizeof(struct sctp_chunkhdr))
  goto malformed;


 if (bodysize % SCTP_COOKIE_MULTIPLE)
  goto malformed;


 cookie = chunk->subh.cookie_hdr;
 bear_cookie = &cookie->c;

 if (!sctp_sk(ep->base.sk)->hmac)
  goto no_hmac;


 keylen = SCTP_SECRET_SIZE;
 sg_init_one(&sg, bear_cookie, bodysize);
 key = (char *)ep->secret_key[ep->current_key];
 desc.tfm = sctp_sk(ep->base.sk)->hmac;
 desc.flags = 0;

 memset(digest, 0x00, SCTP_SIGNATURE_SIZE);
 if (crypto_hash_setkey(desc.tfm, key, keylen) ||
     crypto_hash_digest(&desc, &sg, bodysize, digest)) {
  *error = -SCTP_IERROR_NOMEM;
  goto fail;
 }

 if (memcmp(digest, cookie->signature, SCTP_SIGNATURE_SIZE)) {

  key = (char *)ep->secret_key[ep->last_key];
  memset(digest, 0x00, SCTP_SIGNATURE_SIZE);
  if (crypto_hash_setkey(desc.tfm, key, keylen) ||
      crypto_hash_digest(&desc, &sg, bodysize, digest)) {
   *error = -SCTP_IERROR_NOMEM;
   goto fail;
  }

  if (memcmp(digest, cookie->signature, SCTP_SIGNATURE_SIZE)) {

   *error = -SCTP_IERROR_BAD_SIG;
   goto fail;
  }
 }

no_hmac:







 if (ntohl(chunk->sctp_hdr->vtag) != bear_cookie->my_vtag) {
  *error = -SCTP_IERROR_BAD_TAG;
  goto fail;
 }

 if (chunk->sctp_hdr->source != bear_cookie->peer_addr.v4.sin_port ||
     ntohs(chunk->sctp_hdr->dest) != bear_cookie->my_port) {
  *error = -SCTP_IERROR_BAD_PORTS;
  goto fail;
 }
 if (sock_flag(ep->base.sk, SOCK_TIMESTAMP))
  skb_get_timestamp(skb, &tv);
 else
  do_gettimeofday(&tv);

 if (!asoc && tv_lt(bear_cookie->expiration, tv)) {
  len = ntohs(chunk->chunk_hdr->length);
  *errp = sctp_make_op_error_space(asoc, chunk, len);
  if (*errp) {
   suseconds_t usecs = (tv.tv_sec -
    bear_cookie->expiration.tv_sec) * 1000000L +
    tv.tv_usec - bear_cookie->expiration.tv_usec;
   __be32 n = htonl(usecs);

   sctp_init_cause(*errp, SCTP_ERROR_STALE_COOKIE,
     sizeof(n));
   sctp_addto_chunk(*errp, sizeof(n), &n);
   *error = -SCTP_IERROR_STALE_COOKIE;
  } else
   *error = -SCTP_IERROR_NOMEM;

  goto fail;
 }


 scope = sctp_scope(sctp_source(chunk));
 retval = sctp_association_new(ep, ep->base.sk, scope, gfp);
 if (!retval) {
  *error = -SCTP_IERROR_NOMEM;
  goto fail;
 }


 retval->peer.port = ntohs(chunk->sctp_hdr->source);


 memcpy(&retval->c, bear_cookie, sizeof(*bear_cookie));

 if (sctp_assoc_set_bind_addr_from_cookie(retval, bear_cookie,
       GFP_ATOMIC) < 0) {
  *error = -SCTP_IERROR_NOMEM;
  goto fail;
 }


 if (list_empty(&retval->base.bind_addr.address_list)) {
  sctp_add_bind_addr(&retval->base.bind_addr, &chunk->dest,
    SCTP_ADDR_SRC, GFP_ATOMIC);
 }

 retval->next_tsn = retval->c.initial_tsn;
 retval->ctsn_ack_point = retval->next_tsn - 1;
 retval->addip_serial = retval->c.initial_tsn;
 retval->adv_peer_ack_point = retval->ctsn_ack_point;
 retval->peer.prsctp_capable = retval->c.prsctp_capable;
 retval->peer.adaptation_ind = retval->c.adaptation_ind;


 return retval;

fail:
 if (retval)
  sctp_association_free(retval);

 return ((void*)0);

malformed:



 *error = -SCTP_IERROR_MALFORMED;
 goto fail;
}
