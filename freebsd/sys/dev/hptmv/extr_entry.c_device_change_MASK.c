
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {int adapterIoBaseAddress; int ** sataChannel; } ;
struct TYPE_22__ {TYPE_6__* VDevices; TYPE_7__ mvSataAdapter; scalar_t__ beeping; } ;
struct TYPE_15__ {scalar_t__ dDeRealCapacity; scalar_t__ df_removable_drive; scalar_t__ df_atapi; } ;
struct TYPE_16__ {TYPE_1__ disk; } ;
struct TYPE_20__ {size_t VDeviceType; int vf_online; TYPE_5__* pParent; int pfnDeviceFailed; int pfnSendCommand; TYPE_2__ u; scalar_t__ VDeviceCapacity; } ;
struct TYPE_17__ {int bArnMember; int ** pMember; } ;
struct TYPE_18__ {TYPE_3__ array; } ;
struct TYPE_19__ {TYPE_4__ u; } ;
typedef TYPE_6__* PVDevice ;
typedef size_t MV_U8 ;
typedef int MV_SATA_CHANNEL ;
typedef TYPE_7__ MV_SATA_ADAPTER ;
typedef TYPE_8__ IAL_ADAPTER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_8__*,size_t) ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_6(IAL_ADAPTER_T *VAR_7 , MV_U8 VAR_8, int VAR_9)
{
 PVDevice VAR_10;
 MV_SATA_ADAPTER *VAR_11 = &VAR_7->mvSataAdapter;
 MV_SATA_CHANNEL *VAR_12 = VAR_11->sataChannel[VAR_8];

 if (!VAR_12) return;

 if (VAR_9)
 {
  VAR_10 = &(VAR_7->VDevices[VAR_8]);
  FUNC_5(VAR_7, VAR_8);

  VAR_10->VDeviceType = VAR_10->u.disk.df_atapi? VAR_2 :
   VAR_10->u.disk.df_removable_drive? VAR_3 : VAR_4;

  VAR_10->VDeviceCapacity = VAR_10->u.disk.dDeRealCapacity-VAR_1;
  VAR_10->pfnSendCommand = VAR_6[VAR_10->VDeviceType];
  VAR_10->pfnDeviceFailed = VAR_5[VAR_10->VDeviceType];
  VAR_10->vf_online = 1;
  FUNC_3(VAR_0,VAR_10);
  FUNC_2(VAR_10);
  FUNC_1(VAR_10);


  if (VAR_7->beeping) {
   VAR_7->beeping = 0;
   FUNC_0(VAR_7->mvSataAdapter.adapterIoBaseAddress);
  }


 }
 else
 {
  VAR_10 = &(VAR_7->VDevices[VAR_8]);
  FUNC_4(VAR_10);
 }
}
