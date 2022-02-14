
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct mpt_softc {int raid_nonopt_volumes; int raid_rescan; struct mpt_raid_disk* raid_disks; TYPE_13__* ioc_page2; struct mpt_raid_volume* raid_volumes; TYPE_12__* ioc_page3; } ;
struct TYPE_17__ {int TotalBlocks; int BlocksRemaining; } ;
struct mpt_raid_volume {int flags; TYPE_1__ sync_progress; TYPE_6__* config_page; } ;
struct TYPE_19__ {int Flags; } ;
struct TYPE_23__ {TYPE_3__ PhysDiskStatus; } ;
struct mpt_raid_disk {int flags; TYPE_7__ config_page; } ;
struct TYPE_24__ {int VolumePageNumber; } ;
struct TYPE_18__ {int Settings; } ;
struct TYPE_20__ {int Flags; scalar_t__ State; } ;
struct TYPE_22__ {scalar_t__ ResyncRate; TYPE_2__ VolumeSettings; TYPE_4__ VolumeStatus; } ;
struct TYPE_21__ {int PhysDiskNum; } ;
struct TYPE_14__ {int PageLength; } ;
struct TYPE_16__ {int MaxPhysDisks; int MaxVolumes; int NumActiveVolumes; TYPE_8__* RaidVolume; TYPE_11__ Header; } ;
struct TYPE_15__ {int NumPhysDisks; TYPE_5__* PhysDisk; TYPE_11__ Header; } ;
typedef TYPE_5__ IOC_3_PHYS_DISK ;
typedef TYPE_6__ CONFIG_PAGE_RAID_VOL_0 ;
typedef TYPE_7__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;
typedef TYPE_8__ CONFIG_PAGE_IOC_2_RAID_VOL ;




 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (struct mpt_softc*,struct mpt_raid_disk*) ;
 int FUNC_4 (struct mpt_softc*,struct mpt_raid_volume*) ;
 int FUNC_5 (struct mpt_softc*,struct mpt_raid_disk*,char*,...) ;
 int FUNC_6 (struct mpt_raid_disk*) ;
 int FUNC_7 (struct mpt_softc*,char*) ;
 int FUNC_8 (struct mpt_softc*,char*) ;
 int FUNC_9 (struct mpt_softc*,int ,TYPE_11__*,size_t,int ,int) ;
 int FUNC_10 (struct mpt_softc*,struct mpt_raid_disk*,TYPE_5__*) ;
 int FUNC_11 (struct mpt_softc*,struct mpt_raid_volume*,TYPE_8__*) ;
 int FUNC_12 (struct mpt_softc*) ;
 int FUNC_13 (struct mpt_softc*,struct mpt_raid_volume*) ;
 int FUNC_14 (struct mpt_softc*,struct mpt_raid_volume*) ;
 int FUNC_15 (struct mpt_softc*,struct mpt_raid_volume*,char*,...) ;
 int FUNC_16 (struct mpt_raid_volume*) ;
 int FUNC_17 (struct mpt_raid_volume*) ;

__attribute__((used)) static int
FUNC_18(struct mpt_softc *VAR_11)
{
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_12;
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_13;
 IOC_3_PHYS_DISK *VAR_14;
 IOC_3_PHYS_DISK *VAR_15;
 CONFIG_PAGE_RAID_VOL_0 *VAR_16;
 size_t VAR_17;
 int VAR_18;
 int VAR_19;
 u_int VAR_20;

 if (VAR_11->ioc_page2 == ((void*)0) || VAR_11->ioc_page3 == ((void*)0)) {
  return (0);
 }






 for (VAR_19 = 0; VAR_19 < VAR_11->ioc_page2->MaxPhysDisks; VAR_19++) {
  VAR_11->raid_disks[VAR_19].flags &= ~VAR_4;
 }
 for (VAR_19 = 0; VAR_19 < VAR_11->ioc_page2->MaxVolumes; VAR_19++) {
  VAR_11->raid_volumes[VAR_19].flags &= ~VAR_8;
 }




 VAR_17 = VAR_11->ioc_page3->Header.PageLength * sizeof(uint32_t);
 VAR_18 = FUNC_9(VAR_11, 0,
       &VAR_11->ioc_page3->Header, VAR_17,
                   VAR_10, 5000);
 if (VAR_18) {
  FUNC_7(VAR_11,
      "mpt_refresh_raid_data: Failed to read IOC Page 3\n");
  return (-1);
 }
 FUNC_2(VAR_11->ioc_page3);

 VAR_14 = VAR_11->ioc_page3->PhysDisk;
 VAR_15 = VAR_14 + VAR_11->ioc_page3->NumPhysDisks;
 for (; VAR_14 != VAR_15; VAR_14++) {
  struct mpt_raid_disk *VAR_21;

  VAR_21 = VAR_11->raid_disks + VAR_14->PhysDiskNum;
  VAR_21->flags |= VAR_4;
  if ((VAR_21->flags & (VAR_2|VAR_5))
   != (VAR_2|VAR_5)) {

   FUNC_10(VAR_11, VAR_21, VAR_14);

  }
  VAR_21->flags |= VAR_2;
  VAR_11->raid_rescan++;
 }




 VAR_17 = VAR_11->ioc_page2->Header.PageLength * sizeof(uint32_t);
 VAR_18 = FUNC_9(VAR_11, 0,
       &VAR_11->ioc_page2->Header, VAR_17,
                   VAR_10, 5000);
 if (VAR_18) {
  FUNC_7(VAR_11, "mpt_refresh_raid_data: "
   "Failed to read IOC Page 2\n");
  return (-1);
 }
 FUNC_1(VAR_11->ioc_page2);

 VAR_12 = VAR_11->ioc_page2->RaidVolume;
 VAR_13 = VAR_12 + VAR_11->ioc_page2->NumActiveVolumes;
 for (;VAR_12 != VAR_13; VAR_12++) {
  struct mpt_raid_volume *VAR_22;

  VAR_22 = VAR_11->raid_volumes + VAR_12->VolumePageNumber;
  VAR_22->flags |= VAR_8;
  VAR_16 = VAR_22->config_page;
  if (VAR_16 == ((void*)0))
   continue;
  if (((VAR_22->flags & (VAR_6|VAR_9))
    != (VAR_6|VAR_9))
   || (VAR_16->VolumeStatus.Flags
     & 129) != 0) {

   FUNC_11(VAR_11, VAR_22, VAR_12);
  }
  VAR_22->flags |= VAR_6;
 }

 VAR_20 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_11->ioc_page2->MaxVolumes; VAR_19++) {
  struct mpt_raid_volume *VAR_23;
  uint64_t VAR_24;
  uint64_t VAR_25;
  int VAR_26;
  u_int VAR_27;

  VAR_23 = &VAR_11->raid_volumes[VAR_19];

  if ((VAR_23->flags & VAR_6) == 0) {
   continue;
  }

  VAR_16 = VAR_23->config_page;
  if ((VAR_23->flags & (VAR_8|VAR_7))
   == VAR_7) {
   FUNC_15(VAR_11, VAR_23, "No longer configured\n");
   VAR_23->flags = 0;
   continue;
  }

  if ((VAR_23->flags & VAR_7) == 0) {
   FUNC_4(VAR_11, VAR_23);
   VAR_23->flags |= VAR_7;
  }

  if (VAR_16->VolumeStatus.State !=
      VAR_1)
   VAR_20++;

  if ((VAR_23->flags & VAR_9) != 0)
   continue;

  VAR_23->flags |= VAR_9;
  FUNC_15(VAR_11, VAR_23, "%s - %s\n",
      FUNC_17(VAR_23), FUNC_16(VAR_23));
  FUNC_13(VAR_11, VAR_23);

  if (VAR_16->VolumeStatus.Flags == 0) {
   continue;
  }

  FUNC_15(VAR_11, VAR_23, "Status (");
  for (VAR_26 = 1; VAR_26 <= 0x80; VAR_26 <<= 1) {
   switch (VAR_16->VolumeStatus.Flags & VAR_26) {
   case 131:
    FUNC_8(VAR_11, " Enabled");
    break;
   case 130:
    FUNC_8(VAR_11, " Quiesced");
    break;
   case 129:
    FUNC_8(VAR_11, " Re-Syncing");
    break;
   case 128:
    FUNC_8(VAR_11, " Inactive");
    break;
   default:
    break;
   }
  }
  FUNC_8(VAR_11, " )\n");

  if ((VAR_16->VolumeStatus.Flags
     & 129) == 0)
   continue;

  FUNC_14(VAR_11, VAR_23);

  VAR_25 = FUNC_0(VAR_23->sync_progress.BlocksRemaining);
  VAR_24 = FUNC_0(VAR_23->sync_progress.TotalBlocks);
  if (VAR_16->ResyncRate != 0) {

   VAR_27 = ((u_int)VAR_16->ResyncRate * 100000) / 0xFF;
   FUNC_15(VAR_11, VAR_23, "Rate %d.%d%%\n",
       VAR_27 / 1000, VAR_27 % 1000);
  } else {
   VAR_27 = VAR_16->VolumeSettings.Settings
        & VAR_0;
   FUNC_15(VAR_11, VAR_23, "%s Priority Re-Sync\n",
       VAR_27 ? "High" : "Low");
  }
  FUNC_15(VAR_11, VAR_23, "%ju of %ju "
       "blocks remaining\n", (uintmax_t)VAR_25,
       (uintmax_t)VAR_24);


  FUNC_12(VAR_11);
 }

 for (VAR_19 = 0; VAR_19 < VAR_11->ioc_page2->MaxPhysDisks; VAR_19++) {
  struct mpt_raid_disk *VAR_28;
  CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_29;
  int VAR_30;

  VAR_28 = &VAR_11->raid_disks[VAR_19];
  VAR_29 = &VAR_28->config_page;

  if ((VAR_28->flags & VAR_2) == 0)
   continue;

  if ((VAR_28->flags & (VAR_4|VAR_3))
   == VAR_3) {
   FUNC_5(VAR_11, VAR_28, "No longer configured\n");
   VAR_28->flags = 0;
   VAR_11->raid_rescan++;
   continue;
  }

  if ((VAR_28->flags & VAR_3) == 0) {

   FUNC_3(VAR_11, VAR_28);
   VAR_28->flags |= VAR_7;
  }

  if ((VAR_28->flags & VAR_5) != 0)
   continue;

  VAR_28->flags |= VAR_5;
  FUNC_5(VAR_11, VAR_28, "%s\n", FUNC_6(VAR_28));
  if (VAR_29->PhysDiskStatus.Flags == 0)
   continue;

  FUNC_5(VAR_11, VAR_28, "Status (");
  for (VAR_30 = 1; VAR_30 <= 0x80; VAR_30 <<= 1) {
   switch (VAR_29->PhysDiskStatus.Flags & VAR_30) {
   case 133:
    FUNC_8(VAR_11, " Out-Of-Sync");
    break;
   case 132:
    FUNC_8(VAR_11, " Quiesced");
    break;
   default:
    break;
   }
  }
  FUNC_8(VAR_11, " )\n");
 }

 VAR_11->raid_nonopt_volumes = VAR_20;
 return (0);
}
