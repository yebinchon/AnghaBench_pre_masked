
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_disks_count; scalar_t__ v_strip_size; int * v_subdisks; struct g_raid_softc* v_softc; } ;
struct bio {int * bio_caller1; int bio_cflags; int bio_cmd; int bio_data; scalar_t__ bio_length; scalar_t__ bio_offset; } ;
struct g_raid_tr_raid1e_object {int trso_flags; scalar_t__ trso_lock_len; scalar_t__ trso_lock_pos; int trso_buffer; struct bio trso_bio; struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_rebuild_pos; scalar_t__ sd_size; int sd_volume; int sd_pos; } ;
struct g_raid_softc {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct g_raid_softc*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,struct bio*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct g_raid_volume*,int ,scalar_t__,scalar_t__*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct g_raid_volume*,scalar_t__,int*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int *,struct bio*) ;
 int FUNC_6 (struct g_raid_tr_object*) ;
 int FUNC_7 (struct g_raid_tr_object*) ;
 int FUNC_8 (struct g_raid_volume*,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (struct bio*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct g_raid_tr_object *VAR_6)
{
 struct g_raid_tr_raid1e_object *VAR_7;
 struct g_raid_softc *VAR_8;
 struct g_raid_volume *VAR_9;
 struct g_raid_subdisk *VAR_10;
 struct bio *VAR_11;
 off_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_7 = (struct g_raid_tr_raid1e_object *)VAR_6;
 if (VAR_7->trso_flags & VAR_3)
  return;
 VAR_9 = VAR_6->tro_volume;
 VAR_8 = VAR_9->v_softc;
 VAR_10 = VAR_7->trso_failed_sd;

 while (1) {
  if (VAR_10->sd_rebuild_pos >= VAR_10->sd_size) {
   FUNC_7(VAR_6);
   return;
  }

  FUNC_3(VAR_9, VAR_10->sd_pos, VAR_10->sd_rebuild_pos, &VAR_13, &VAR_18);

  FUNC_4(VAR_9, VAR_13, &VAR_17, &VAR_15, &VAR_16);

  VAR_12 = FUNC_2(VAR_5,
      VAR_10->sd_size - VAR_10->sd_rebuild_pos);
  if ((VAR_9->v_disks_count % VAR_2) != 0)
   VAR_12 = FUNC_2(VAR_12, VAR_9->v_strip_size - VAR_16);

  VAR_19 = FUNC_8(VAR_9, VAR_17,
      VAR_15 + VAR_16, VAR_12, 0);
  if (VAR_19 < 0) {

   FUNC_6(VAR_6);
   return;
  } else if (VAR_19 != VAR_18) {

   break;
  }

  FUNC_0(3, VAR_8, "Skipping rebuild for range %ju - %ju",
      VAR_10->sd_rebuild_pos, VAR_10->sd_rebuild_pos + VAR_12);
  VAR_10->sd_rebuild_pos += VAR_12;
 }

 VAR_11 = &VAR_7->trso_bio;
 FUNC_9(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->bio_offset = VAR_15 + VAR_16 +
     ((VAR_17 + VAR_19 >= VAR_9->v_disks_count) ? VAR_9->v_strip_size : 0);
 VAR_11->bio_length = VAR_12;
 VAR_11->bio_data = VAR_7->trso_buffer;
 VAR_11->bio_cmd = VAR_0;
 VAR_11->bio_cflags = VAR_1;
 VAR_11->bio_caller1 = &VAR_9->v_subdisks[(VAR_17 + VAR_19) % VAR_9->v_disks_count];
 FUNC_1(3, VAR_11, "Queueing rebuild read");




 if (VAR_16 + VAR_12 > VAR_9->v_strip_size) {
  FUNC_3(VAR_9, VAR_10->sd_pos, VAR_10->sd_rebuild_pos + VAR_12, &VAR_14, &VAR_18);
  VAR_12 = VAR_14 - VAR_13;
 }
 VAR_7->trso_flags |= VAR_3;
 VAR_7->trso_flags |= VAR_4;
 VAR_7->trso_lock_pos = VAR_13;
 VAR_7->trso_lock_len = VAR_12;

 FUNC_5(VAR_10->sd_volume, VAR_13, VAR_12, ((void*)0), VAR_11);
}
