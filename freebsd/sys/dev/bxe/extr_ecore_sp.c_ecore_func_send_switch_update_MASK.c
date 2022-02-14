
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function_update_data {int tx_switch_suspend_change_flg; int sd_vlan_tag_change_flg; int sd_vlan_eth_type_change_flg; int sd_vlan_force_pri_change_flg; int sd_vlan_force_pri_flg; int update_tunn_cfg_flg; int inner_clss_l2gre; int inner_clss_vxlan; int inner_clss_l2geneve; int inner_rss; int echo; void* geneve_dst_port; void* vxlan_dst_port; void* sd_vlan_eth_type; void* sd_vlan_tag; scalar_t__ tx_switch_suspend; } ;
struct ecore_func_switch_update_params {int vlan_force_prio; int geneve_dst_port; int vxlan_dst_port; int changes; int vlan_eth_type; int vlan; } ;
struct TYPE_2__ {struct ecore_func_switch_update_params switch_update; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 void* FUNC_0 (int ) ;
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
 int FUNC_1 (struct function_update_data*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct bxe_softc *VAR_14,
     struct ecore_func_state_params *VAR_15)
{
 struct ecore_func_sp_obj *VAR_16 = VAR_15->f_obj;
 struct function_update_data *VAR_17 =
  (struct function_update_data *)VAR_16->rdata;
 ecore_dma_addr_t VAR_18 = VAR_16->rdata_mapping;
 struct ecore_func_switch_update_params *VAR_19 =
  &VAR_15->params.switch_update;

 FUNC_1(VAR_17, 0, sizeof(*VAR_17));


 if (FUNC_2(VAR_8,
      &VAR_19->changes)) {
 VAR_17->tx_switch_suspend_change_flg = 1;
  VAR_17->tx_switch_suspend =
   FUNC_2(VAR_7,
           &VAR_19->changes);
 }

 if (FUNC_2(VAR_1,
      &VAR_19->changes)) {
  VAR_17->sd_vlan_tag_change_flg = 1;
  VAR_17->sd_vlan_tag =
   FUNC_0(VAR_19->vlan);
 }

 if (FUNC_2(VAR_0,
      &VAR_19->changes)) {
  VAR_17->sd_vlan_eth_type_change_flg = 1;
  VAR_17->sd_vlan_eth_type =
   FUNC_0(VAR_19->vlan_eth_type);
 }

 if (FUNC_2(VAR_9,
      &VAR_19->changes)) {
  VAR_17->sd_vlan_force_pri_change_flg = 1;
  if (FUNC_2(VAR_10,
       &VAR_19->changes))
   VAR_17->sd_vlan_force_pri_flg = 1;
  VAR_17->sd_vlan_force_pri_flg =
   VAR_19->vlan_force_prio;
 }

 if (FUNC_2(VAR_2,
      &VAR_19->changes)) {
  VAR_17->update_tunn_cfg_flg = 1;
  if (FUNC_2(VAR_4,
       &VAR_19->changes))
   VAR_17->inner_clss_l2gre = 1;
  if (FUNC_2(VAR_5,
       &VAR_19->changes))
   VAR_17->inner_clss_vxlan = 1;
  if (FUNC_2(VAR_3,
       &VAR_19->changes))
   VAR_17->inner_clss_l2geneve = 1;
  if (FUNC_2(VAR_6,
       &VAR_19->changes))
   VAR_17->inner_rss = 1;

  VAR_17->vxlan_dst_port =
   FUNC_0(VAR_19->vxlan_dst_port);
  VAR_17->geneve_dst_port =
   FUNC_0(VAR_19->geneve_dst_port);
 }

 VAR_17->echo = VAR_13;







 return FUNC_3(VAR_14, VAR_12, 0,
        VAR_18, VAR_11);
}
