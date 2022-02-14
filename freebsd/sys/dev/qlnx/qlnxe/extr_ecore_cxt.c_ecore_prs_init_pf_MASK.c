
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_tid_seg {int count; } ;
struct TYPE_3__ {scalar_t__ is_target; } ;
struct TYPE_4__ {TYPE_1__ fcoe_pf_params; } ;
struct ecore_hwfn {TYPE_2__ pf_params; struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {struct ecore_conn_type_cfg* conn_cfg; } ;
struct ecore_conn_type_cfg {struct ecore_tid_seg* tid_seg; int cid_count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_4)
{
 struct ecore_cxt_mngr *VAR_5 = VAR_4->p_cxt_mngr;
 struct ecore_conn_type_cfg *VAR_6;
 struct ecore_tid_seg *VAR_7;

 VAR_6 = &VAR_5->conn_cfg[VAR_1];


 if (!VAR_6->cid_count)
  return;

 VAR_7 = &VAR_6->tid_seg[VAR_0];
 if (VAR_4->pf_params.fcoe_pf_params.is_target) {
  FUNC_0(VAR_4,
     VAR_3,
     VAR_7->count);
 } else {
  FUNC_0(VAR_4,
    VAR_2,
    VAR_7->count);
 }
}
