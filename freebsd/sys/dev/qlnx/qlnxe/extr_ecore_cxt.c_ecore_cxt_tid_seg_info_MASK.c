
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_tid_seg {scalar_t__ count; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct TYPE_2__ {struct ecore_tid_seg* tid_seg; } ;


 size_t VAR_0 ;
 struct ecore_tid_seg* VAR_1 ;

__attribute__((used)) static struct ecore_tid_seg *FUNC_0(struct ecore_hwfn *VAR_2,
          u32 VAR_3)
{
 struct ecore_cxt_mngr *VAR_4 = VAR_2->p_cxt_mngr;
 u32 VAR_5;




 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->conn_cfg[VAR_5].tid_seg[VAR_3].count)
   return &VAR_4->conn_cfg[VAR_5].tid_seg[VAR_3];
 }
 return VAR_1;
}
