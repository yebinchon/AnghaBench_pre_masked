
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef unsigned int u_int32_t ;
struct mrsas_softc {int map_id; int load_balance_info; scalar_t__ UnevenSpanSupport; int mrsas_dev; scalar_t__ max256vdSupport; scalar_t__ maxRaidMapSize; int log_to_span; TYPE_1__** ld_drv_map; } ;
struct TYPE_6__ {int ldCount; unsigned int totalSize; } ;
struct TYPE_5__ {TYPE_2__ raidMap; } ;
typedef int PLD_SPAN_INFO ;
typedef int MR_LD_SPAN_MAP ;
typedef int MR_FW_RAID_MAP_EXT ;
typedef int MR_FW_RAID_MAP ;
typedef TYPE_1__ MR_DRV_RAID_MAP_ALL ;
typedef TYPE_2__ MR_DRV_RAID_MAP ;


 scalar_t__ FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct mrsas_softc*,TYPE_1__*,int ) ;

u_int8_t
FUNC_4(struct mrsas_softc *VAR_0)
{
 if (!VAR_0) {
  return 1;
 }
 if (FUNC_0(VAR_0))
  return 0;

 MR_DRV_RAID_MAP_ALL *VAR_1 = VAR_0->ld_drv_map[(VAR_0->map_id & 1)];
 MR_DRV_RAID_MAP *VAR_2 = &VAR_1->raidMap;

 u_int32_t VAR_3;

 VAR_1 = VAR_0->ld_drv_map[(VAR_0->map_id & 1)];
 VAR_2 = &VAR_1->raidMap;
 PLD_SPAN_INFO VAR_4 = (PLD_SPAN_INFO) & VAR_0->log_to_span;

 if (VAR_0->maxRaidMapSize)
  VAR_3 = sizeof(MR_DRV_RAID_MAP_ALL);
 else if (VAR_0->max256vdSupport)
  VAR_3 = sizeof(MR_FW_RAID_MAP_EXT);
 else
  VAR_3 =
      (sizeof(MR_FW_RAID_MAP) - sizeof(MR_LD_SPAN_MAP)) +
      (sizeof(MR_LD_SPAN_MAP) * VAR_2->ldCount);

 if (VAR_2->totalSize != VAR_3) {
  FUNC_1(VAR_0->mrsas_dev, "map size %x not matching ld count\n", VAR_3);
  FUNC_1(VAR_0->mrsas_dev, "span map= %x\n", (unsigned int)sizeof(MR_LD_SPAN_MAP));
  FUNC_1(VAR_0->mrsas_dev, "pDrvRaidMap->totalSize=%x\n", VAR_2->totalSize);
  return 1;
 }
 if (VAR_0->UnevenSpanSupport) {
  FUNC_2(VAR_1, VAR_4);
 }
 FUNC_3(VAR_0, VAR_1, VAR_0->load_balance_info);

 return 0;
}
