
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ecore_hwfn {struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {void* xrc_srq_count; void* srq_count; } ;



__attribute__((used)) static void FUNC_0(struct ecore_hwfn *VAR_0,
        u32 VAR_1, u32 VAR_2)
{
 struct ecore_cxt_mngr *VAR_3 = VAR_0->p_cxt_mngr;

 VAR_3->srq_count = VAR_1;
 VAR_3->xrc_srq_count = VAR_2;
}
