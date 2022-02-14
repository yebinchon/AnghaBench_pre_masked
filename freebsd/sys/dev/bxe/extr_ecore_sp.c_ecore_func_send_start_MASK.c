
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int val; } ;
struct function_start_data {int sd_accept_mf_clss_fail_match_ethtype; int c2s_pri_default; TYPE_2__ c2s_pri_trans_table; scalar_t__ c2s_pri_tt_valid; int no_added_tags; void* sd_vlan_eth_type; int sd_vlan_force_pri_val; int sd_vlan_force_pri_flg; void* sd_accept_mf_clss_fail_ethtype; int sd_accept_mf_clss_fail; int inner_rss; int inner_clss_vxlan; int inner_clss_l2geneve; int inner_clss_l2gre; int geneve_dst_port; int vxlan_dst_port; int network_cos_mode; int path_id; void* sd_vlan_tag; scalar_t__ function_mode; } ;
struct ecore_func_start_params {int c2s_pri_default; int c2s_pri; scalar_t__ c2s_pri_valid; int no_added_tags; scalar_t__ sd_vlan_eth_type; int sd_vlan_force_pri_val; int sd_vlan_force_pri; scalar_t__ class_fail_ethtype; int class_fail; int inner_rss; int inner_clss_vxlan; int inner_clss_l2geneve; int inner_clss_l2gre; int geneve_dst_port; int vxlan_dst_port; int network_cos_mode; scalar_t__ sd_vlan_tag; scalar_t__ mf_mode; } ;
struct TYPE_3__ {struct ecore_func_start_params start; } ;
struct ecore_func_state_params {TYPE_1__ params; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_dma_addr_t ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct function_start_data*,int ,int) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_5(struct bxe_softc *VAR_3,
     struct ecore_func_state_params *VAR_4)
{
 struct ecore_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct function_start_data *VAR_6 =
  (struct function_start_data *)VAR_5->rdata;
 ecore_dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct ecore_func_start_params *VAR_8 = &VAR_4->params.start;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));


 VAR_6->function_mode = (uint8_t)VAR_8->mf_mode;
 VAR_6->sd_vlan_tag = FUNC_0(VAR_8->sd_vlan_tag);
 VAR_6->path_id = FUNC_2(VAR_3);
 VAR_6->network_cos_mode = VAR_8->network_cos_mode;

 VAR_6->vxlan_dst_port = VAR_8->vxlan_dst_port;
 VAR_6->geneve_dst_port = VAR_8->geneve_dst_port;
 VAR_6->inner_clss_l2gre = VAR_8->inner_clss_l2gre;
 VAR_6->inner_clss_l2geneve = VAR_8->inner_clss_l2geneve;
 VAR_6->inner_clss_vxlan = VAR_8->inner_clss_vxlan;
 VAR_6->inner_rss = VAR_8->inner_rss;

 VAR_6->sd_accept_mf_clss_fail = VAR_8->class_fail;
 if (VAR_8->class_fail_ethtype) {
  VAR_6->sd_accept_mf_clss_fail_match_ethtype = 1;
  VAR_6->sd_accept_mf_clss_fail_ethtype =
   FUNC_0(VAR_8->class_fail_ethtype);
 }
 VAR_6->sd_vlan_force_pri_flg = VAR_8->sd_vlan_force_pri;
 VAR_6->sd_vlan_force_pri_val = VAR_8->sd_vlan_force_pri_val;






 if (VAR_8->sd_vlan_eth_type)
  VAR_6->sd_vlan_eth_type =
   FUNC_0(VAR_8->sd_vlan_eth_type);
 else
  VAR_6->sd_vlan_eth_type =
   FUNC_0((uint16_t) 0x8100);

 VAR_6->no_added_tags = VAR_8->no_added_tags;

 VAR_6->c2s_pri_tt_valid = VAR_8->c2s_pri_valid;
 if (VAR_6->c2s_pri_tt_valid) {
  FUNC_4(VAR_6->c2s_pri_trans_table.val,
         VAR_8->c2s_pri,
         VAR_0);
  VAR_6->c2s_pri_default = VAR_8->c2s_pri_default;
 }







 return FUNC_3(VAR_3, VAR_2, 0,
        VAR_7, VAR_1);
}
