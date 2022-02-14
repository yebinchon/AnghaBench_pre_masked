
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {scalar_t__ xrc_srq_count; int srq_count; } ;


 scalar_t__ FUNC_0 (struct ecore_hwfn*) ;

u32 FUNC_1(struct ecore_hwfn *VAR_0)
{
 struct ecore_cxt_mngr *VAR_1 = VAR_0->p_cxt_mngr;
 u32 VAR_2;

 VAR_2 = VAR_1->srq_count;






 if (VAR_1->xrc_srq_count)
  VAR_2 += FUNC_0(VAR_0);

 return VAR_2;
}
