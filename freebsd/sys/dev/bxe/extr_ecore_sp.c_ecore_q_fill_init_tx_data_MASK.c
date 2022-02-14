
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_txq_setup_params {int dscr_map; int tss_leading_cl_id; int sb_cq_index; int fw_sb_id; int default_vlan; } ;
struct ecore_queue_sp_obj {int dummy; } ;
struct TYPE_2__ {void* hi; void* lo; } ;
struct client_init_tx_data {scalar_t__ state; TYPE_1__ tx_bd_page_base; int tss_leading_client_id; int tx_sb_index_number; int tx_status_block_id; int tunnel_non_lso_pcsum_location; void* tunnel_lso_inc_ip_id; void* refuse_outband_vlan_flg; void* force_default_pri_flg; void* anti_spoofing_flg; void* tx_switching_flg; void* default_vlan_flg; int default_vlan; void* enforce_security_flg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ecore_queue_sp_obj *VAR_10,
    struct ecore_txq_setup_params *VAR_11,
    struct client_init_tx_data *VAR_12,
    unsigned long *VAR_13)
{
 VAR_12->enforce_security_flg =
  FUNC_2(VAR_8, VAR_13);
 VAR_12->default_vlan =
  FUNC_0(VAR_11->default_vlan);
 VAR_12->default_vlan_flg =
  FUNC_2(VAR_3, VAR_13);
 VAR_12->tx_switching_flg =
  FUNC_2(VAR_9, VAR_13);
 VAR_12->anti_spoofing_flg =
  FUNC_2(VAR_2, VAR_13);
 VAR_12->force_default_pri_flg =
  FUNC_2(VAR_4, VAR_13);
 VAR_12->refuse_outband_vlan_flg =
  FUNC_2(VAR_6, VAR_13);
 VAR_12->tunnel_lso_inc_ip_id =
  FUNC_2(VAR_7, VAR_13);
 VAR_12->tunnel_non_lso_pcsum_location =
  FUNC_2(VAR_5, VAR_13) ? VAR_1 :
           VAR_0;

 VAR_12->tx_status_block_id = VAR_11->fw_sb_id;
 VAR_12->tx_sb_index_number = VAR_11->sb_cq_index;
 VAR_12->tss_leading_client_id = VAR_11->tss_leading_cl_id;

 VAR_12->tx_bd_page_base.lo =
  FUNC_1(FUNC_4(VAR_11->dscr_map));
 VAR_12->tx_bd_page_base.hi =
  FUNC_1(FUNC_3(VAR_11->dscr_map));


 VAR_12->state = 0;
}
