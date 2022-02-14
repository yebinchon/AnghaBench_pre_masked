
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** pVDevice; } ;
struct TYPE_10__ {TYPE_2__ VBus; TYPE_1__* VDevices; } ;
struct TYPE_8__ {scalar_t__ vf_online; scalar_t__ VDeviceType; scalar_t__ vf_bootmark; TYPE_2__* pVBus; struct TYPE_8__* pParent; } ;
typedef TYPE_1__* PVDevice ;
typedef TYPE_2__* PVBus ;
typedef TYPE_3__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(IAL_ADAPTER_T *VAR_3)
{
 PVDevice VAR_4, VAR_5;
 PVBus VAR_6;
 int VAR_7,VAR_8;

 for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
  VAR_4 = &(VAR_3->VDevices[VAR_7]);
  VAR_5 = VAR_4;
  while (VAR_5->pParent) VAR_5 = VAR_5->pParent;
  if (VAR_5->vf_online==0) {
   VAR_4->vf_bootmark = VAR_5->vf_bootmark = 0;
   continue;
  }
  if (VAR_5->VDeviceType==VAR_2 || VAR_4!=FUNC_0(VAR_5))
   continue;

  VAR_6 = &VAR_3->VBus;
  if(VAR_6)
  {
   VAR_8=0;
   while(VAR_8<VAR_0 && VAR_6->pVDevice[VAR_8]) VAR_8++;
   if(VAR_8<VAR_0){
    VAR_6->pVDevice[VAR_8] = VAR_5;
    VAR_5->pVBus = VAR_6;

    if (VAR_8>0 && VAR_5->vf_bootmark) {
     if (VAR_6->pVDevice[0]->vf_bootmark) {
      FUNC_1(VAR_5);
     }
     else {
      do { VAR_6->pVDevice[VAR_8] = VAR_6->pVDevice[VAR_8-1]; } while (--VAR_8);
      VAR_6->pVDevice[0] = VAR_5;
     }
    }
   }
  }
 }
}
