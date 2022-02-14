
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid_volume {int v_softc; } ;
struct g_raid_tr_raid1_object {scalar_t__ trso_type; int trso_flags; scalar_t__ trso_meta_update; scalar_t__ trso_recover_slabs; scalar_t__ trso_stopping; struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_rebuild_pos; scalar_t__ sd_size; int sd_pos; TYPE_1__* sd_disk; int sd_softc; int sd_volume; int sd_recovery; } ;
struct bio {int bio_cflags; scalar_t__ bio_cmd; int bio_error; scalar_t__ bio_length; int bio_inbed; int bio_children; int bio_pflags; scalar_t__ bio_completed; int bio_offset; struct g_raid_subdisk* bio_driver1; struct g_raid_subdisk* bio_caller1; int bio_driver2; struct bio* bio_parent; } ;
struct TYPE_3__ {int d_read_errs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct bio*,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct bio*,int) ;
 int FUNC_4 (int ,int ,scalar_t__,struct bio*,struct bio*) ;
 int VAR_11 ;
 int FUNC_5 (struct g_raid_subdisk*,struct bio*) ;
 int FUNC_6 (int ,struct g_raid_subdisk*,TYPE_1__*) ;
 int FUNC_7 (struct g_raid_tr_object*) ;
 int FUNC_8 (struct g_raid_tr_object*) ;
 int FUNC_9 (struct g_raid_tr_object*) ;
 struct g_raid_subdisk* FUNC_10 (struct g_raid_volume*,struct bio*,uintptr_t) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int ,struct g_raid_volume*,struct g_raid_subdisk*,TYPE_1__*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(struct g_raid_tr_object *VAR_12,
    struct g_raid_subdisk *VAR_13, struct bio *VAR_14)
{
 struct bio *VAR_15;
 struct g_raid_subdisk *VAR_16;
 struct g_raid_volume *VAR_17;
 struct bio *VAR_18;
 struct g_raid_tr_raid1_object *VAR_19;
 uintptr_t *VAR_20;
 int VAR_21, VAR_22;

 VAR_19 = (struct g_raid_tr_raid1_object *)VAR_12;
 VAR_17 = VAR_12->tro_volume;
 if (VAR_14->bio_cflags & VAR_4) {
  if (VAR_19->trso_type == VAR_8) {
   if (VAR_14->bio_cmd == VAR_0) {


    if (VAR_19->trso_flags & VAR_5) {
     VAR_19->trso_flags &= ~VAR_6;
     FUNC_7(VAR_12);
     return;
    }


    if (VAR_14->bio_error != 0) {
     FUNC_0(0, VAR_14,
         "Read error during rebuild (%d), "
         "possible data loss!",
         VAR_14->bio_error);
     goto rebuild_round_done;
    }





    FUNC_0(4, VAR_14, "rebuild read done. %d",
        VAR_14->bio_error);
    VAR_14->bio_cmd = VAR_1;
    VAR_14->bio_cflags = VAR_4;
    FUNC_0(4, VAR_14, "Queueing rebuild write.");
    FUNC_5(VAR_19->trso_failed_sd, VAR_14);
   } else {






    FUNC_0(4, VAR_14,
        "rebuild write done. Error %d",
        VAR_14->bio_error);
    VAR_16 = VAR_19->trso_failed_sd;
    if (VAR_14->bio_error != 0 ||
        VAR_19->trso_flags & VAR_5) {
     if ((VAR_19->trso_flags &
         VAR_5) == 0) {
      FUNC_6(VAR_13->sd_softc,
          VAR_16, VAR_16->sd_disk);
     }
     VAR_19->trso_flags &= ~VAR_6;
     FUNC_7(VAR_12);
     return;
    }
rebuild_round_done:
    VAR_16 = VAR_19->trso_failed_sd;
    VAR_19->trso_flags &= ~VAR_7;
    FUNC_11(VAR_13->sd_volume,
        VAR_14->bio_offset, VAR_14->bio_length);
    VAR_16->sd_rebuild_pos += VAR_14->bio_length;
    if (VAR_16->sd_rebuild_pos >= VAR_16->sd_size) {
     FUNC_8(VAR_12);
     return;
    }


    if (VAR_19->trso_stopping) {
     VAR_19->trso_flags &= ~VAR_6;
     FUNC_7(VAR_12);
     return;
    }

    if (--VAR_19->trso_meta_update <= 0) {
     FUNC_12(VAR_17->v_softc,
         VAR_17, VAR_16, VAR_16->sd_disk);
     VAR_19->trso_meta_update =
         VAR_10;
    }
    VAR_19->trso_flags &= ~VAR_6;
    if (--VAR_19->trso_recover_slabs <= 0)
     return;
    FUNC_9(VAR_12);
   }
  } else if (VAR_19->trso_type == VAR_9) {





   FUNC_13("Somehow, we think we're doing a resync");
  }
  return;
 }
 VAR_18 = VAR_14->bio_parent;
 VAR_18->bio_inbed++;
 if (VAR_14->bio_cmd == VAR_0 && VAR_14->bio_error != 0) {





  VAR_13->sd_disk->d_read_errs++;
  FUNC_0(0, VAR_14,
      "Read error (%d), %d read errors total",
      VAR_14->bio_error, VAR_13->sd_disk->d_read_errs);







  VAR_22 = 1;
  if (VAR_13->sd_disk->d_read_errs > VAR_11) {
   FUNC_6(VAR_13->sd_softc, VAR_13, VAR_13->sd_disk);
   if (VAR_18->bio_children == 1)
    VAR_22 = 0;
  }




  VAR_20 = (uintptr_t *)(&VAR_18->bio_driver2);
  if (VAR_18->bio_children == 1) {

   VAR_18->bio_driver1 = VAR_22 ? VAR_13 : ((void*)0);
   *VAR_20 = 0;
  }
  *VAR_20 |= 1 << VAR_13->sd_pos;
  VAR_16 = FUNC_10(VAR_17, VAR_18, *VAR_20);
  if (VAR_16 != ((void*)0) && (VAR_15 = FUNC_1(VAR_18)) != ((void*)0)) {
   FUNC_2(VAR_14);
   FUNC_0(2, VAR_15, "Retrying read from %d",
       VAR_16->sd_pos);
   if (VAR_18->bio_children == 2 && VAR_22) {
    VAR_13->sd_recovery++;
    VAR_15->bio_caller1 = VAR_16;
    VAR_18->bio_pflags = VAR_2;

    FUNC_4(VAR_13->sd_volume,
        VAR_15->bio_offset, VAR_15->bio_length, VAR_18, VAR_15);
   } else {
    FUNC_5(VAR_16, VAR_15);
   }
   return;
  }






  FUNC_0(2, VAR_14, "Couldn't retry read, failing it");
 }
 if (VAR_14->bio_cmd == VAR_0 &&
     VAR_14->bio_error == 0 &&
     VAR_18->bio_children > 1 &&
     VAR_18->bio_driver1 != ((void*)0)) {
  FUNC_0(3, VAR_14, "Recovered data from other drive");
  VAR_15 = FUNC_1(VAR_18);
  if (VAR_15 != ((void*)0)) {
   FUNC_2(VAR_14);
   VAR_15->bio_cmd = VAR_1;
   VAR_15->bio_cflags = VAR_3;
   FUNC_0(2, VAR_15,
       "Attempting bad sector remap on failing drive.");
   FUNC_5(VAR_18->bio_driver1, VAR_15);
   return;
  }
 }
 if (VAR_18->bio_pflags & VAR_2) {
  if (VAR_14->bio_cmd == VAR_1 && VAR_14->bio_error) {
   FUNC_0(0, VAR_14, "Remap write failed: "
       "failing subdisk.");
   FUNC_6(VAR_13->sd_softc, VAR_13, VAR_13->sd_disk);
   VAR_14->bio_error = 0;
  }
  if (VAR_18->bio_driver1 != ((void*)0)) {
   ((struct g_raid_subdisk *)VAR_18->bio_driver1)
       ->sd_recovery--;
  }
  FUNC_0(2, VAR_14, "REMAP done %d.", VAR_14->bio_error);
  FUNC_11(VAR_13->sd_volume, VAR_14->bio_offset,
      VAR_14->bio_length);
 }
 if (VAR_18->bio_cmd != VAR_0) {
  if (VAR_18->bio_inbed == 1 || VAR_18->bio_error != 0)
   VAR_18->bio_error = VAR_14->bio_error;
  if (VAR_18->bio_cmd == VAR_1 && VAR_14->bio_error != 0) {
   FUNC_0(0, VAR_14, "Write failed: failing subdisk.");
   FUNC_6(VAR_13->sd_softc, VAR_13, VAR_13->sd_disk);
  }
  VAR_21 = VAR_18->bio_error;
 } else
  VAR_21 = VAR_14->bio_error;
 FUNC_2(VAR_14);
 if (VAR_18->bio_children == VAR_18->bio_inbed) {
  VAR_18->bio_completed = VAR_18->bio_length;
  FUNC_3(VAR_18, VAR_21);
 }
}
