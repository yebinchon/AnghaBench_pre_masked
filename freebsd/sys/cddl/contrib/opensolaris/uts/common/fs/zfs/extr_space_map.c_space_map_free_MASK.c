
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sm_object; int sm_os; } ;
typedef TYPE_1__ space_map_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(space_map_t *VAR_0, dmu_tx_t *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->sm_os, FUNC_1(VAR_0), VAR_1);
 VAR_0->sm_object = 0;
}
