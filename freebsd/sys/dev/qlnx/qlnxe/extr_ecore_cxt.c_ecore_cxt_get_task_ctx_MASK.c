
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct ecore_tid_seg {size_t type; int has_fl_mem; } ;
struct ecore_ilt_client_cfg {struct ecore_ilt_cli_blk* pf_blks; int active; } ;
struct ecore_ilt_cli_blk {size_t real_size_in_page; size_t start_line; int total_size; } ;
struct TYPE_4__ {int personality; } ;
struct ecore_hwfn {TYPE_1__ hw_info; struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {size_t* task_type_size; size_t pf_start_line; TYPE_3__* ilt_shadow; TYPE_2__* conn_cfg; struct ecore_ilt_client_cfg* clients; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {scalar_t__ p_virt; } ;
struct TYPE_5__ {struct ecore_tid_seg* tid_seg; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_10,
         u32 VAR_11,
         u8 VAR_12,
         void **VAR_13)
{
 struct ecore_cxt_mngr *VAR_14 = VAR_10->p_cxt_mngr;
 struct ecore_ilt_client_cfg *VAR_15;
 struct ecore_tid_seg *VAR_16;
 struct ecore_ilt_cli_blk *VAR_17;
 u32 VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21;
 u32 VAR_22, VAR_23;


 switch (VAR_10->hw_info.personality) {
 case 129:
  VAR_22 = VAR_8;
  VAR_23 = VAR_2;
  break;
 case 128:
  VAR_22 = VAR_9;
  VAR_23 = VAR_3;
  break;
 default:
  return VAR_4;
 }

 VAR_15 = &VAR_14->clients[VAR_6];
 if (!VAR_15->active) {
  return VAR_4;
 }

 VAR_16 = &VAR_14->conn_cfg[VAR_22].tid_seg[VAR_23];

 if (VAR_12 == VAR_1) {
  VAR_17 = &VAR_15->pf_blks[FUNC_1(VAR_23)];
 } else if (VAR_12 == VAR_0) {
  if (!VAR_16->has_fl_mem) {
   return VAR_4;
  }
  VAR_17 = &VAR_15->pf_blks[FUNC_0(VAR_23, VAR_7)];
 } else {
  return VAR_4;
 }
 VAR_21 = FUNC_2(VAR_17->total_size,
       VAR_17->real_size_in_page);
 VAR_19 = VAR_14->task_type_size[VAR_16->type];
 VAR_18 = VAR_17->real_size_in_page / VAR_19;

 if (VAR_21 < VAR_11/VAR_18)
  return VAR_4;

 VAR_20 = VAR_11 / VAR_18 + VAR_17->start_line -
    VAR_14->pf_start_line;
 *VAR_13 = (u8 *)VAR_14->ilt_shadow[VAR_20].p_virt +
        (VAR_11 % VAR_18) * VAR_19;

 return VAR_5;
}
