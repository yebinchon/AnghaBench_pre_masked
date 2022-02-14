
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; int VBus; TYPE_3__* VDevices; } ;
struct TYPE_8__ {scalar_t__ dArStamp; } ;
struct TYPE_9__ {TYPE_1__ array; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__* PVDevice ;
typedef int * PVBus ;
typedef TYPE_4__ IAL_ADAPTER_T ;


 TYPE_3__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;

int
FUNC_1(PVDevice VAR_3)
{
 int VAR_4;
 PVDevice VAR_5;
 PVBus VAR_6;
 IAL_ADAPTER_T *VAR_7 = VAR_2;

 while(VAR_7 != ((void*)0))
 {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   if(&(VAR_7->VDevices[VAR_4]) == VAR_3) return 0;
  VAR_7 = VAR_7->next;
 }
 return -1;
}
