
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {int raw_addr_list_len; TYPE_5__* peer_init; int expiration; int adaptation_ind; int prsctp_capable; } ;
struct sctp_signed_cookie {int signature; TYPE_6__ c; } ;
struct TYPE_16__ {int sk; } ;
struct sctp_endpoint {size_t current_key; TYPE_3__ base; scalar_t__* secret_key; } ;
struct sctp_cookie {int dummy; } ;
struct sctp_chunk {TYPE_5__ const* chunk_hdr; } ;
struct TYPE_15__ {int adaptation_ind; int prsctp_capable; } ;
struct sctp_association {int cookie_life; TYPE_2__ peer; TYPE_6__ c; } ;
struct scatterlist {int dummy; } ;
struct hash_desc {scalar_t__ tfm; scalar_t__ flags; } ;
typedef int sctp_paramhdr_t ;
struct TYPE_14__ {int length; int type; } ;
struct TYPE_17__ {TYPE_1__ p; scalar_t__ body; } ;
typedef TYPE_4__ sctp_cookie_param_t ;
struct TYPE_18__ {int length; } ;
typedef TYPE_5__ __u8 ;
struct TYPE_20__ {scalar_t__ hmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct hash_desc*,struct scatterlist*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__ const*,int) ;
 int FUNC_8 (int ) ;
 TYPE_7__* FUNC_9 (int ) ;
 int FUNC_10 (struct scatterlist*,TYPE_6__*,int) ;

__attribute__((used)) static sctp_cookie_param_t *FUNC_11(const struct sctp_endpoint *VAR_4,
          const struct sctp_association *VAR_5,
          const struct sctp_chunk *VAR_6,
          int *VAR_7,
          const __u8 *VAR_8, int VAR_9)
{
 sctp_cookie_param_t *VAR_10;
 struct sctp_signed_cookie *VAR_11;
 struct scatterlist VAR_12;
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 char *VAR_16;




 VAR_13 = sizeof(sctp_paramhdr_t) +
       (sizeof(struct sctp_signed_cookie) -
        sizeof(struct sctp_cookie));
 VAR_14 = sizeof(struct sctp_cookie)
  + FUNC_8(VAR_6->chunk_hdr->length) + VAR_9;




 if (VAR_14 % VAR_1)
  VAR_14 += VAR_1
   - (VAR_14 % VAR_1);
 *VAR_7 = VAR_13 + VAR_14;




 VAR_10 = FUNC_6(*VAR_7, VAR_0);
 if (!VAR_10)
  goto nodata;

 VAR_11 = (struct sctp_signed_cookie *) VAR_10->body;


 VAR_10->p.type = VAR_2;
 VAR_10->p.length = FUNC_4(*VAR_7);


 VAR_11->c = VAR_5->c;

 VAR_11->c.raw_addr_list_len = VAR_9;


 VAR_11->c.prsctp_capable = VAR_5->peer.prsctp_capable;


 VAR_11->c.adaptation_ind = VAR_5->peer.adaptation_ind;


 FUNC_3(&VAR_11->c.expiration);
 FUNC_0(VAR_5->cookie_life, VAR_11->c.expiration);


 FUNC_7(&VAR_11->c.peer_init[0], VAR_6->chunk_hdr,
        FUNC_8(VAR_6->chunk_hdr->length));


 FUNC_7((__u8 *)&VAR_11->c.peer_init[0] +
        FUNC_8(VAR_6->chunk_hdr->length), VAR_8, VAR_9);

 if (FUNC_9(VAR_4->base.sk)->hmac) {
  struct hash_desc VAR_17;


  FUNC_10(&VAR_12, &VAR_11->c, VAR_14);
  VAR_15 = VAR_3;
  VAR_16 = (char *)VAR_4->secret_key[VAR_4->current_key];
  VAR_17.tfm = FUNC_9(VAR_4->base.sk)->hmac;
  VAR_17.flags = 0;

  if (FUNC_2(VAR_17.tfm, VAR_16, VAR_15) ||
      FUNC_1(&VAR_17, &VAR_12, VAR_14, VAR_11->signature))
   goto free_cookie;
 }

 return VAR_10;

free_cookie:
 FUNC_5(VAR_10);
nodata:
 *VAR_7 = 0;
 return ((void*)0);
}
