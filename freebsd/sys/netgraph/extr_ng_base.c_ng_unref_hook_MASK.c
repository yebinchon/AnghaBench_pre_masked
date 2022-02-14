
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* hook_p ;
struct TYPE_6__ {int hk_refs; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(hook_p VAR_1)
{

 if (VAR_1 == &VAR_0)
  return;

 if (FUNC_3(&VAR_1->hk_refs)) {
  if (FUNC_1(VAR_1))
   FUNC_2((FUNC_1(VAR_1)));
  FUNC_0(VAR_1);
 }
}
