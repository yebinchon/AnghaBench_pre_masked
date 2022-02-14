
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int error_type; } ;
struct core_rx_start_ramrod_data {int complete_event_flg; int report_outer_vlan; int mf_si_bcast_accept_all; int mf_si_mcast_accept_all; int gsi_offload_flag; TYPE_5__ action_on_error; scalar_t__ main_func_queue; int queue_id; int inner_vlan_stripping_en; int drop_ttl0_flg; int cqe_pbl_addr; void* num_of_pbl_pages; int bd_base; void* mtu; int sb_index; void* sb_id; } ;
struct TYPE_8__ {struct core_rx_start_ramrod_data core_rx_queue_start; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_9__ {int p_phys_addr; } ;
struct ecore_ll2_rx_queue {int rcq_chain; TYPE_3__ rxq_chain; int rx_sb_index; } ;
struct TYPE_12__ {int conn_type; int gsi_enable; int rx_vlan_removal_en; int rx_drop_ttl0_flg; scalar_t__ mtu; } ;
struct ecore_ll2_info {TYPE_6__ input; scalar_t__ main_func_queue; int queue_id; int cid; struct ecore_ll2_rx_queue rx_queue; } ;
struct TYPE_7__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_4__* p_dev; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum ecore_ll2_conn_type { ____Placeholder_ecore_ll2_conn_type } ecore_ll2_conn_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_10__ {int mf_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_8 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_9(struct ecore_hwfn *VAR_10,
       struct ecore_ll2_info *VAR_11,
       u8 VAR_12)
{
 enum ecore_ll2_conn_type VAR_13 = VAR_11->input.conn_type;
 struct ecore_ll2_rx_queue *VAR_14 = &VAR_11->rx_queue;
 struct core_rx_start_ramrod_data *VAR_15 = VAR_8;
 struct ecore_spq_entry *VAR_16 = VAR_8;
 struct ecore_sp_init_data VAR_17;
 u16 VAR_18;
 enum _ecore_status_t VAR_19 = VAR_7;


 FUNC_2(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.cid = VAR_11->cid;
 VAR_17.opaque_fid = VAR_10->hw_info.opaque_fid;
 VAR_17.comp_mode = VAR_6;

 VAR_19 = FUNC_7(VAR_10, &VAR_16,
       VAR_0,
       VAR_9, &VAR_17);
 if (VAR_19 != VAR_7)
  return VAR_19;

 VAR_15 = &VAR_16->ramrod.core_rx_queue_start;

 VAR_15->sb_id = FUNC_1(FUNC_6(VAR_10));
 VAR_15->sb_index = VAR_14->rx_sb_index;
 VAR_15->complete_event_flg = 1;

 VAR_15->mtu = FUNC_1(VAR_11->input.mtu);
 FUNC_0(VAR_15->bd_base,
         VAR_14->rxq_chain.p_phys_addr);
 VAR_18 = (u16)FUNC_4(&VAR_14->rcq_chain);
 VAR_15->num_of_pbl_pages = FUNC_1(VAR_18);
 FUNC_0(VAR_15->cqe_pbl_addr,
         FUNC_5(&VAR_14->rcq_chain));

 VAR_15->drop_ttl0_flg = VAR_11->input.rx_drop_ttl0_flg;
 VAR_15->inner_vlan_stripping_en =
  VAR_11->input.rx_vlan_removal_en;

 if (FUNC_3(VAR_5, &VAR_10->p_dev->mf_bits) &&
     (VAR_11->input.conn_type == VAR_1))
  VAR_15->report_outer_vlan = 1;
 VAR_15->queue_id = VAR_11->queue_id;
 VAR_15->main_func_queue = VAR_11->main_func_queue;

 if (FUNC_3(VAR_4,
     &VAR_10->p_dev->mf_bits) &&
     VAR_15->main_func_queue &&
     ((VAR_13 != VAR_3) &&
      (VAR_13 != VAR_2))) {
  VAR_15->mf_si_bcast_accept_all = 1;
  VAR_15->mf_si_mcast_accept_all = 1;
 } else {
  VAR_15->mf_si_bcast_accept_all = 0;
  VAR_15->mf_si_mcast_accept_all = 0;
 }

 VAR_15->action_on_error.error_type = VAR_12;
 VAR_15->gsi_offload_flag = VAR_11->input.gsi_enable;
 return FUNC_8(VAR_10, VAR_16, VAR_8);
}
