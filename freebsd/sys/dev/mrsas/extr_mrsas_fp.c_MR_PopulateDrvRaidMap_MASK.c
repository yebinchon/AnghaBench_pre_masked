
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef unsigned int u_int8_t ;
typedef int u_int32_t ;
typedef unsigned int u_int16_t ;
struct mrsas_softc {int map_id; int mrsas_dev; int drv_map_sz; scalar_t__* raidmap_mem; scalar_t__ max256vdSupport; scalar_t__ maxRaidMapSize; TYPE_6__** ld_drv_map; } ;
struct TYPE_12__ {int targetId; int seqNum; scalar_t__ rowSize; int size; } ;
struct TYPE_19__ {TYPE_1__ ldRaid; } ;
struct TYPE_18__ {unsigned int ldCount; unsigned int* ldTgtIdToLd; int totalSize; TYPE_9__* devHndlInfo; TYPE_9__* arMapInfo; TYPE_9__* ldSpanMap; int fpPdIoTimeoutSec; } ;
struct TYPE_17__ {TYPE_7__ raidMap; } ;
struct TYPE_16__ {unsigned int ldCount; int totalSize; TYPE_10__* devHndlInfo; TYPE_10__* arMapInfo; TYPE_9__* ldSpanMap; scalar_t__* ldTgtIdToLd; int fpPdIoTimeoutSec; } ;
struct TYPE_15__ {TYPE_5__ raidMap; } ;
struct TYPE_14__ {TYPE_10__* devHndlInfo; TYPE_10__* arMapInfo; TYPE_10__* ldSpanMap; scalar_t__* ldTgtIdToLd; int fpPdIoTimeoutSec; scalar_t__ ldCount; } ;
struct TYPE_13__ {int targetId; int seqNum; scalar_t__ rowSize; int size; } ;
struct TYPE_11__ {TYPE_2__ ldRaid; } ;
typedef int MR_LD_SPAN_MAP ;
typedef TYPE_3__ MR_FW_RAID_MAP_EXT ;
typedef TYPE_4__ MR_FW_RAID_MAP_ALL ;
typedef TYPE_5__ MR_FW_RAID_MAP ;
typedef TYPE_6__ MR_DRV_RAID_MAP_ALL ;
typedef TYPE_7__ MR_DRV_RAID_MAP ;
typedef int MR_DEV_HANDLE_INFO ;
typedef int MR_ARRAY_INFO ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_9__*,TYPE_10__*,int) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct mrsas_softc *VAR_6)
{
 MR_FW_RAID_MAP_ALL *VAR_7 = ((void*)0);
 MR_FW_RAID_MAP_EXT *VAR_8;
 MR_FW_RAID_MAP *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 u_int16_t VAR_11;

 MR_DRV_RAID_MAP_ALL *VAR_12 = VAR_6->ld_drv_map[(VAR_6->map_id & 1)];
 MR_DRV_RAID_MAP *VAR_13 = &VAR_12->raidMap;

 if (VAR_6->maxRaidMapSize) {
  return FUNC_0(VAR_6);
 } else if (VAR_6->max256vdSupport) {
  VAR_8 = (MR_FW_RAID_MAP_EXT *) VAR_6->raidmap_mem[(VAR_6->map_id & 1)];
  VAR_11 = (u_int16_t)(VAR_8->ldCount);
  if (VAR_11 > VAR_1) {
   FUNC_1(VAR_6->mrsas_dev,
       "mrsas: LD count exposed in RAID map in not valid\n");
   return 1;
  }
  FUNC_3(VAR_12, 0, VAR_6->drv_map_sz);
  VAR_13->ldCount = VAR_11;
  VAR_13->fpPdIoTimeoutSec = VAR_8->fpPdIoTimeoutSec;
  for (VAR_10 = 0; VAR_10 < (VAR_1); VAR_10++) {
   VAR_13->ldTgtIdToLd[VAR_10] = (u_int16_t)VAR_8->ldTgtIdToLd[VAR_10];
  }
  FUNC_2(VAR_13->ldSpanMap, VAR_8->ldSpanMap, sizeof(MR_LD_SPAN_MAP) * VAR_11);
  FUNC_2(VAR_13->arMapInfo, VAR_8->arMapInfo,
      sizeof(MR_ARRAY_INFO) * VAR_0);
  FUNC_2(VAR_13->devHndlInfo, VAR_8->devHndlInfo,
      sizeof(MR_DEV_HANDLE_INFO) * VAR_4);

  VAR_13->totalSize = sizeof(MR_FW_RAID_MAP_EXT);
 } else {
  VAR_7 = (MR_FW_RAID_MAP_ALL *) VAR_6->raidmap_mem[(VAR_6->map_id & 1)];
  VAR_9 = &VAR_7->raidMap;
  FUNC_3(VAR_12, 0, VAR_6->drv_map_sz);
  VAR_13->totalSize = VAR_9->totalSize;
  VAR_13->ldCount = VAR_9->ldCount;
  VAR_13->fpPdIoTimeoutSec =
      VAR_9->fpPdIoTimeoutSec;

  for (VAR_10 = 0; VAR_10 < VAR_3 + VAR_5; VAR_10++) {
   VAR_13->ldTgtIdToLd[VAR_10] =
       (u_int8_t)VAR_9->ldTgtIdToLd[VAR_10];
  }

  for (VAR_10 = 0; VAR_10 < VAR_13->ldCount; VAR_10++) {
   VAR_13->ldSpanMap[VAR_10] =
       VAR_9->ldSpanMap[VAR_10];
  }

  FUNC_2(VAR_13->arMapInfo, VAR_9->arMapInfo,
      sizeof(MR_ARRAY_INFO) * VAR_2);
  FUNC_2(VAR_13->devHndlInfo, VAR_9->devHndlInfo,
      sizeof(MR_DEV_HANDLE_INFO) *
      VAR_4);
 }
 return 0;
}
