
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * VDevices; TYPE_1__* mvChannel; struct TYPE_8__* next; } ;
struct TYPE_7__ {void** Devices; scalar_t__ ControlPort; scalar_t__ IoPort; } ;
struct TYPE_6__ {scalar_t__ online; } ;
typedef TYPE_2__* PCHANNEL_INFO ;
typedef TYPE_3__ IAL_ADAPTER_T ;
typedef void* DEVICEID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *) ;
 TYPE_3__* VAR_2 ;

int FUNC_1(int VAR_3, int VAR_4, PCHANNEL_INFO VAR_5)
{
 IAL_ADAPTER_T *VAR_6 = VAR_2;
 int VAR_7,VAR_8 = 0;

 while(VAR_6 != ((void*)0))
 {
  if (VAR_8++==VAR_3)
   goto found;
  VAR_6 = VAR_6->next;
 }
 return -1;

found:

 VAR_5->IoPort = 0;
 VAR_5->ControlPort = 0;

 for (VAR_7=0; VAR_7<2 ;VAR_7++)
 {
  VAR_5->Devices[VAR_7] = (DEVICEID)VAR_0;
 }

 if (VAR_6->mvChannel[VAR_4].online == VAR_1)
  VAR_5->Devices[0] = FUNC_0(&VAR_6->VDevices[VAR_4]);
 else
  VAR_5->Devices[0] = (DEVICEID)VAR_0;

 return 0;


}
