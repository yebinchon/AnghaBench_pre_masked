
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* VDevices; struct TYPE_7__* next; } ;
struct TYPE_5__ {int disk; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef int * PDevice ;
typedef TYPE_3__ IAL_ADAPTER_T ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(PDevice VAR_2, int *VAR_3, int *VAR_4)
{
 IAL_ADAPTER_T *VAR_5;
 int VAR_6, VAR_7;

 *VAR_3 = *VAR_4 = 0;

 for (VAR_6=1, VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next, VAR_6++) {
  for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
   if (VAR_2 == &VAR_5->VDevices[VAR_7].u.disk) {
    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
    return;
   }
  }
 }
}
