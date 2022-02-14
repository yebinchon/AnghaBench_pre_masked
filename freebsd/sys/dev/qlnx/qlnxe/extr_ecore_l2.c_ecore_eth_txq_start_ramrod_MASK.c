
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tx_queue_start_ramrod_data {void* qm_pq_id; int pbl_base_addr; void* pbl_size; void* same_as_last_id; void* queue_zone_id; int stats_counter_id; int sb_index; void* sb_id; int vport_id; } ;
struct TYPE_3__ {struct tx_queue_start_ramrod_data tx_queue_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int stats_id; int vport_id; } ;
struct ecore_queue_cid {TYPE_2__ abs; int sb_idx; int sb_igu_id; int opaque_fid; int cid; } ;
struct ecore_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_6,
      struct ecore_queue_cid *VAR_7,
      dma_addr_t VAR_8, u16 VAR_9,
      u16 VAR_10)
{
 struct tx_queue_start_ramrod_data *VAR_11 = VAR_4;
 struct ecore_spq_entry *VAR_12 = VAR_4;
 struct ecore_sp_init_data VAR_13;
 enum _ecore_status_t VAR_14 = VAR_0;


 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.cid = VAR_7->cid;
 VAR_13.opaque_fid = VAR_7->opaque_fid;
 VAR_13.comp_mode = VAR_1;

 VAR_14 = FUNC_3(VAR_6, &VAR_12,
       VAR_3,
       VAR_5, &VAR_13);
 if (VAR_14 != VAR_2)
  return VAR_14;

 VAR_11 = &VAR_12->ramrod.tx_queue_start;
 VAR_11->vport_id = VAR_7->abs.vport_id;

 VAR_11->sb_id = FUNC_1(VAR_7->sb_igu_id);
 VAR_11->sb_index = VAR_7->sb_idx;
 VAR_11->stats_counter_id = VAR_7->abs.stats_id;

 VAR_11->queue_zone_id = FUNC_1(VAR_7->abs.queue_id);
 VAR_11->same_as_last_id = FUNC_1(VAR_7->abs.queue_id);

 VAR_11->pbl_size = FUNC_1(VAR_9);
 FUNC_0(VAR_11->pbl_base_addr, VAR_8);

 VAR_11->qm_pq_id = FUNC_1(VAR_10);

 return FUNC_4(VAR_6, VAR_12, VAR_4);
}
