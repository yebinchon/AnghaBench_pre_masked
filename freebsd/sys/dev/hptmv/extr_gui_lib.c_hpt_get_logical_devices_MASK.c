
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* VDevices; struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__ VDeviceType; struct TYPE_5__* pParent; } ;
typedef TYPE_1__* PVDevice ;
typedef TYPE_2__ IAL_ADAPTER_T ;
typedef scalar_t__ DEVICEID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;

int FUNC_1(DEVICEID * VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7,VAR_8;
 PVDevice VAR_9, VAR_10;
 IAL_ADAPTER_T *VAR_11;

 for(VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_4[VAR_7] = VAR_0;


 for (VAR_11 = VAR_3; VAR_11; VAR_11 = VAR_11->next) {
  for(VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  {
   VAR_9 = &VAR_11->VDevices[VAR_7];
   VAR_10 = VAR_9;

   while (VAR_10->pParent) VAR_10 = VAR_10->pParent;
   if (VAR_10->VDeviceType==VAR_2)
    continue;

   for (VAR_8=0; VAR_8<VAR_6; VAR_8++)
    if (VAR_4[VAR_8]==FUNC_0(VAR_10)) goto next;
   VAR_4[VAR_6++] = FUNC_0(VAR_10);
   if (VAR_6>=VAR_5) goto done;
   next:;
  }
 }

done:
 return VAR_6;
}
