
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__** sataChannel; } ;
struct TYPE_15__ {TYPE_4__* mvChannel; int VBus; TYPE_1__ mvSataAdapter; TYPE_5__* VDevices; } ;
struct TYPE_14__ {int* identifyDevice; scalar_t__ lba48Address; scalar_t__ outstandingCommands; } ;
struct TYPE_10__ {int df_on_line; int dDeRealCapacity; int bDeUsable_Mode; int bDeModeSetting; int * pVBus; TYPE_6__* mv; } ;
struct TYPE_11__ {TYPE_2__ disk; } ;
struct TYPE_13__ {TYPE_3__ u; int * pVBus; } ;
struct TYPE_12__ {int maxPioModeSupported; int maxUltraDmaModeSupported; } ;
typedef TYPE_5__* PVDevice ;
typedef size_t MV_U8 ;
typedef int* MV_U16_PTR ;
typedef TYPE_6__ MV_SATA_CHANNEL ;
typedef TYPE_7__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(IAL_ADAPTER_T *VAR_3, MV_U8 VAR_4)
{
 PVDevice VAR_5 = &VAR_3->VDevices[VAR_4];
 MV_SATA_CHANNEL *VAR_6 = VAR_3->mvSataAdapter.sataChannel[VAR_4];
 MV_U16_PTR VAR_7 = VAR_6->identifyDevice;

 VAR_6->outstandingCommands = 0;

 VAR_5->u.disk.mv = VAR_6;
 VAR_5->u.disk.df_on_line = 1;
 VAR_5->u.disk.pVBus = &VAR_3->VBus;
 VAR_5->pVBus = &VAR_3->VBus;






 if(VAR_7[53] & 1) {
 VAR_5->u.disk.dDeRealCapacity =
   (((VAR_7[58]<<16 | VAR_7[57]) < (VAR_7[61]<<16 | VAR_7[60])) ?
    (VAR_7[61]<<16 | VAR_7[60]) :
    (VAR_7[58]<<16 | VAR_7[57])) - 1;
 } else
  VAR_5->u.disk.dDeRealCapacity =
     (VAR_7[61]<<16 | VAR_7[60]) - 1;

 VAR_5->u.disk.bDeUsable_Mode = VAR_5->u.disk.bDeModeSetting =
  VAR_3->mvChannel[VAR_4].maxPioModeSupported - VAR_0;

 if (VAR_3->mvChannel[VAR_4].maxUltraDmaModeSupported!=0xFF) {
  VAR_5->u.disk.bDeUsable_Mode = VAR_5->u.disk.bDeModeSetting =
   VAR_3->mvChannel[VAR_4].maxUltraDmaModeSupported - VAR_1 + 8;
 }
}
