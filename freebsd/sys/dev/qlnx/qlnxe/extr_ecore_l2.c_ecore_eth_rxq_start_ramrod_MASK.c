
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rx_queue_start_ramrod_data {int complete_event_flg; int vf_rx_prod_use_zone_a; int vf_rx_prod_index; int cqe_pbl_addr; void* num_of_pbl_pages; int bd_base; void* bd_max_bytes; scalar_t__ complete_cqe_flg; void* rx_queue_id; int stats_counter_id; int vport_id; int sb_index; void* sb_id; } ;
struct TYPE_3__ {struct rx_queue_start_ramrod_data rx_queue_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int stats_id; int vport_id; } ;
struct ecore_queue_cid {scalar_t__ vfid; int vf_legacy; int vf_qid; TYPE_2__ abs; int sb_idx; int sb_igu_id; int opaque_fid; int cid; } ;
struct ecore_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_9,
      struct ecore_queue_cid *VAR_10,
      u16 VAR_11,
      dma_addr_t VAR_12,
      dma_addr_t VAR_13,
      u16 VAR_14)
{
 struct rx_queue_start_ramrod_data *VAR_15 = VAR_7;
 struct ecore_spq_entry *VAR_16 = VAR_7;
 struct ecore_sp_init_data VAR_17;
 enum _ecore_status_t VAR_18 = VAR_1;

 FUNC_1(VAR_9, VAR_0, "opaque_fid=0x%x, cid=0x%x, rx_qzone=0x%x, vport_id=0x%x, sb_id=0x%x\n",
     VAR_10->opaque_fid, VAR_10->cid, VAR_10->abs.queue_id,
     VAR_10->abs.vport_id, VAR_10->sb_igu_id);


 FUNC_3(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.cid = VAR_10->cid;
 VAR_17.opaque_fid = VAR_10->opaque_fid;
 VAR_17.comp_mode = VAR_4;

 VAR_18 = FUNC_4(VAR_9, &VAR_16,
       VAR_6,
       VAR_8, &VAR_17);
 if (VAR_18 != VAR_5)
  return VAR_18;

 VAR_15 = &VAR_16->ramrod.rx_queue_start;

 VAR_15->sb_id = FUNC_2(VAR_10->sb_igu_id);
 VAR_15->sb_index = VAR_10->sb_idx;
 VAR_15->vport_id = VAR_10->abs.vport_id;
 VAR_15->stats_counter_id = VAR_10->abs.stats_id;
 VAR_15->rx_queue_id = FUNC_2(VAR_10->abs.queue_id);
 VAR_15->complete_cqe_flg = 0;
 VAR_15->complete_event_flg = 1;

 VAR_15->bd_max_bytes = FUNC_2(VAR_11);
 FUNC_0(VAR_15->bd_base, VAR_12);

 VAR_15->num_of_pbl_pages = FUNC_2(VAR_14);
 FUNC_0(VAR_15->cqe_pbl_addr, VAR_13);

 if (VAR_10->vfid != VAR_3) {
  bool VAR_19 = !!(VAR_10->vf_legacy &
          VAR_2);

  VAR_15->vf_rx_prod_index = VAR_10->vf_qid;
  FUNC_1(VAR_9, VAR_0, "Queue%s is meant for VF rxq[%02x]\n",
      VAR_19 ? " [legacy]" : "",
      VAR_10->vf_qid);
  VAR_15->vf_rx_prod_use_zone_a = VAR_19;
 }

 return FUNC_5(VAR_9, VAR_16, VAR_7);
}
