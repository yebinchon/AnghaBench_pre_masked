
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {scalar_t__ v_strip_size; scalar_t__ v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int sd_state; scalar_t__ sd_rebuild_pos; } ;
struct bio_queue_head {int dummy; } ;
struct bio {int bio_flags; char* bio_data; scalar_t__ bio_length; scalar_t__ bio_cmd; uintptr_t bio_ma_offset; int bio_ma; int bio_ma_n; scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; scalar_t__ bio_offset; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct g_raid_volume*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct bio_queue_head*) ;
 int FUNC_3 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_4 (struct bio_queue_head*) ;
 struct bio* FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,scalar_t__) ;
 int FUNC_8 (struct g_raid_subdisk*,struct bio*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct g_raid_tr_object *VAR_5, struct bio *VAR_6)
{
 struct g_raid_volume *VAR_7;
 struct g_raid_subdisk *VAR_8;
 struct bio_queue_head VAR_9;
 struct bio *VAR_10;
 char *VAR_11;
 off_t VAR_12, VAR_13, VAR_14, VAR_15;
 u_int VAR_16, VAR_17;
 int VAR_18;

 VAR_7 = VAR_5->tro_volume;
 if ((VAR_6->bio_flags & VAR_1) != 0)
  VAR_11 = ((void*)0);
 else
  VAR_11 = VAR_6->bio_data;
 VAR_17 = VAR_7->v_strip_size;
 FUNC_1(VAR_7, VAR_6->bio_offset, &VAR_16, &VAR_12, &VAR_13);
 VAR_15 = VAR_6->bio_length;
 FUNC_2(&VAR_9);
 while (VAR_15 > 0) {
  VAR_14 = FUNC_0(VAR_17 - VAR_13, VAR_15);
  for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
   VAR_8 = &VAR_7->v_subdisks[VAR_16];
   switch (VAR_8->sd_state) {
   case 131:
   case 128:
   case 129:
    break;
   case 130:
    if (VAR_12 + VAR_13 >= VAR_8->sd_rebuild_pos)
     goto nextdisk;
    break;
   default:
    goto nextdisk;
   }
   VAR_10 = FUNC_5(VAR_6);
   if (VAR_10 == ((void*)0))
    goto failure;
   VAR_10->bio_offset = VAR_12 + VAR_13;
   VAR_10->bio_length = VAR_14;
   if ((VAR_6->bio_flags & VAR_1) != 0 &&
       VAR_6->bio_cmd != VAR_0) {
    VAR_10->bio_ma_offset += (uintptr_t)VAR_11;
    VAR_10->bio_ma += VAR_10->bio_ma_offset / VAR_4;
    VAR_10->bio_ma_offset %= VAR_4;
    VAR_10->bio_ma_n = FUNC_9(VAR_10->bio_ma_offset +
        VAR_10->bio_length) / VAR_4;
   } else
    VAR_10->bio_data = VAR_11;
   VAR_10->bio_caller1 = VAR_8;
   FUNC_3(&VAR_9, VAR_10);
nextdisk:
   if (++VAR_16 >= VAR_7->v_disks_count) {
    VAR_16 = 0;
    VAR_12 += VAR_17;
   }
  }
  VAR_15 -= VAR_14;
  if (VAR_6->bio_cmd != VAR_0)
   VAR_11 += VAR_14;
  VAR_13 = 0;
 }
 while ((VAR_10 = FUNC_4(&VAR_9)) != ((void*)0)) {
  VAR_8 = VAR_10->bio_caller1;
  VAR_10->bio_caller1 = ((void*)0);
  FUNC_8(VAR_8, VAR_10);
 }
 return;
failure:
 while ((VAR_10 = FUNC_4(&VAR_9)) != ((void*)0))
  FUNC_6(VAR_10);
 if (VAR_6->bio_error == 0)
  VAR_6->bio_error = VAR_2;
 FUNC_7(VAR_6, VAR_6->bio_error);
}
