
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct fman_kg_scheme_regs {int kgse_mode; int kgse_ekdv; int* kgse_gec; int kgse_bmch; int kgse_bmcl; int kgse_fqb; int kgse_hc; int kgse_ppc; int kgse_spc; int kgse_ccbs; int kgse_ekfc; int kgse_dv1; int kgse_dv0; int kgse_mv; } ;
struct TYPE_9__ {int qlcv_bits_sel; scalar_t__ base_offset; } ;
struct TYPE_8__ {scalar_t__ shift; int base; scalar_t__ mask; scalar_t__ bypass_pp_gen; } ;
struct TYPE_7__ {int mask; scalar_t__ shift_r; scalar_t__ sym; scalar_t__ use_hash; } ;
struct TYPE_10__ {int mac_addr; int vlan_tci; int etype; int ppp_sid; int ppp_pid; int mpls; int ip_addr; int ptype; int ip_tos_tc; int ipv6_fl; int ipsec_spi; int l4_port; int tcp_flg; } ;
struct fman_kg_extract_params {scalar_t__ gen_extract_num; int masks_num; TYPE_1__* masks; struct fman_kg_gen_extract_params* gen_extract; TYPE_5__ known_fields_def; int known_fields; int def_scheme_1; int def_scheme_0; } ;
struct fman_kg_scheme_params {scalar_t__ next_engine; int base_fqid; int counter_value; scalar_t__ update_counter; TYPE_4__ cc_params; TYPE_3__ policer_params; scalar_t__ bypass_fqid_gen; TYPE_2__ hash_params; struct fman_kg_extract_params extract_params; int match_vector; int next_engine_action; } ;
struct fman_kg_gen_extract_params {scalar_t__ type; scalar_t__ extract; int offset; int no_validation; int src; scalar_t__ mask; scalar_t__ def_val; } ;
struct TYPE_6__ {int field_or_gen_idx; scalar_t__ mask; scalar_t__ offset; scalar_t__ is_known; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_40 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct fman_kg_scheme_regs*,int ,int) ;

int FUNC_6(struct fman_kg_scheme_params *VAR_41,
    struct fman_kg_scheme_regs *VAR_42)
{
 struct fman_kg_extract_params *VAR_43;
 struct fman_kg_gen_extract_params *VAR_44;
 uint32_t VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
 uint8_t VAR_50, VAR_51, VAR_52;


 FUNC_5(VAR_42, 0, sizeof(struct fman_kg_scheme_regs));


 VAR_45 = FUNC_3(VAR_41->next_engine,
   VAR_41->next_engine_action);
 if (VAR_45 == VAR_40) {
  return -VAR_0;
 }

 if (VAR_41->next_engine == VAR_3) {
  VAR_45 |= VAR_30;
 }
 else if (VAR_41->next_engine == VAR_2) {
  VAR_45 |= (uint32_t)VAR_41->cc_params.base_offset <<
    VAR_28;
 }

 VAR_45 |= VAR_29;
 VAR_42->kgse_mode = VAR_45;


 VAR_42->kgse_mv = VAR_41->match_vector;

 VAR_43 = &VAR_41->extract_params;


 VAR_42->kgse_dv0 = VAR_43->def_scheme_0;
 VAR_42->kgse_dv1 = VAR_43->def_scheme_1;


 VAR_42->kgse_ekfc = VAR_43->known_fields;


 VAR_45 = 0;
 VAR_45 |= VAR_43->known_fields_def.mac_addr <<
   VAR_10;
 VAR_45 |= VAR_43->known_fields_def.vlan_tci <<
   VAR_16;
 VAR_45 |= VAR_43->known_fields_def.etype <<
   VAR_4;
 VAR_45 |= VAR_43->known_fields_def.ppp_sid <<
   VAR_13;
 VAR_45 |= VAR_43->known_fields_def.ppp_pid <<
   VAR_12;
 VAR_45 |= VAR_43->known_fields_def.mpls <<
   VAR_11;
 VAR_45 |= VAR_43->known_fields_def.ip_addr <<
   VAR_6;
 VAR_45 |= VAR_43->known_fields_def.ptype <<
   VAR_14;
 VAR_45 |= VAR_43->known_fields_def.ip_tos_tc <<
   VAR_7;
 VAR_45 |= VAR_43->known_fields_def.ipv6_fl <<
   VAR_8;
 VAR_45 |= VAR_43->known_fields_def.ipsec_spi <<
   VAR_5;
 VAR_45 |= VAR_43->known_fields_def.l4_port <<
   VAR_9;
 VAR_45 |= VAR_43->known_fields_def.tcp_flg <<
   VAR_15;

 VAR_42->kgse_ekdv = VAR_45;


 if (VAR_43->gen_extract_num > VAR_39) {
  return -VAR_0;
 }

 for (VAR_46 = 0; VAR_46 < VAR_43->gen_extract_num; VAR_46++) {
  VAR_44 = VAR_43->gen_extract + VAR_46;

  VAR_45 = VAR_23;
  VAR_45 |= (uint32_t)VAR_44->def_val <<
    VAR_17;

  if (VAR_44->type == VAR_1) {
   if ((VAR_44->extract > VAR_21) ||
     (VAR_44->extract == 0)) {
    return -VAR_0;
   }
  } else {
   VAR_45 |= VAR_20;
  }

  VAR_45 |= (uint32_t)VAR_44->extract <<
    VAR_22;
  VAR_45 |= (uint32_t)VAR_44->mask <<
    VAR_19;

  VAR_50 = VAR_44->offset;
  VAR_52 = FUNC_4(VAR_44->src,
    VAR_44->no_validation,
    &VAR_50);
  VAR_45 |= (uint32_t)VAR_52 << VAR_18;
  VAR_45 |= VAR_50;

  VAR_42->kgse_gec[VAR_46] = VAR_45;
 }


 if (VAR_43->masks_num > VAR_37) {
  return -VAR_0;
 }

 VAR_47 = 0;
 VAR_48 = 0;
 VAR_49 = 0;
 for (VAR_46 = 0; VAR_46 < VAR_43->masks_num; VAR_46++) {

  FUNC_1(VAR_51, VAR_46);
  if (VAR_43->masks[VAR_46].is_known) {

   VAR_47 |= VAR_43->masks[VAR_46].field_or_gen_idx <<
     VAR_51;
  } else {

   VAR_47 |= (VAR_43->masks[VAR_46].field_or_gen_idx +
     VAR_38) << VAR_51;
  }


  FUNC_0(VAR_51, VAR_46);
  if (VAR_46 < 2) {
   VAR_47 |= (uint32_t)VAR_43->masks[VAR_46].offset <<
     VAR_51;
  } else {
   VAR_49 |= (uint32_t)VAR_43->masks[VAR_46].offset <<
     VAR_51;
  }


  FUNC_2(VAR_51, VAR_46);
  VAR_48 |= (uint32_t)VAR_43->masks[VAR_46].mask << VAR_51;
 }




 for (VAR_46 = VAR_43->masks_num; VAR_46 < VAR_37; VAR_46++) {
  FUNC_2(VAR_51, VAR_46);
  VAR_48 |= 0xFF << VAR_51;
 }

 VAR_42->kgse_bmch = VAR_47;
 VAR_42->kgse_bmcl = VAR_48;



 if (VAR_41->base_fqid & ~0x00FFFFFF) {
  return -VAR_0;
 }

 VAR_49 |= VAR_41->base_fqid;
 VAR_42->kgse_fqb = VAR_49;


 VAR_45 = 0;
 if (VAR_41->hash_params.use_hash) {

  if (VAR_41->hash_params.mask & ~0x00FFFFFF) {
   return -VAR_0;
  }





  if (VAR_41->hash_params.shift_r > VAR_24) {
   return -VAR_0;
  }

  VAR_45 |= VAR_41->hash_params.mask;
  VAR_45 |= (uint32_t)VAR_41->hash_params.shift_r <<
    VAR_25;

  if (VAR_41->hash_params.sym) {
   VAR_45 |= VAR_27;
  }

 }

 if (VAR_41->bypass_fqid_gen) {
  VAR_45 |= VAR_26;
 }

 VAR_42->kgse_hc = VAR_45;


 if (VAR_41->policer_params.bypass_pp_gen) {
  VAR_45 = 0;
 } else {



  if (VAR_41->policer_params.shift > VAR_32) {
   return -VAR_0;
  }

  VAR_45 = VAR_41->policer_params.base;
  VAR_45 |= ((uint32_t)VAR_41->policer_params.shift <<
    VAR_34) &
    VAR_33;
  VAR_45 |= ((uint32_t)VAR_41->policer_params.shift <<
    VAR_36) &
    VAR_35;
  VAR_45 |= (uint32_t)VAR_41->policer_params.mask <<
    VAR_31;
 }

 VAR_42->kgse_ppc = VAR_45;


 if (VAR_41->next_engine == VAR_2) {
  VAR_42->kgse_ccbs = VAR_41->cc_params.qlcv_bits_sel;
 }


 if (VAR_41->update_counter) {
  VAR_42->kgse_spc = VAR_41->counter_value;
 }

 return 0;
}
