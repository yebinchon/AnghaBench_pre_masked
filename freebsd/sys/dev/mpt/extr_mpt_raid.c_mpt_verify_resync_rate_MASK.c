
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct mpt_softc {int raid_resync_rate; } ;
struct mpt_raid_volume {TYPE_2__* config_page; } ;
struct mpt_raid_action_result {scalar_t__ action_status; } ;
struct TYPE_9__ {int IOCStatus; } ;
typedef TYPE_1__ request_t ;
typedef int data ;
struct TYPE_11__ {int Settings; } ;
struct TYPE_10__ {scalar_t__ ResyncRate; TYPE_6__ VolumeSettings; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_VOL_0 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct mpt_raid_action_result* FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_2 (int*,TYPE_6__*,int) ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,struct mpt_raid_volume*,int *,TYPE_1__*,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct mpt_softc*,struct mpt_raid_volume*,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct mpt_softc *VAR_9, struct mpt_raid_volume *VAR_10)
{
 request_t *VAR_11;
 struct mpt_raid_action_result *VAR_12;
 CONFIG_PAGE_RAID_VOL_0 *VAR_13;
 u_int VAR_14;
 int VAR_15;

 VAR_13 = VAR_10->config_page;

 if (VAR_9->raid_resync_rate == VAR_7)
  return;





 VAR_14 = VAR_13->VolumeSettings.Settings
      & VAR_3;
 if (VAR_13->ResyncRate != 0
  && VAR_13->ResyncRate != VAR_9->raid_resync_rate) {

  VAR_11 = FUNC_4(VAR_9, VAR_8);
  if (VAR_11 == ((void*)0)) {
   FUNC_6(VAR_9, VAR_10, "mpt_verify_resync_rate: "
        "Get request failed!\n");
   return;
  }

  VAR_15 = FUNC_5(VAR_9, VAR_10, ((void*)0), VAR_11,
     VAR_6,
     VAR_9->raid_resync_rate, 0,
            0, VAR_1, VAR_8);
  if (VAR_15 == VAR_0) {
   FUNC_6(VAR_9, VAR_10, "mpt_refresh_raid_data: "
        "Resync Rate Setting Timed-out\n");
   return;
  }

  VAR_12 = FUNC_1(VAR_11);
  if (VAR_15 != 0
   || FUNC_0(VAR_11) != VAR_2
   || (VAR_12->action_status != VAR_4)) {
   FUNC_6(VAR_9, VAR_10, "Resync Rate Setting Failed: "
        "%d:%x:%x\n", VAR_15, VAR_11->IOCStatus,
        VAR_12->action_status);
  } else
   VAR_13->ResyncRate = VAR_9->raid_resync_rate;
  FUNC_3(VAR_9, VAR_11);
 } else if ((VAR_14 && VAR_9->raid_resync_rate < 128)
  || (!VAR_14 && VAR_9->raid_resync_rate >= 128)) {
  uint32_t VAR_16;

  VAR_11 = FUNC_4(VAR_9, VAR_8);
  if (VAR_11 == ((void*)0)) {
   FUNC_6(VAR_9, VAR_10, "mpt_verify_resync_rate: "
        "Get request failed!\n");
   return;
  }

  VAR_13->VolumeSettings.Settings ^=
      VAR_3;
  FUNC_2(&VAR_16, &VAR_13->VolumeSettings, sizeof(VAR_16));
  VAR_13->VolumeSettings.Settings ^=
      VAR_3;
  VAR_15 = FUNC_5(VAR_9, VAR_10, ((void*)0), VAR_11,
     VAR_5,
     VAR_16, 0, 0,
              VAR_1, VAR_8);
  if (VAR_15 == VAR_0) {
   FUNC_6(VAR_9, VAR_10, "mpt_refresh_raid_data: "
        "Resync Rate Setting Timed-out\n");
   return;
  }
  VAR_12 = FUNC_1(VAR_11);
  if (VAR_15 != 0
   || FUNC_0(VAR_11) != VAR_2
   || (VAR_12->action_status != VAR_4)) {
   FUNC_6(VAR_9, VAR_10, "Resync Rate Setting Failed: "
        "%d:%x:%x\n", VAR_15, VAR_11->IOCStatus,
        VAR_12->action_status);
  } else {
   VAR_13->VolumeSettings.Settings ^=
       VAR_3;
  }

  FUNC_3(VAR_9, VAR_11);
 }
}
