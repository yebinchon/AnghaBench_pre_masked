
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct xfrm_tmpl {int dummy; } ;
struct TYPE_6__ {scalar_t__ proto; int daddr; } ;
struct TYPE_5__ {int family; int saddr; } ;
struct TYPE_4__ {int seq; } ;
struct xfrm_state {TYPE_3__ id; TYPE_2__ props; TYPE_1__ km; struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int ctx_len; int ctx_str; int ctx_alg; int ctx_doi; } ;
struct xfrm_policy {int index; } ;
struct sockaddr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_sec_ctx {int sadb_x_sec_len; int sadb_x_ctx_len; int sadb_x_ctx_alg; int sadb_x_ctx_doi; int sadb_x_sec_exttype; } ;
struct sadb_x_policy {int sadb_x_policy_len; int sadb_x_policy_dir; int sadb_x_policy_id; int sadb_x_policy_type; int sadb_x_policy_exttype; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct sadb_address {int sadb_address_len; void* sadb_address_prefixlen; scalar_t__ sadb_address_reserved; scalar_t__ sadb_address_proto; int sadb_address_exttype; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct xfrm_tmpl*) ;
 scalar_t__ FUNC_4 (struct xfrm_tmpl*) ;
 int FUNC_5 (struct sk_buff*,struct xfrm_tmpl*) ;
 int FUNC_6 (struct sk_buff*,struct xfrm_tmpl*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sadb_x_sec_ctx*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int *,int ,struct sockaddr*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_15(struct xfrm_state *VAR_13, struct xfrm_tmpl *VAR_14, struct xfrm_policy *VAR_15, int VAR_16)
{
 struct sk_buff *VAR_17;
 struct sadb_msg *VAR_18;
 struct sadb_address *VAR_19;
 struct sadb_x_policy *VAR_20;
 int VAR_21;
 int VAR_22;
 struct sadb_x_sec_ctx *VAR_23;
 struct xfrm_sec_ctx *VAR_24;
 int VAR_25 = 0;

 VAR_21 = FUNC_12(VAR_13->props.family);
 if (!VAR_21)
  return -VAR_1;

 VAR_22 = sizeof(struct sadb_msg) +
  (sizeof(struct sadb_address) * 2) +
  (VAR_21 * 2) +
  sizeof(struct sadb_x_policy);

 if (VAR_13->id.proto == VAR_4)
  VAR_22 += FUNC_3(VAR_14);
 else if (VAR_13->id.proto == VAR_5)
  VAR_22 += FUNC_4(VAR_14);

 if ((VAR_24 = VAR_13->security)) {
  VAR_25 = FUNC_1(VAR_24->ctx_len);
  VAR_22 += sizeof(struct sadb_x_sec_ctx) + VAR_25;
 }

 VAR_17 = FUNC_2(VAR_22 + 16, VAR_3);
 if (VAR_17 == ((void*)0))
  return -VAR_2;

 VAR_18 = (struct sadb_msg *) FUNC_13(VAR_17, sizeof(struct sadb_msg));
 VAR_18->sadb_msg_version = VAR_7;
 VAR_18->sadb_msg_type = VAR_8;
 VAR_18->sadb_msg_satype = FUNC_10(VAR_13->id.proto);
 VAR_18->sadb_msg_len = VAR_22 / sizeof(uint64_t);
 VAR_18->sadb_msg_errno = 0;
 VAR_18->sadb_msg_reserved = 0;
 VAR_18->sadb_msg_seq = VAR_13->km.seq = FUNC_7();
 VAR_18->sadb_msg_pid = 0;


 VAR_19 = (struct sadb_address*) FUNC_13(VAR_17,
           sizeof(struct sadb_address)+VAR_21);
 VAR_19->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_21)/
   sizeof(uint64_t);
 VAR_19->sadb_address_exttype = VAR_10;
 VAR_19->sadb_address_proto = 0;
 VAR_19->sadb_address_reserved = 0;
 VAR_19->sadb_address_prefixlen =
  FUNC_11(&VAR_13->props.saddr, 0,
        (struct sockaddr *) (VAR_19 + 1),
        VAR_13->props.family);
 if (!VAR_19->sadb_address_prefixlen)
  FUNC_0();


 VAR_19 = (struct sadb_address*) FUNC_13(VAR_17,
           sizeof(struct sadb_address)+VAR_21);
 VAR_19->sadb_address_len =
  (sizeof(struct sadb_address)+VAR_21)/
   sizeof(uint64_t);
 VAR_19->sadb_address_exttype = VAR_9;
 VAR_19->sadb_address_proto = 0;
 VAR_19->sadb_address_reserved = 0;
 VAR_19->sadb_address_prefixlen =
  FUNC_11(&VAR_13->id.daddr, 0,
        (struct sockaddr *) (VAR_19 + 1),
        VAR_13->props.family);
 if (!VAR_19->sadb_address_prefixlen)
  FUNC_0();

 VAR_20 = (struct sadb_x_policy *) FUNC_13(VAR_17, sizeof(struct sadb_x_policy));
 VAR_20->sadb_x_policy_len = sizeof(struct sadb_x_policy)/sizeof(uint64_t);
 VAR_20->sadb_x_policy_exttype = VAR_11;
 VAR_20->sadb_x_policy_type = VAR_6;
 VAR_20->sadb_x_policy_dir = VAR_16+1;
 VAR_20->sadb_x_policy_id = VAR_15->index;


 if (VAR_13->id.proto == VAR_4)
  FUNC_5(VAR_17, VAR_14);
 else if (VAR_13->id.proto == VAR_5)
  FUNC_6(VAR_17, VAR_14);


 if (VAR_24) {
  VAR_23 = (struct sadb_x_sec_ctx *) FUNC_13(VAR_17,
    sizeof(struct sadb_x_sec_ctx) + VAR_25);
  VAR_23->sadb_x_sec_len =
    (sizeof(struct sadb_x_sec_ctx) + VAR_25) / sizeof(uint64_t);
  VAR_23->sadb_x_sec_exttype = VAR_12;
  VAR_23->sadb_x_ctx_doi = VAR_24->ctx_doi;
  VAR_23->sadb_x_ctx_alg = VAR_24->ctx_alg;
  VAR_23->sadb_x_ctx_len = VAR_24->ctx_len;
  FUNC_8(VAR_23 + 1, VAR_24->ctx_str,
         VAR_24->ctx_len);
 }

 return FUNC_9(VAR_17, VAR_3, VAR_0, ((void*)0), FUNC_14(VAR_13));
}
