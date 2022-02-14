
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct TYPE_7__ {int daddr; int proto; } ;
struct xfrm_tmpl {scalar_t__ mode; int encap_family; TYPE_3__ id; int saddr; scalar_t__ reqid; scalar_t__ optional; } ;
struct xfrm_sec_ctx {int ctx_len; int ctx_str; int ctx_alg; int ctx_doi; } ;
struct TYPE_6__ {int use_time; int add_time; void* bytes; void* packets; } ;
struct TYPE_5__ {int soft_use_expires_seconds; int soft_add_expires_seconds; int soft_byte_limit; int soft_packet_limit; int hard_use_expires_seconds; int hard_add_expires_seconds; int hard_byte_limit; int hard_packet_limit; } ;
struct TYPE_8__ {int dport; int daddr; int prefixlen_d; int proto; int sport; int saddr; int prefixlen_s; } ;
struct xfrm_policy {scalar_t__ action; int xfrm_nr; int refcnt; struct xfrm_sec_ctx* security; struct xfrm_tmpl* xfrm_vec; int priority; int index; TYPE_2__ curlft; TYPE_1__ lft; int family; TYPE_4__ selector; } ;
struct sockaddr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_sec_ctx {int sadb_x_sec_len; int sadb_x_ctx_len; int sadb_x_ctx_alg; int sadb_x_ctx_doi; int sadb_x_sec_exttype; } ;
struct sadb_x_policy {int sadb_x_policy_len; int sadb_x_policy_dir; int sadb_x_policy_priority; int sadb_x_policy_id; int sadb_x_policy_type; int sadb_x_policy_exttype; } ;
struct sadb_x_ipsecrequest {int sadb_x_ipsecrequest_len; int sadb_x_ipsecrequest_mode; int sadb_msg_len; int sadb_msg_reserved; scalar_t__ sadb_x_ipsecrequest_reqid; int sadb_x_ipsecrequest_level; int sadb_x_ipsecrequest_proto; } ;
struct sadb_msg {int sadb_x_ipsecrequest_len; int sadb_x_ipsecrequest_mode; int sadb_msg_len; int sadb_msg_reserved; scalar_t__ sadb_x_ipsecrequest_reqid; int sadb_x_ipsecrequest_level; int sadb_x_ipsecrequest_proto; } ;
struct sadb_lifetime {int sadb_lifetime_len; int sadb_lifetime_usetime; int sadb_lifetime_addtime; void* sadb_lifetime_bytes; void* sadb_lifetime_allocations; int sadb_lifetime_exttype; } ;
struct sadb_address {int sadb_address_len; scalar_t__ sadb_address_reserved; int sadb_address_prefixlen; void* sadb_address_proto; int sadb_address_exttype; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sadb_x_sec_ctx*,int ,int ) ;
 int FUNC_4 (struct sadb_x_ipsecrequest*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,struct sockaddr*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct xfrm_policy*) ;
 int FUNC_11 (struct xfrm_policy*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_16, struct xfrm_policy *VAR_17, int VAR_18)
{
 struct sadb_msg *VAR_19;
 struct sadb_address *VAR_20;
 struct sadb_lifetime *VAR_21;
 struct sadb_x_policy *VAR_22;
 struct sadb_x_sec_ctx *VAR_23;
 struct xfrm_sec_ctx *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27 = FUNC_9(VAR_17->family);
 int VAR_28 = FUNC_8(VAR_17->family);

 VAR_26 = FUNC_10(VAR_17);


 VAR_19 = (struct sadb_msg *) FUNC_12(VAR_16, sizeof(struct sadb_msg));
 FUNC_4(VAR_19, 0, VAR_26);


 VAR_20 = (struct sadb_address*) FUNC_12(VAR_16,
           sizeof(struct sadb_address)+VAR_27);
 VAR_20->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_27)/
   sizeof(uint64_t);
 VAR_20->sadb_address_exttype = VAR_8;
 VAR_20->sadb_address_proto = FUNC_6(VAR_17->selector.proto);
 VAR_20->sadb_address_prefixlen = VAR_17->selector.prefixlen_s;
 VAR_20->sadb_address_reserved = 0;
 if (!FUNC_7(&VAR_17->selector.saddr,
     VAR_17->selector.sport,
     (struct sockaddr *) (VAR_20 + 1),
     VAR_17->family))
  FUNC_0();


 VAR_20 = (struct sadb_address*) FUNC_12(VAR_16,
           sizeof(struct sadb_address)+VAR_27);
 VAR_20->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_27)/
   sizeof(uint64_t);
 VAR_20->sadb_address_exttype = VAR_7;
 VAR_20->sadb_address_proto = FUNC_6(VAR_17->selector.proto);
 VAR_20->sadb_address_prefixlen = VAR_17->selector.prefixlen_d;
 VAR_20->sadb_address_reserved = 0;

 FUNC_7(&VAR_17->selector.daddr, VAR_17->selector.dport,
       (struct sockaddr *) (VAR_20 + 1),
       VAR_17->family);


 VAR_21 = (struct sadb_lifetime *) FUNC_12(VAR_16,
           sizeof(struct sadb_lifetime));
 VAR_21->sadb_lifetime_len =
  sizeof(struct sadb_lifetime)/sizeof(uint64_t);
 VAR_21->sadb_lifetime_exttype = VAR_10;
 VAR_21->sadb_lifetime_allocations = FUNC_1(VAR_17->lft.hard_packet_limit);
 VAR_21->sadb_lifetime_bytes = FUNC_1(VAR_17->lft.hard_byte_limit);
 VAR_21->sadb_lifetime_addtime = VAR_17->lft.hard_add_expires_seconds;
 VAR_21->sadb_lifetime_usetime = VAR_17->lft.hard_use_expires_seconds;

 VAR_21 = (struct sadb_lifetime *) FUNC_12(VAR_16,
           sizeof(struct sadb_lifetime));
 VAR_21->sadb_lifetime_len =
  sizeof(struct sadb_lifetime)/sizeof(uint64_t);
 VAR_21->sadb_lifetime_exttype = VAR_11;
 VAR_21->sadb_lifetime_allocations = FUNC_1(VAR_17->lft.soft_packet_limit);
 VAR_21->sadb_lifetime_bytes = FUNC_1(VAR_17->lft.soft_byte_limit);
 VAR_21->sadb_lifetime_addtime = VAR_17->lft.soft_add_expires_seconds;
 VAR_21->sadb_lifetime_usetime = VAR_17->lft.soft_use_expires_seconds;

 VAR_21 = (struct sadb_lifetime *) FUNC_12(VAR_16,
           sizeof(struct sadb_lifetime));
 VAR_21->sadb_lifetime_len =
  sizeof(struct sadb_lifetime)/sizeof(uint64_t);
 VAR_21->sadb_lifetime_exttype = VAR_9;
 VAR_21->sadb_lifetime_allocations = VAR_17->curlft.packets;
 VAR_21->sadb_lifetime_bytes = VAR_17->curlft.bytes;
 VAR_21->sadb_lifetime_addtime = VAR_17->curlft.add_time;
 VAR_21->sadb_lifetime_usetime = VAR_17->curlft.use_time;

 VAR_22 = (struct sadb_x_policy *) FUNC_12(VAR_16, sizeof(struct sadb_x_policy));
 VAR_22->sadb_x_policy_len = sizeof(struct sadb_x_policy)/sizeof(uint64_t);
 VAR_22->sadb_x_policy_exttype = VAR_12;
 VAR_22->sadb_x_policy_type = VAR_4;
 if (VAR_17->action == VAR_15) {
  if (VAR_17->xfrm_nr)
   VAR_22->sadb_x_policy_type = VAR_5;
  else
   VAR_22->sadb_x_policy_type = VAR_6;
 }
 VAR_22->sadb_x_policy_dir = VAR_18+1;
 VAR_22->sadb_x_policy_id = VAR_17->index;
 VAR_22->sadb_x_policy_priority = VAR_17->priority;

 for (VAR_25=0; VAR_25<VAR_17->xfrm_nr; VAR_25++) {
  struct sadb_x_ipsecrequest *VAR_29;
  struct xfrm_tmpl *VAR_30 = VAR_17->xfrm_vec + VAR_25;
  int VAR_31;
  int VAR_32;

  VAR_31 = sizeof(struct sadb_x_ipsecrequest);
  if (VAR_30->mode == VAR_14) {
   VAR_28 = FUNC_8(VAR_30->encap_family);
   VAR_31 += VAR_28 * 2;
  } else {
   VAR_26 -= 2*VAR_28;
  }
  VAR_29 = (void*)FUNC_12(VAR_16, VAR_31);
  VAR_22->sadb_x_policy_len += VAR_31/8;
  FUNC_4(VAR_29, 0, sizeof(*VAR_29));
  VAR_29->sadb_x_ipsecrequest_len = VAR_31;
  VAR_29->sadb_x_ipsecrequest_proto = VAR_30->id.proto;
  if ((VAR_32 = FUNC_5(VAR_30->mode)) < 0)
   return -VAR_0;
  VAR_29->sadb_x_ipsecrequest_mode = VAR_32;
  VAR_29->sadb_x_ipsecrequest_level = VAR_1;
  if (VAR_30->reqid)
   VAR_29->sadb_x_ipsecrequest_level = VAR_2;
  if (VAR_30->optional)
   VAR_29->sadb_x_ipsecrequest_level = VAR_3;
  VAR_29->sadb_x_ipsecrequest_reqid = VAR_30->reqid;

  if (VAR_30->mode == VAR_14) {
   u8 *VAR_33 = (void *)(VAR_29 + 1);
   FUNC_7(&VAR_30->saddr, 0,
         (struct sockaddr *)VAR_33,
         VAR_30->encap_family);
   FUNC_7(&VAR_30->id.daddr, 0,
         (struct sockaddr *) (VAR_33 + VAR_28),
         VAR_30->encap_family);
  }
 }


 if ((VAR_24 = VAR_17->security)) {
  int VAR_34 = FUNC_11(VAR_17);

  VAR_23 = (struct sadb_x_sec_ctx *) FUNC_12(VAR_16, VAR_34);
  VAR_23->sadb_x_sec_len = VAR_34 / sizeof(uint64_t);
  VAR_23->sadb_x_sec_exttype = VAR_13;
  VAR_23->sadb_x_ctx_doi = VAR_24->ctx_doi;
  VAR_23->sadb_x_ctx_alg = VAR_24->ctx_alg;
  VAR_23->sadb_x_ctx_len = VAR_24->ctx_len;
  FUNC_3(VAR_23 + 1, VAR_24->ctx_str,
         VAR_24->ctx_len);
 }

 VAR_19->sadb_msg_len = VAR_26 / sizeof(uint64_t);
 VAR_19->sadb_msg_reserved = FUNC_2(&VAR_17->refcnt);

 return 0;
}
