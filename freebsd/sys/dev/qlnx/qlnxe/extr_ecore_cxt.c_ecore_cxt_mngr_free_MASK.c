
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_cxt_mngr; int p_dev; } ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*) ;

void FUNC_5(struct ecore_hwfn *VAR_1)
{
 if (!VAR_1->p_cxt_mngr)
  return;

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);



 FUNC_0(VAR_1->p_dev, VAR_1->p_cxt_mngr);

 VAR_1->p_cxt_mngr = VAR_0;
}
