
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct mpt_softc {int raid_disks; int dev; int phydisk_sim; int sim; } ;
struct TYPE_3__ {int HotSparePool; } ;
struct TYPE_4__ {TYPE_1__ PhysDiskSettings; int PhysDiskID; } ;
struct mpt_raid_disk {TYPE_2__ config_page; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpt_softc*,struct mpt_raid_disk*,char*,char*,...) ;
 int FUNC_3 (struct mpt_softc*,char*,...) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct mpt_softc *VAR_0, struct mpt_raid_disk *VAR_1)
{
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_2;
 int VAR_3 = FUNC_0(VAR_0->sim);
 int VAR_4 = FUNC_0(VAR_0->phydisk_sim);
 u_int VAR_5;

 VAR_2 = &VAR_1->config_page;
 FUNC_2(VAR_0, VAR_1,
       "Physical (%s:%d:%d:0), Pass-thru (%s:%d:%d:0)\n",
       FUNC_1(VAR_0->dev), VAR_3,
       VAR_2->PhysDiskID, FUNC_1(VAR_0->dev),
       VAR_4, VAR_1 - VAR_0->raid_disks);
 if (VAR_2->PhysDiskSettings.HotSparePool == 0)
  return;
 FUNC_2(VAR_0, VAR_1, "Member of Hot Spare Pool%s",
       FUNC_4(VAR_2->PhysDiskSettings.HotSparePool)
     ? ":" : "s:");
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  u_int VAR_6;

  VAR_6 = 0x1 << VAR_5;
  if ((VAR_2->PhysDiskSettings.HotSparePool & VAR_6) == 0)
   continue;
  FUNC_3(VAR_0, " %d", VAR_5);
 }
 FUNC_3(VAR_0, "\n");
}
