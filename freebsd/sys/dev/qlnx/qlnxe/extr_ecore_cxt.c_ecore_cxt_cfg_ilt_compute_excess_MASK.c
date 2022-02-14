
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_tid_seg {scalar_t__ count; size_t type; } ;
struct TYPE_2__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; } ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {int* task_type_size; struct ecore_ilt_client_cfg* clients; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ecore_hwfn*,int ) ;
 struct ecore_tid_seg* FUNC_4 (struct ecore_hwfn*,int) ;

u32 FUNC_5(struct ecore_hwfn *VAR_3, u32 VAR_4)
{
 struct ecore_ilt_client_cfg *VAR_5;
 u32 VAR_6, VAR_7;
 struct ecore_cxt_mngr *VAR_8;
 u32 VAR_9, VAR_10;
 struct ecore_tid_seg *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 VAR_6 = VAR_4 - VAR_7;

 if (!VAR_6)
  return 0;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_8 = VAR_3->p_cxt_mngr;
 VAR_5 = &VAR_8->clients[VAR_1];
 VAR_9 = FUNC_2(VAR_5->p_size.val);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = FUNC_4(VAR_3, VAR_12);
  if (!VAR_11 || VAR_11->count == 0)
   continue;

  VAR_10 = VAR_8->task_type_size[VAR_11->type];
  if (!VAR_10)
   continue;

  return (VAR_9 / VAR_10) * VAR_6;
 }

 FUNC_0(VAR_3, "failed computing excess ILT lines\n");
 return 0;
}
