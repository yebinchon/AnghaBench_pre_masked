
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct vport_update_ramrod_data_cmn {int update_tx_switching_en_flg; void* update_anti_spoofing_en_flg; int anti_spoofing_en; scalar_t__ tx_switching_en; int silent_vlan_removal_en; int update_default_vlan_flg; int default_vlan; void* update_default_vlan_en_flg; int default_vlan_en; void* update_inner_vlan_removal_en_flg; int inner_vlan_removal_en; void* update_accept_any_vlan_flg; int accept_any_vlan; int update_tx_active_flg; int tx_active_flg; int update_rx_active_flg; int rx_active_flg; void* vport_id; } ;
struct vport_update_ramrod_data {struct vport_update_ramrod_data_cmn common; } ;
struct TYPE_2__ {struct vport_update_ramrod_data vport_update; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_spq_comp_cb {int dummy; } ;
struct ecore_sp_vport_update_params {int update_tx_switching_flg; int sge_tpa_params; int accept_flags; void* update_anti_spoofing_en_flg; int anti_spoofing_en; scalar_t__ tx_switching_flg; int silent_vlan_removal_flg; int update_default_vlan_flg; int default_vlan; void* update_default_vlan_enable_flg; int default_vlan_enable_flg; void* update_inner_vlan_removal_flg; int inner_vlan_removal_flg; void* update_accept_any_vlan_flg; int accept_any_vlan; int update_vport_active_tx_flg; int vport_active_tx_flg; int update_vport_active_rx_flg; int vport_active_rx_flg; int opaque_fid; int vport_id; struct ecore_rss_params* rss_params; } ;
struct ecore_sp_init_data {int comp_mode; struct ecore_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct ecore_rss_params {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ecore_hwfn*,int ,void**) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_7 (struct ecore_hwfn*,struct vport_update_ramrod_data*,int ) ;
 int FUNC_8 (struct vport_update_ramrod_data*,struct ecore_sp_vport_update_params*) ;
 int FUNC_9 (struct ecore_hwfn*,struct vport_update_ramrod_data*,struct ecore_rss_params*) ;
 int FUNC_10 (struct vport_update_ramrod_data*,int ) ;
 int FUNC_11 (struct ecore_hwfn*) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_spq_entry*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_sp_vport_update_params*) ;

enum _ecore_status_t FUNC_15(struct ecore_hwfn *VAR_5,
        struct ecore_sp_vport_update_params *VAR_6,
        enum spq_mode VAR_7,
        struct ecore_spq_comp_cb *VAR_8)
{
 struct ecore_rss_params *VAR_9 = VAR_6->rss_params;
 struct vport_update_ramrod_data_cmn *VAR_10;
 struct ecore_sp_init_data VAR_11;
 struct vport_update_ramrod_data *VAR_12 = VAR_3;
 struct ecore_spq_entry *VAR_13 = VAR_3;
 u8 VAR_14 = 0, VAR_15;
 enum _ecore_status_t VAR_16 = VAR_0;

 if (FUNC_2(VAR_5->p_dev)) {
  VAR_16 = FUNC_14(VAR_5, VAR_6);
  return VAR_16;
 }

 VAR_16 = FUNC_5(VAR_5, VAR_6->vport_id, &VAR_14);
 if (VAR_16 != VAR_1)
  return VAR_16;


 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.cid = FUNC_11(VAR_5);
 VAR_11.opaque_fid = VAR_6->opaque_fid;
 VAR_11.comp_mode = VAR_7;
 VAR_11.p_comp_data = VAR_8;

 VAR_16 = FUNC_6(VAR_5, &VAR_13,
       VAR_2,
       VAR_4, &VAR_11);
 if (VAR_16 != VAR_1)
  return VAR_16;


 VAR_12 = &VAR_13->ramrod.vport_update;
 VAR_10 = &VAR_12->common;

 VAR_10->vport_id = VAR_14;

 VAR_10->rx_active_flg = VAR_6->vport_active_rx_flg;
 VAR_10->update_rx_active_flg = VAR_6->update_vport_active_rx_flg;
 VAR_10->tx_active_flg = VAR_6->vport_active_tx_flg;
 VAR_10->update_tx_active_flg = VAR_6->update_vport_active_tx_flg;

 VAR_10->accept_any_vlan = VAR_6->accept_any_vlan;
 VAR_15 = VAR_6->update_accept_any_vlan_flg;
 VAR_10->update_accept_any_vlan_flg = VAR_15;

 VAR_10->inner_vlan_removal_en = VAR_6->inner_vlan_removal_flg;
 VAR_15 = VAR_6->update_inner_vlan_removal_flg;
 VAR_10->update_inner_vlan_removal_en_flg = VAR_15;

 VAR_10->default_vlan_en = VAR_6->default_vlan_enable_flg;
 VAR_15 = VAR_6->update_default_vlan_enable_flg;
 VAR_10->update_default_vlan_en_flg = VAR_15;

 VAR_10->default_vlan = FUNC_3(VAR_6->default_vlan);
 VAR_10->update_default_vlan_flg = VAR_6->update_default_vlan_flg;

 VAR_10->silent_vlan_removal_en = VAR_6->silent_vlan_removal_flg;

 VAR_12->common.tx_switching_en = VAR_6->tx_switching_flg;

 if (FUNC_0(VAR_5->p_dev))
  if (VAR_12->common.tx_switching_en ||
      VAR_12->common.update_tx_switching_en_flg) {
   FUNC_1(VAR_5, 0, "FPGA - why are we seeing tx-switching? Overriding it\n");
   VAR_12->common.tx_switching_en = 0;
   VAR_12->common.update_tx_switching_en_flg = 1;
  }

 VAR_10->update_tx_switching_en_flg = VAR_6->update_tx_switching_flg;

 VAR_10->anti_spoofing_en = VAR_6->anti_spoofing_en;
 VAR_15 = VAR_6->update_anti_spoofing_en_flg;
 VAR_12->common.update_anti_spoofing_en_flg = VAR_15;

 VAR_16 = FUNC_9(VAR_5, VAR_12, VAR_9);
 if (VAR_16 != VAR_1) {

  FUNC_13(VAR_5, VAR_13);
  return VAR_16;
 }


 FUNC_8(VAR_12, VAR_6);

 FUNC_7(VAR_5, VAR_12, VAR_6->accept_flags);
 FUNC_10(VAR_12, VAR_6->sge_tpa_params);
 return FUNC_12(VAR_5, VAR_13, VAR_3);
}
