
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {scalar_t__ v_strip_size; scalar_t__ v_disks_count; struct g_raid_subdisk* v_subdisks; int v_name; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int dummy; } ;
struct bio_queue_head {int dummy; } ;
struct bio {int bio_flags; char* bio_data; scalar_t__ bio_length; uintptr_t bio_ma_offset; int bio_ma; int bio_ma_n; scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; scalar_t__ bio_offset; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct g_raid_volume*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct bio_queue_head*) ;
 int FUNC_4 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_5 (struct bio_queue_head*) ;
 struct bio* FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*,scalar_t__) ;
 int FUNC_9 (struct g_raid_subdisk*,struct bio*) ;
 int FUNC_10 (struct g_raid_volume*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct g_raid_tr_object *VAR_4, struct bio *VAR_5)
{
 struct g_raid_volume *VAR_6;
 struct g_raid_subdisk *VAR_7;
 struct bio_queue_head VAR_8;
 struct bio *VAR_9;
 char *VAR_10;
 off_t VAR_11, VAR_12, VAR_13, VAR_14;
 u_int VAR_15, VAR_16;
 int VAR_17;

 VAR_6 = VAR_4->tro_volume;
 if ((VAR_5->bio_flags & VAR_0) != 0)
  VAR_10 = ((void*)0);
 else
  VAR_10 = VAR_5->bio_data;
 VAR_16 = VAR_6->v_strip_size;
 FUNC_2(VAR_6, VAR_5->bio_offset, &VAR_15, &VAR_11, &VAR_12);
 VAR_14 = VAR_5->bio_length;
 FUNC_3(&VAR_8);
 while (VAR_14 > 0) {
  VAR_13 = FUNC_1(VAR_16 - VAR_12, VAR_14);
  VAR_17 = FUNC_10(VAR_6,
      VAR_15, VAR_11, VAR_13, 0);
  FUNC_0(VAR_17 >= 0, ("No readable disk in volume %s!",
      VAR_6->v_name));
  VAR_15 += VAR_17;
  if (VAR_15 >= VAR_6->v_disks_count) {
   VAR_15 -= VAR_6->v_disks_count;
   VAR_11 += VAR_16;
  }
  VAR_9 = FUNC_6(VAR_5);
  if (VAR_9 == ((void*)0))
   goto failure;
  VAR_9->bio_offset = VAR_11 + VAR_12;
  VAR_9->bio_length = VAR_13;
  if ((VAR_5->bio_flags & VAR_0) != 0) {
   VAR_9->bio_ma_offset += (uintptr_t)VAR_10;
   VAR_9->bio_ma += VAR_9->bio_ma_offset / VAR_3;
   VAR_9->bio_ma_offset %= VAR_3;
   VAR_9->bio_ma_n = FUNC_11(VAR_9->bio_ma_offset +
       VAR_9->bio_length) / VAR_3;
  } else
   VAR_9->bio_data = VAR_10;
  VAR_9->bio_caller1 = &VAR_6->v_subdisks[VAR_15];
  FUNC_4(&VAR_8, VAR_9);
  VAR_15 += VAR_2 - VAR_17;
  if (VAR_15 >= VAR_6->v_disks_count) {
   VAR_15 -= VAR_6->v_disks_count;
   VAR_11 += VAR_16;
  }
  VAR_14 -= VAR_13;
  VAR_10 += VAR_13;
  VAR_12 = 0;
 }
 while ((VAR_9 = FUNC_5(&VAR_8)) != ((void*)0)) {
  VAR_7 = VAR_9->bio_caller1;
  VAR_9->bio_caller1 = ((void*)0);
  FUNC_9(VAR_7, VAR_9);
 }
 return;
failure:
 while ((VAR_9 = FUNC_5(&VAR_8)) != ((void*)0))
  FUNC_7(VAR_9);
 if (VAR_5->bio_error == 0)
  VAR_5->bio_error = VAR_1;
 FUNC_8(VAR_5, VAR_5->bio_error);
}
