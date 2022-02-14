
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_raid_volume {scalar_t__ v_state; size_t v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_size; } ;
struct bio_queue_head {int dummy; } ;
struct bio {scalar_t__ bio_cmd; scalar_t__ bio_offset; scalar_t__ bio_length; int bio_flags; char* bio_data; uintptr_t bio_ma_offset; int bio_ma; int bio_ma_n; scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (struct bio_queue_head*) ;
 int FUNC_3 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_4 (struct bio_queue_head*) ;
 struct bio* FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,scalar_t__) ;
 int FUNC_8 (struct g_raid_subdisk*,struct bio*) ;
 int FUNC_9 (struct g_raid_tr_object*,struct bio*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct g_raid_tr_object *VAR_8, struct bio *VAR_9)
{
 struct g_raid_volume *VAR_10;
 struct g_raid_subdisk *VAR_11;
 struct bio_queue_head VAR_12;
 struct bio *VAR_13;
 char *VAR_14;
 off_t VAR_15, VAR_16, VAR_17;
 u_int VAR_18;

 VAR_10 = VAR_8->tro_volume;
 if (VAR_10->v_state != VAR_5 &&
     VAR_10->v_state != VAR_6) {
  FUNC_7(VAR_9, VAR_3);
  return;
 }
 if (VAR_9->bio_cmd == VAR_1) {
  FUNC_9(VAR_8, VAR_9);
  return;
 }

 VAR_15 = VAR_9->bio_offset;
 VAR_17 = VAR_9->bio_length;
 if ((VAR_9->bio_flags & VAR_2) != 0)
  VAR_14 = ((void*)0);
 else
  VAR_14 = VAR_9->bio_data;
 VAR_18 = 0;
 while (VAR_18 < VAR_10->v_disks_count &&
     VAR_15 >= VAR_10->v_subdisks[VAR_18].sd_size) {
  VAR_15 -= VAR_10->v_subdisks[VAR_18].sd_size;
  VAR_18++;
 }
 FUNC_0(VAR_18 < VAR_10->v_disks_count,
     ("Request starts after volume end (%ju)", VAR_9->bio_offset));
 FUNC_2(&VAR_12);
 do {
  VAR_11 = &VAR_10->v_subdisks[VAR_18];
  VAR_16 = FUNC_1(VAR_11->sd_size - VAR_15, VAR_17);
  VAR_13 = FUNC_5(VAR_9);
  if (VAR_13 == ((void*)0))
   goto failure;
  VAR_13->bio_offset = VAR_15;
  VAR_13->bio_length = VAR_16;
  if ((VAR_9->bio_flags & VAR_2) != 0 &&
      VAR_9->bio_cmd != VAR_0) {
   VAR_13->bio_ma_offset += (uintptr_t)VAR_14;
   VAR_13->bio_ma += VAR_13->bio_ma_offset / VAR_7;
   VAR_13->bio_ma_offset %= VAR_7;
   VAR_13->bio_ma_n = FUNC_10(VAR_13->bio_ma_offset +
       VAR_13->bio_length) / VAR_7;
  } else
   VAR_13->bio_data = VAR_14;
  VAR_13->bio_caller1 = VAR_11;
  FUNC_3(&VAR_12, VAR_13);
  VAR_17 -= VAR_16;
  if (VAR_9->bio_cmd != VAR_0)
   VAR_14 += VAR_16;
  VAR_15 = 0;
  VAR_18++;
  FUNC_0(VAR_18 < VAR_10->v_disks_count || VAR_17 == 0,
      ("Request ends after volume end (%ju, %ju)",
   VAR_9->bio_offset, VAR_9->bio_length));
 } while (VAR_17 > 0);
 while ((VAR_13 = FUNC_4(&VAR_12)) != ((void*)0)) {
  VAR_11 = VAR_13->bio_caller1;
  VAR_13->bio_caller1 = ((void*)0);
  FUNC_8(VAR_11, VAR_13);
 }
 return;
failure:
 while ((VAR_13 = FUNC_4(&VAR_12)) != ((void*)0))
  FUNC_6(VAR_13);
 if (VAR_9->bio_error == 0)
  VAR_9->bio_error = VAR_4;
 FUNC_7(VAR_9, VAR_9->bio_error);
}
