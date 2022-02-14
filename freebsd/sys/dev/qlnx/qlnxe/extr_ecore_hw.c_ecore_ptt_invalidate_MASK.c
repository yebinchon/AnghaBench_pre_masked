
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct ecore_ptt {TYPE_2__ pxp; } ;
struct ecore_hwfn {TYPE_1__* p_ptt_pool; } ;
struct TYPE_3__ {struct ecore_ptt* ptts; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct ecore_hwfn *VAR_2)
{
 struct ecore_ptt *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->p_ptt_pool->ptts[VAR_4];
  VAR_3->pxp.offset = VAR_0;
 }
}
