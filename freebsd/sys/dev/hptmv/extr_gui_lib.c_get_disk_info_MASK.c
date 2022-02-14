
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int WORD ;
typedef scalar_t__ UCHAR ;
struct TYPE_23__ {TYPE_8__* mvChannel; } ;
struct TYPE_22__ {int writeCacheEnabled; int writeCacheSupported; int readAheadEnabled; int readAheadSupported; } ;
struct TYPE_21__ {scalar_t__ adapterId; TYPE_9__* IALData; } ;
struct TYPE_20__ {size_t channelNumber; int* identifyDevice; scalar_t__ queuedDMA; TYPE_7__* mvSataAdapter; } ;
struct TYPE_14__ {int ModelNumber; } ;
struct TYPE_19__ {size_t PathId; int DeviceModeSetting; int Flags; int TCQSupported; int TCQEnabled; int NCQSupported; int NCQEnabled; int WriteCacheEnabled; int WriteCacheSupported; int ReadAheadEnabled; int ReadAheadSupported; TYPE_10__ IdentifyData; int DeviceType; int UsableMode; scalar_t__ ControllerId; scalar_t__ TargetId; } ;
struct TYPE_18__ {int SataCapability; int ModelNumber; } ;
struct TYPE_15__ {int bDeUserSelectMode; int bDeModeSetting; int df_on_line; int bDeUsable_Mode; TYPE_6__* mv; scalar_t__ df_user_mode_set; } ;
struct TYPE_16__ {TYPE_1__ disk; } ;
struct TYPE_17__ {scalar_t__ VDeviceType; scalar_t__ vf_bootmark; scalar_t__ vf_bootable; TYPE_2__ u; } ;
typedef TYPE_3__* PVDevice ;
typedef TYPE_4__* PIDENTIFY_DATA ;
typedef TYPE_5__* PDEVICE_INFO ;
typedef TYPE_6__ MV_SATA_CHANNEL ;
typedef TYPE_7__ MV_SATA_ADAPTER ;
typedef TYPE_8__ MV_CHANNEL ;
typedef int IDENTIFY_DATA2 ;
typedef TYPE_9__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_10__*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(PVDevice VAR_12, PDEVICE_INFO VAR_13)
{
 MV_SATA_ADAPTER *VAR_14;
 MV_SATA_CHANNEL *VAR_15;
 IAL_ADAPTER_T *VAR_16;
 MV_CHANNEL *VAR_17;
 char *VAR_18;
 int VAR_19;


 VAR_15 = VAR_12->u.disk.mv;
 if(VAR_15 == ((void*)0)) return -1;
 VAR_13->TargetId = 0;
 VAR_14 = VAR_15->mvSataAdapter;
 if(VAR_14 == ((void*)0)) return -1;

 VAR_16 = VAR_14->IALData;

 VAR_13->PathId = VAR_15->channelNumber;
 VAR_13->ControllerId = (UCHAR)VAR_14->adapterId;






 if (VAR_12->u.disk.df_user_mode_set)
  VAR_13->DeviceModeSetting = VAR_12->u.disk.bDeUserSelectMode;
 else if (((((PIDENTIFY_DATA)VAR_12->u.disk.mv->identifyDevice)->SataCapability) & 3)==2)
  VAR_13->DeviceModeSetting = 15;
 else {
  VAR_18 = (char *)&((PIDENTIFY_DATA)VAR_12->u.disk.mv->identifyDevice)->ModelNumber;
  if (*(WORD*)VAR_18==(0x5354) &&
   (*(WORD*)(VAR_18+8)==(0x4153) || (VAR_18[8]=='A' && VAR_18[11]=='S')))
   VAR_13->DeviceModeSetting = 15;
  else
   VAR_13->DeviceModeSetting = VAR_12->u.disk.bDeModeSetting;
 }

 VAR_13->UsableMode = VAR_12->u.disk.bDeUsable_Mode;

 VAR_13->DeviceType = VAR_10;

 VAR_13->Flags = 0x0;


 if(!VAR_12->u.disk.df_on_line)
  VAR_13->Flags |= VAR_2;


 if(VAR_12->vf_bootable)
  VAR_13->Flags |= VAR_0;


 if(VAR_12->vf_bootmark)
  VAR_13->Flags |= VAR_1;

 VAR_13->Flags |= VAR_4;


 if(VAR_12->VDeviceType == VAR_11)
  VAR_13->Flags |= VAR_3;

 FUNC_1(&(VAR_13->IdentifyData), (VAR_15->identifyDevice), sizeof(IDENTIFY_DATA2));
 VAR_18 = (char *)&VAR_13->IdentifyData.ModelNumber;
 for (VAR_19 = 0; VAR_19 < 20; VAR_19++)
  ((WORD*)VAR_18)[VAR_19] = FUNC_2(VAR_15->identifyDevice[VAR_5+VAR_19]);
 VAR_18[39] = '\0';

 VAR_17 = &VAR_16->mvChannel[VAR_15->channelNumber];
 VAR_13->ReadAheadSupported = VAR_17->readAheadSupported;
 VAR_13->ReadAheadEnabled = VAR_17->readAheadEnabled;
 VAR_13->WriteCacheSupported = VAR_17->writeCacheSupported;
 VAR_13->WriteCacheEnabled = VAR_17->writeCacheEnabled;
 VAR_13->TCQSupported = (VAR_15->identifyDevice[VAR_7] & (0x2))!=0;
 VAR_13->TCQEnabled = VAR_15->queuedDMA==VAR_9;
 VAR_13->NCQSupported = FUNC_0(VAR_14) &&
  (VAR_15->identifyDevice[VAR_6] & (0x0100));
 VAR_13->NCQEnabled = VAR_15->queuedDMA==VAR_8;
 return 0;
}
