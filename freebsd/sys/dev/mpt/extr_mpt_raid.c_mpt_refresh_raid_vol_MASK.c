
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpt_softc {struct mpt_raid_disk* raid_disks; int raid_page0_len; } ;
struct mpt_raid_volume {int sync_progress; int flags; TYPE_4__* config_page; } ;
struct mpt_raid_disk {int member_number; struct mpt_raid_volume* volume; } ;
struct TYPE_10__ {int indicator_struct; } ;
struct mpt_raid_action_result {scalar_t__ action_status; TYPE_3__ action_data; } ;
typedef int request_t ;
struct TYPE_12__ {int VolumePageNumber; } ;
struct TYPE_9__ {int Flags; } ;
struct TYPE_11__ {int NumPhysDisks; scalar_t__ VolumeType; TYPE_2__ VolumeStatus; TYPE_1__* PhysDisk; int Header; } ;
struct TYPE_8__ {int PhysDiskNum; int PhysDiskMap; } ;
typedef TYPE_4__ CONFIG_PAGE_RAID_VOL_0 ;
typedef TYPE_5__ CONFIG_PAGE_IOC_2_RAID_VOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mpt_raid_action_result* FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mpt_softc*,int *) ;
 int * FUNC_6 (struct mpt_softc*,int ) ;
 int FUNC_7 (struct mpt_softc*,struct mpt_raid_volume*,int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct mpt_softc*,int ,int ,int ,int *,int ,int) ;
 int FUNC_9 (struct mpt_softc*,int ,int *,int ,int ,int) ;
 int FUNC_10 (struct mpt_softc*,struct mpt_raid_volume*,char*,...) ;

__attribute__((used)) static void
FUNC_11(struct mpt_softc *VAR_11, struct mpt_raid_volume *VAR_12,
    CONFIG_PAGE_IOC_2_RAID_VOL *VAR_13)
{
 CONFIG_PAGE_RAID_VOL_0 *VAR_14;
 struct mpt_raid_action_result *VAR_15;
 request_t *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_14 = VAR_12->config_page;
 VAR_12->flags &= ~VAR_9;

 VAR_17 = FUNC_8(VAR_11, VAR_2, 0,
     VAR_13->VolumePageNumber, &VAR_14->Header, VAR_10, 5000);
 if (VAR_17 != 0) {
  FUNC_10(VAR_11, VAR_12,
      "mpt_refresh_raid_vol: Failed to read RAID Vol Hdr(%d)\n",
      VAR_13->VolumePageNumber);
  return;
 }

 VAR_17 = FUNC_9(VAR_11, VAR_13->VolumePageNumber,
     &VAR_14->Header, VAR_11->raid_page0_len, VAR_10, 5000);
 if (VAR_17 != 0) {
  FUNC_10(VAR_11, VAR_12,
      "mpt_refresh_raid_vol: Failed to read RAID Vol Page(%d)\n",
      VAR_13->VolumePageNumber);
  return;
 }
 FUNC_3(VAR_14);

 VAR_12->flags |= VAR_8;


 for (VAR_18 = 0; VAR_18 < VAR_14->NumPhysDisks; VAR_18++) {
  struct mpt_raid_disk *VAR_19;
  VAR_19 = VAR_11->raid_disks + VAR_14->PhysDisk[VAR_18].PhysDiskNum;
  VAR_19->volume = VAR_12;
  VAR_19->member_number = VAR_14->PhysDisk[VAR_18].PhysDiskMap;
  if (VAR_14->VolumeType == VAR_7) {
   VAR_19->member_number--;
  }
 }

 if ((VAR_14->VolumeStatus.Flags
    & VAR_4) == 0)
  return;

 VAR_16 = FUNC_6(VAR_11, VAR_10);
 if (VAR_16 == ((void*)0)) {
  FUNC_10(VAR_11, VAR_12,
      "mpt_refresh_raid_vol: Get request failed!\n");
  return;
 }
 VAR_17 = FUNC_7(VAR_11, VAR_12, ((void*)0), VAR_16,
     VAR_6, 0, 0, 0, VAR_1, VAR_10);
 if (VAR_17 == VAR_0) {
  FUNC_10(VAR_11, VAR_12,
      "mpt_refresh_raid_vol: Progress Indicator fetch timeout\n");
  FUNC_5(VAR_11, VAR_16);
  return;
 }

 VAR_15 = FUNC_1(VAR_16);
 if (VAR_17 == 0
  && VAR_15->action_status == VAR_5
  && FUNC_0(VAR_16) == VAR_3) {
  FUNC_2(&VAR_12->sync_progress,
         &VAR_15->action_data.indicator_struct,
         sizeof(VAR_12->sync_progress));
  FUNC_4(&VAR_12->sync_progress);
 } else {
  FUNC_10(VAR_11, VAR_12,
      "mpt_refresh_raid_vol: Progress indicator fetch failed!\n");
 }
 FUNC_5(VAR_11, VAR_16);
}
