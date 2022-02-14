
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_l2_info; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ecore_hwfn *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(&VAR_0->p_l2_info->lock);
}
