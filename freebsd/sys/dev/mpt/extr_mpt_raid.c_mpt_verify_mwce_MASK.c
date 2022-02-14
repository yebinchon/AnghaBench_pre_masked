
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int raid_mwce_setting; } ;
struct mpt_raid_volume {int flags; TYPE_3__* config_page; } ;
struct mpt_raid_action_result {scalar_t__ action_status; } ;
struct TYPE_11__ {int IOCStatus; } ;
typedef TYPE_2__ request_t ;
typedef int data ;
struct TYPE_13__ {int Settings; } ;
struct TYPE_10__ {int Flags; } ;
struct TYPE_12__ {TYPE_7__ VolumeSettings; TYPE_1__ VolumeStatus; } ;
typedef TYPE_3__ CONFIG_PAGE_RAID_VOL_0 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 struct mpt_raid_action_result* FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (int *,TYPE_7__*,int) ;
 int FUNC_3 (struct mpt_softc*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,struct mpt_raid_volume*,int *,TYPE_2__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mpt_softc*,struct mpt_raid_volume*,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct mpt_softc *VAR_9, struct mpt_raid_volume *VAR_10)
{
 request_t *VAR_11;
 struct mpt_raid_action_result *VAR_12;
 CONFIG_PAGE_RAID_VOL_0 *VAR_13;
 uint32_t VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13 = VAR_10->config_page;
 VAR_16 = VAR_13->VolumeStatus.Flags
    & VAR_4;
 VAR_17 = VAR_13->VolumeSettings.Settings
      & VAR_3;





 switch (VAR_9->raid_mwce_setting) {
 case 128:
  if ((VAR_16 && VAR_17) || (!VAR_16 && !VAR_17)) {
   return;
  }
  VAR_10->flags ^= VAR_7;
  if ((VAR_10->flags & VAR_7) == 0) {





   return;
  }
  break;
 case 129:
  if (VAR_17)
   return;
  break;
 case 130:
  if (!VAR_17)
   return;
  break;
 case 131:
  return;
 }

 VAR_11 = FUNC_4(VAR_9, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_9, VAR_10,
       "mpt_verify_mwce: Get request failed!\n");
  return;
 }

 VAR_13->VolumeSettings.Settings ^=
     VAR_3;
 FUNC_2(&VAR_14, &VAR_13->VolumeSettings, sizeof(VAR_14));
 VAR_13->VolumeSettings.Settings ^=
     VAR_3;
 VAR_15 = FUNC_5(VAR_9, VAR_10, ((void*)0), VAR_11,
    VAR_6,
    VAR_14, 0, 0,
             VAR_1, VAR_8);
 if (VAR_15 == VAR_0) {
  FUNC_6(VAR_9, VAR_10, "mpt_verify_mwce: "
       "Write Cache Enable Timed-out\n");
  return;
 }
 VAR_12 = FUNC_1(VAR_11);
 if (VAR_15 != 0
  || FUNC_0(VAR_11) != VAR_2
  || (VAR_12->action_status != VAR_5)) {
  FUNC_6(VAR_9, VAR_10, "Write Cache Enable Failed: "
       "%d:%x:%x\n", VAR_15, VAR_11->IOCStatus,
       VAR_12->action_status);
 } else {
  VAR_13->VolumeSettings.Settings ^=
      VAR_3;
 }
 FUNC_3(VAR_9, VAR_11);
}
