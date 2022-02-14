
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_eq; int p_dev; } ;
struct TYPE_3__ {int chain; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ecore_hwfn *VAR_1)
{
 if (!VAR_1->p_eq)
  return;

 FUNC_1(VAR_1->p_dev, &VAR_1->p_eq->chain);

 FUNC_0(VAR_1->p_dev, VAR_1->p_eq);
 VAR_1->p_eq = VAR_0;
}
