
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_tid_seg {size_t type; int has_fl_mem; } ;
struct ecore_tid_mem {int tid_size; int num_tids_per_block; scalar_t__ waste; int * blocks; } ;
struct TYPE_8__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_4__ p_size; struct ecore_ilt_cli_blk* pf_blks; int active; } ;
struct ecore_ilt_cli_blk {int real_size_in_page; size_t start_line; int total_size; } ;
struct TYPE_5__ {int personality; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; TYPE_1__ hw_info; } ;
struct ecore_cxt_mngr {size_t pf_start_line; int* task_type_size; TYPE_3__* ilt_shadow; TYPE_2__* conn_cfg; struct ecore_ilt_client_cfg* clients; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_7__ {int p_virt; } ;
struct TYPE_6__ {struct ecore_tid_seg* tid_seg; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_8,
      struct ecore_tid_mem *VAR_9)
{
 struct ecore_cxt_mngr *VAR_10 = VAR_8->p_cxt_mngr;
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct ecore_ilt_client_cfg *VAR_16;
 struct ecore_ilt_cli_blk *VAR_17;
 struct ecore_tid_seg *VAR_18;


 switch (VAR_8->hw_info.personality) {
 case 129:
  VAR_11 = VAR_6;
  VAR_12 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_7;
  VAR_12 = VAR_1;
  break;
 default:
  return VAR_2;
 }

 VAR_16 = &VAR_10->clients[VAR_4];
 if (!VAR_16->active) {
  return VAR_2;
 }

 VAR_18 = &VAR_10->conn_cfg[VAR_11].tid_seg[VAR_12];
 if (!VAR_18->has_fl_mem)
  return VAR_2;

 VAR_17 = &VAR_16->pf_blks[FUNC_0(VAR_12, VAR_5)];
 VAR_13 = FUNC_1(VAR_17->total_size,
       VAR_17->real_size_in_page);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_15 = VAR_14 + VAR_17->start_line -
         VAR_8->p_cxt_mngr->pf_start_line;
  VAR_9->blocks[VAR_14] = VAR_10->ilt_shadow[VAR_15].p_virt;
 }
 VAR_9->waste = FUNC_2(VAR_16->p_size.val) -
   VAR_17->real_size_in_page;
 VAR_9->tid_size = VAR_10->task_type_size[VAR_18->type];
 VAR_9->num_tids_per_block = VAR_17->real_size_in_page /
         VAR_9->tid_size;

 return VAR_3;
}
