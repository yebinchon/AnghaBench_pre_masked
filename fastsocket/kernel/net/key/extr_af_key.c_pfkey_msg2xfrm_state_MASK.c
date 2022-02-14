
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct TYPE_11__ {int state; int seq; } ;
struct TYPE_20__ {scalar_t__ aalgo; scalar_t__ calgo; scalar_t__ ealgo; int mode; void* family; int reqid; int saddr; int flags; int replay_window; } ;
struct TYPE_19__ {void* family; int prefixlen_s; int saddr; } ;
struct TYPE_18__ {int daddr; int spi; scalar_t__ proto; } ;
struct TYPE_12__ {int soft_use_expires_seconds; int soft_add_expires_seconds; void* soft_byte_limit; void* soft_packet_limit; int hard_use_expires_seconds; int hard_add_expires_seconds; void* hard_byte_limit; void* hard_packet_limit; } ;
struct xfrm_state {TYPE_10__ km; struct xfrm_encap_tmpl* encap; TYPE_9__ props; TYPE_8__ sel; TYPE_7__ id; TYPE_6__* ealg; TYPE_5__* calg; TYPE_2__* aalg; TYPE_1__ lft; } ;
struct xfrm_encap_tmpl {int encap_oa; int encap_dport; int encap_sport; int encap_type; } ;
struct TYPE_14__ {int icv_truncbits; } ;
struct TYPE_15__ {TYPE_3__ auth; } ;
struct xfrm_algo_desc {int name; TYPE_4__ uinfo; } ;
struct sadb_x_sec_ctx {int dummy; } ;
struct sadb_x_sa2 {int sadb_x_sa2_reqid; int sadb_x_sa2_mode; } ;
struct sadb_x_nat_t_type {int sadb_x_nat_t_type_type; } ;
struct sadb_x_nat_t_port {int sadb_x_nat_t_port_port; } ;
struct sadb_sa {scalar_t__ sadb_sa_auth; scalar_t__ sadb_sa_encrypt; int sadb_sa_flags; int sadb_sa_replay; int sadb_sa_spi; } ;
struct sadb_msg {scalar_t__ sadb_msg_satype; int sadb_msg_seq; } ;
struct sadb_lifetime {int sadb_lifetime_usetime; int sadb_lifetime_addtime; int sadb_lifetime_bytes; int sadb_lifetime_allocations; } ;
struct sadb_key {int sadb_key_bits; int sadb_key_len; } ;
struct sadb_address {int sadb_address_prefixlen; } ;
struct net {int dummy; } ;
struct TYPE_17__ {int alg_key_len; int alg_key; int alg_name; } ;
struct TYPE_16__ {int alg_name; } ;
struct TYPE_13__ {int alg_key_len; int alg_trunc_len; int alg_key; int alg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfrm_state* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct xfrm_user_sec_ctx*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct sadb_key*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ) ;
 struct xfrm_user_sec_ctx* FUNC_7 (struct sadb_x_sec_ctx*) ;
 void* FUNC_8 (struct sadb_address*,int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (void*,void*) ;
 int FUNC_11 (struct xfrm_state*,struct xfrm_user_sec_ctx*) ;
 int FUNC_12 (int ,int ) ;
 struct xfrm_algo_desc* FUNC_13 (scalar_t__) ;
 struct xfrm_algo_desc* FUNC_14 (scalar_t__) ;
 struct xfrm_algo_desc* FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_17 (struct net*) ;
 int FUNC_18 (struct xfrm_state*) ;

__attribute__((used)) static struct xfrm_state * FUNC_19(struct net *VAR_33,
      struct sadb_msg *VAR_34,
      void **VAR_35)
{
 struct xfrm_state *VAR_36;
 struct sadb_lifetime *VAR_37;
 struct sadb_sa *VAR_38;
 struct sadb_key *VAR_39;
 struct sadb_x_sec_ctx *VAR_40;
 uint16_t VAR_41;
 int VAR_42;


 VAR_38 = (struct sadb_sa *) VAR_35[VAR_15-1];
 if (!VAR_38 ||
     !FUNC_10(VAR_35[VAR_10-1],
         VAR_35[VAR_8-1]))
  return FUNC_0(-VAR_1);
 if (VAR_34->sadb_msg_satype == VAR_20 &&
     !VAR_35[VAR_12-1])
  return FUNC_0(-VAR_1);
 if (VAR_34->sadb_msg_satype == VAR_19 &&
     !VAR_35[VAR_11-1])
  return FUNC_0(-VAR_1);
 if (!!VAR_35[VAR_13-1] !=
     !!VAR_35[VAR_14-1])
  return FUNC_0(-VAR_1);

 VAR_41 = FUNC_9(VAR_34->sadb_msg_satype);
 if (VAR_41 == 0)
  return FUNC_0(-VAR_1);


 VAR_42 = -VAR_2;
 if (VAR_38->sadb_sa_auth > VAR_5 ||
     (VAR_34->sadb_msg_satype == VAR_28 &&
      VAR_38->sadb_sa_encrypt > VAR_22) ||
     VAR_38->sadb_sa_encrypt > VAR_6)
  return FUNC_0(-VAR_1);
 VAR_39 = (struct sadb_key*) VAR_35[VAR_11-1];
 if (VAR_39 != ((void*)0) &&
     VAR_38->sadb_sa_auth != VAR_21 &&
     ((VAR_39->sadb_key_bits+7) / 8 == 0 ||
      (VAR_39->sadb_key_bits+7) / 8 > VAR_39->sadb_key_len * sizeof(uint64_t)))
  return FUNC_0(-VAR_1);
 VAR_39 = VAR_35[VAR_12-1];
 if (VAR_39 != ((void*)0) &&
     VAR_38->sadb_sa_encrypt != VAR_7 &&
     ((VAR_39->sadb_key_bits+7) / 8 == 0 ||
      (VAR_39->sadb_key_bits+7) / 8 > VAR_39->sadb_key_len * sizeof(uint64_t)))
  return FUNC_0(-VAR_1);

 VAR_36 = FUNC_17(VAR_33);
 if (VAR_36 == ((void*)0))
  return FUNC_0(-VAR_2);

 VAR_36->id.proto = VAR_41;
 VAR_36->id.spi = VAR_38->sadb_sa_spi;
 VAR_36->props.replay_window = VAR_38->sadb_sa_replay;
 if (VAR_38->sadb_sa_flags & VAR_17)
  VAR_36->props.flags |= VAR_31;
 if (VAR_38->sadb_sa_flags & VAR_16)
  VAR_36->props.flags |= VAR_30;
 if (VAR_38->sadb_sa_flags & VAR_18)
  VAR_36->props.flags |= VAR_32;

 VAR_37 = (struct sadb_lifetime*) VAR_35[VAR_13-1];
 if (VAR_37 != ((void*)0)) {
  VAR_36->lft.hard_packet_limit = FUNC_1(VAR_37->sadb_lifetime_allocations);
  VAR_36->lft.hard_byte_limit = FUNC_1(VAR_37->sadb_lifetime_bytes);
  VAR_36->lft.hard_add_expires_seconds = VAR_37->sadb_lifetime_addtime;
  VAR_36->lft.hard_use_expires_seconds = VAR_37->sadb_lifetime_usetime;
 }
 VAR_37 = (struct sadb_lifetime*) VAR_35[VAR_14-1];
 if (VAR_37 != ((void*)0)) {
  VAR_36->lft.soft_packet_limit = FUNC_1(VAR_37->sadb_lifetime_allocations);
  VAR_36->lft.soft_byte_limit = FUNC_1(VAR_37->sadb_lifetime_bytes);
  VAR_36->lft.soft_add_expires_seconds = VAR_37->sadb_lifetime_addtime;
  VAR_36->lft.soft_use_expires_seconds = VAR_37->sadb_lifetime_usetime;
 }

 VAR_40 = (struct sadb_x_sec_ctx *) VAR_35[VAR_27-1];
 if (VAR_40 != ((void*)0)) {
  struct xfrm_user_sec_ctx *VAR_43 = FUNC_7(VAR_40);

  if (!VAR_43)
   goto out;

  VAR_42 = FUNC_11(VAR_36, VAR_43);
  FUNC_2(VAR_43);

  if (VAR_42)
   goto out;
 }

 VAR_39 = (struct sadb_key*) VAR_35[VAR_11-1];
 if (VAR_38->sadb_sa_auth) {
  int VAR_44 = 0;
  struct xfrm_algo_desc *VAR_45 = FUNC_13(VAR_38->sadb_sa_auth);
  if (!VAR_45) {
   VAR_42 = -VAR_3;
   goto out;
  }
  if (VAR_39)
   VAR_44 = (VAR_39->sadb_key_bits + 7) / 8;
  VAR_36->aalg = FUNC_3(sizeof(*VAR_36->aalg) + VAR_44, VAR_4);
  if (!VAR_36->aalg)
   goto out;
  FUNC_12(VAR_36->aalg->alg_name, VAR_45->name);
  VAR_36->aalg->alg_key_len = 0;
  if (VAR_39) {
   VAR_36->aalg->alg_key_len = VAR_39->sadb_key_bits;
   FUNC_4(VAR_36->aalg->alg_key, VAR_39+1, VAR_44);
  }
  VAR_36->aalg->alg_trunc_len = VAR_45->uinfo.auth.icv_truncbits;
  VAR_36->props.aalgo = VAR_38->sadb_sa_auth;

 }
 if (VAR_38->sadb_sa_encrypt) {
  if (VAR_34->sadb_msg_satype == VAR_28) {
   struct xfrm_algo_desc *VAR_46 = FUNC_14(VAR_38->sadb_sa_encrypt);
   if (!VAR_46) {
    VAR_42 = -VAR_3;
    goto out;
   }
   VAR_36->calg = FUNC_3(sizeof(*VAR_36->calg), VAR_4);
   if (!VAR_36->calg)
    goto out;
   FUNC_12(VAR_36->calg->alg_name, VAR_46->name);
   VAR_36->props.calgo = VAR_38->sadb_sa_encrypt;
  } else {
   int VAR_47 = 0;
   struct xfrm_algo_desc *VAR_48 = FUNC_15(VAR_38->sadb_sa_encrypt);
   if (!VAR_48) {
    VAR_42 = -VAR_3;
    goto out;
   }
   VAR_39 = (struct sadb_key*) VAR_35[VAR_12-1];
   if (VAR_39)
    VAR_47 = (VAR_39->sadb_key_bits + 7) / 8;
   VAR_36->ealg = FUNC_3(sizeof(*VAR_36->ealg) + VAR_47, VAR_4);
   if (!VAR_36->ealg)
    goto out;
   FUNC_12(VAR_36->ealg->alg_name, VAR_48->name);
   VAR_36->ealg->alg_key_len = 0;
   if (VAR_39) {
    VAR_36->ealg->alg_key_len = VAR_39->sadb_key_bits;
    FUNC_4(VAR_36->ealg->alg_key, VAR_39+1, VAR_47);
   }
   VAR_36->props.ealgo = VAR_38->sadb_sa_encrypt;
  }
 }


 VAR_36->props.family = FUNC_8((struct sadb_address *) VAR_35[VAR_10-1],
          &VAR_36->props.saddr);
 if (!VAR_36->props.family) {
  VAR_42 = -VAR_0;
  goto out;
 }
 FUNC_8((struct sadb_address *) VAR_35[VAR_8-1],
      &VAR_36->id.daddr);

 if (VAR_35[VAR_26-1]) {
  struct sadb_x_sa2 *VAR_49 = (void*)VAR_35[VAR_26-1];
  int VAR_50 = FUNC_6(VAR_49->sadb_x_sa2_mode);
  if (VAR_50 < 0) {
   VAR_42 = -VAR_1;
   goto out;
  }
  VAR_36->props.mode = VAR_50;
  VAR_36->props.reqid = VAR_49->sadb_x_sa2_reqid;
 }

 if (VAR_35[VAR_9-1]) {
  struct sadb_address *VAR_51 = VAR_35[VAR_9-1];


  VAR_36->sel.family = FUNC_8(VAR_51, &VAR_36->sel.saddr);
  VAR_36->sel.prefixlen_s = VAR_51->sadb_address_prefixlen;
 }

 if (!VAR_36->sel.family)
  VAR_36->sel.family = VAR_36->props.family;

 if (VAR_35[VAR_25-1]) {
  struct sadb_x_nat_t_type* VAR_52;
  struct xfrm_encap_tmpl *VAR_53;

  VAR_36->encap = FUNC_3(sizeof(*VAR_36->encap), VAR_4);
  if (!VAR_36->encap)
   goto out;

  VAR_53 = VAR_36->encap;
  VAR_52 = VAR_35[VAR_25-1];
  VAR_53->encap_type = VAR_52->sadb_x_nat_t_type_type;

  if (VAR_35[VAR_24-1]) {
   struct sadb_x_nat_t_port* VAR_54 =
    VAR_35[VAR_24-1];
   VAR_53->encap_sport = VAR_54->sadb_x_nat_t_port_port;
  }
  if (VAR_35[VAR_23-1]) {
   struct sadb_x_nat_t_port* VAR_55 =
    VAR_35[VAR_23-1];
   VAR_53->encap_dport = VAR_55->sadb_x_nat_t_port_port;
  }
  FUNC_5(&VAR_53->encap_oa, 0, sizeof(VAR_53->encap_oa));
 }

 VAR_42 = FUNC_16(VAR_36);
 if (VAR_42)
  goto out;

 VAR_36->km.seq = VAR_34->sadb_msg_seq;
 return VAR_36;

out:
 VAR_36->km.state = VAR_29;
 FUNC_18(VAR_36);
 return FUNC_0(VAR_42);
}
