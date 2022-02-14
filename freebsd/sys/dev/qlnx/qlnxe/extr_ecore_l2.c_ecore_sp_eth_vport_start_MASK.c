
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct eth_vport_tpa_param {int tpa_max_size; int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_ipv4_en_flg; int tpa_ipv6_en_flg; int tpa_ipv4_tunn_en_flg; int tpa_ipv6_tunn_en_flg; int tpa_pkt_split_flg; int tpa_gro_consistent_flg; int tpa_max_aggs_num; int max_buff_num; int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_6__ {void* values; } ;
struct TYPE_5__ {void* state; } ;
struct vport_start_ramrod_data {int ctl_frame_mac_check_en; int ctl_frame_ethtype_check_en; int sw_fid; scalar_t__ tx_switching_en; struct eth_vport_tpa_param tpa_param; TYPE_3__ tx_err_behav; TYPE_2__ rx_mode; int zero_placement_offset; int untagged; int drop_ttl0_en; int inner_vlan_removal_en; int handle_ptp_pkts; void* mtu; int vport_id; } ;
struct TYPE_4__ {struct vport_start_ramrod_data vport_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_vport_start_params {int mtu; int tpa_mode; int concrete_fid; int check_ethtype; int check_mac; scalar_t__ tx_switching; int max_buffers_per_cqe; scalar_t__ b_err_ctrl_frame; scalar_t__ b_err_big_pkt; scalar_t__ b_err_vlan_insert_with_inband; scalar_t__ b_err_illegal_inband_mode; scalar_t__ b_err_anti_spoof; scalar_t__ b_err_small_pkt; scalar_t__ b_err_illegal_vlan_mode; int zero_placement_offset; int only_untagged; int drop_ttl0; int remove_inner_vlan; int handle_ptp_pkts; int opaque_fid; int vport_id; } ;
struct ecore_sp_init_data {int tpa_max_size; int tpa_min_size_to_cont; int tpa_min_size_to_start; int tpa_ipv4_en_flg; int tpa_ipv6_en_flg; int tpa_ipv4_tunn_en_flg; int tpa_ipv6_tunn_en_flg; int tpa_pkt_split_flg; int tpa_gro_consistent_flg; int tpa_max_aggs_num; int max_buff_num; int comp_mode; int opaque_fid; int cid; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_14 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct eth_vport_tpa_param*,int ,int) ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_hwfn*,int ,int *) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct eth_vport_tpa_param*) ;
 int FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_17,
           struct ecore_sp_vport_start_params *VAR_18)
{
 struct vport_start_ramrod_data *VAR_19 = VAR_15;
 struct ecore_spq_entry *VAR_20 = VAR_15;
 struct ecore_sp_init_data VAR_21;
 struct eth_vport_tpa_param *VAR_22;
 u16 VAR_23 = 0, VAR_24 = 0;
 u8 VAR_25 = 0;
 enum _ecore_status_t VAR_26 = VAR_0;

 VAR_26 = FUNC_5(VAR_17, VAR_18->vport_id, &VAR_25);
 if (VAR_26 != VAR_2)
  return VAR_26;


 FUNC_2(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.cid = FUNC_7(VAR_17);
 VAR_21.opaque_fid = VAR_18->opaque_fid;
 VAR_21.comp_mode = VAR_1;

 VAR_26 = FUNC_6(VAR_17, &VAR_20,
       VAR_3,
       VAR_16, &VAR_21);
 if (VAR_26 != VAR_2)
  return VAR_26;

 VAR_19 = &VAR_20->ramrod.vport_start;
 VAR_19->vport_id = VAR_25;

 VAR_19->mtu = FUNC_1(VAR_18->mtu);
 VAR_19->handle_ptp_pkts = VAR_18->handle_ptp_pkts;
 VAR_19->inner_vlan_removal_en = VAR_18->remove_inner_vlan;
 VAR_19->drop_ttl0_en = VAR_18->drop_ttl0;
 VAR_19->untagged = VAR_18->only_untagged;
 VAR_19->zero_placement_offset = VAR_18->zero_placement_offset;

 FUNC_3(VAR_23, VAR_14, 1);
 FUNC_3(VAR_23, VAR_13, 1);

 VAR_19->rx_mode.state = FUNC_1(VAR_23);


 FUNC_3(VAR_24, VAR_9,
    VAR_18->b_err_illegal_vlan_mode ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_11,
    VAR_18->b_err_small_pkt ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_6,
    VAR_18->b_err_anti_spoof ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_8,
    VAR_18->b_err_illegal_inband_mode ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_12,
    VAR_18->b_err_vlan_insert_with_inband ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_10,
    VAR_18->b_err_big_pkt ?
    VAR_5 : 0);
 FUNC_3(VAR_24, VAR_7,
    VAR_18->b_err_ctrl_frame ?
    VAR_5 : 0);
 VAR_19->tx_err_behav.values = FUNC_1(VAR_24);


 VAR_22 = &VAR_19->tpa_param;
 FUNC_2(VAR_22, 0, sizeof(struct eth_vport_tpa_param));
 VAR_22->max_buff_num = VAR_18->max_buffers_per_cqe;

 switch (VAR_18->tpa_mode) {
 case 128:
  VAR_22->tpa_max_aggs_num = VAR_4;
  VAR_22->tpa_max_size = (u16)-1;
  VAR_22->tpa_min_size_to_cont = VAR_18->mtu/2;
  VAR_22->tpa_min_size_to_start = VAR_18->mtu/2;
  VAR_22->tpa_ipv4_en_flg = 1;
  VAR_22->tpa_ipv6_en_flg = 1;
  VAR_22->tpa_ipv4_tunn_en_flg = 1;
  VAR_22->tpa_ipv6_tunn_en_flg = 1;
  VAR_22->tpa_pkt_split_flg = 1;
  VAR_22->tpa_gro_consistent_flg = 1;
  break;
 default:
  break;
 }

 VAR_19->tx_switching_en = VAR_18->tx_switching;

 if (FUNC_0(VAR_17->p_dev))
  VAR_19->tx_switching_en = 0;


 VAR_19->ctl_frame_mac_check_en = !!VAR_18->check_mac;
 VAR_19->ctl_frame_ethtype_check_en = !!VAR_18->check_ethtype;


 VAR_19->sw_fid = FUNC_4(VAR_18->concrete_fid);

 return FUNC_8(VAR_17, VAR_20, VAR_15);
}
