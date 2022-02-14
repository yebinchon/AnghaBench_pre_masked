
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct g_raid_volume {scalar_t__ v_strip_size; scalar_t__ v_raid_level; scalar_t__ v_raid_level_qualifier; int v_rotate_parity; int v_mdf_pdisks; int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int dummy; } ;
struct bio_queue_head {int dummy; } ;
struct bio {char* bio_data; scalar_t__ bio_offset; int bio_length; scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct bio_queue_head*) ;
 int FUNC_2 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_3 (struct bio_queue_head*) ;
 struct bio* FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,scalar_t__) ;
 int FUNC_7 (struct g_raid_subdisk*,struct bio*) ;
 scalar_t__ FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct g_raid_tr_object *VAR_5, struct bio *VAR_6)
{
 struct g_raid_volume *VAR_7;
 struct g_raid_subdisk *VAR_8;
 struct bio_queue_head VAR_9;
 struct bio *VAR_10;
 char *VAR_11;
 off_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u_int VAR_23, VAR_24, VAR_25;

 VAR_7 = VAR_5->tro_volume;
 VAR_11 = VAR_6->bio_data;
 VAR_23 = VAR_7->v_strip_size;
 VAR_24 = VAR_5->tro_volume->v_raid_level;
 VAR_25 = VAR_5->tro_volume->v_raid_level_qualifier;
 VAR_21 = VAR_5->tro_volume->v_rotate_parity;


 VAR_15 = VAR_6->bio_offset / VAR_23;

 VAR_13 = VAR_6->bio_offset % VAR_23;

 if (VAR_24 == VAR_4)
  VAR_20 = VAR_5->tro_volume->v_mdf_pdisks;
 else if (VAR_24 == VAR_2 ||
     VAR_24 == VAR_3)
  VAR_20 = 2;
 else
  VAR_20 = 1;
 VAR_19 = VAR_7->v_disks_count - VAR_20;

 if (VAR_24 == VAR_1) {
  if (VAR_25 == 0)
   VAR_18 = 0;
  else
   VAR_18 = VAR_19;
  VAR_22 = -1;
 } else {
  VAR_18 = (VAR_15 / (VAR_19 * VAR_21)) % VAR_7->v_disks_count;
  VAR_22 = VAR_21 - (VAR_15 / VAR_19) % VAR_21;
  if (VAR_25 >= 2) {
   VAR_18 = VAR_19 - VAR_18;
   if (VAR_18 < 0)
    VAR_18 += VAR_7->v_disks_count;
  }
 }

 VAR_17 = VAR_15 % VAR_19;
 if (VAR_24 == VAR_1) {
  if (VAR_25 == 0)
   VAR_17 += VAR_20;
 } else if (VAR_25 & 1) {
  VAR_17 = (VAR_18 + VAR_20 + VAR_17) % VAR_7->v_disks_count;
 } else if (VAR_17 >= VAR_18)
  VAR_17 += VAR_20;
 else
  VAR_17 += FUNC_8(0, VAR_18 + VAR_20 - VAR_7->v_disks_count);

 VAR_12 = (VAR_15 / VAR_19) * VAR_23;

 VAR_16 = VAR_6->bio_length;

 FUNC_1(&VAR_9);
 do {
  VAR_14 = FUNC_0(VAR_23 - VAR_13, VAR_16);
  VAR_10 = FUNC_4(VAR_6);
  if (VAR_10 == ((void*)0))
   goto failure;
  VAR_10->bio_offset = VAR_12 + VAR_13;
  VAR_10->bio_data = VAR_11;
  VAR_10->bio_length = VAR_14;
  VAR_10->bio_caller1 = &VAR_7->v_subdisks[VAR_17];
  FUNC_2(&VAR_9, VAR_10);
  VAR_17++;
  if (VAR_24 == VAR_1) {
   VAR_17 %= VAR_7->v_disks_count;
   if (VAR_17 == VAR_18)
    VAR_17 = (VAR_17 + VAR_20) % VAR_7->v_disks_count;
  } else if (VAR_25 & 1) {
   VAR_17 %= VAR_7->v_disks_count;
   if (VAR_17 == VAR_18) {
    if ((--VAR_22) <= 0) {
     VAR_22 += VAR_21;
     if (VAR_25 < 2)
      VAR_18++;
     else
      VAR_18 += VAR_7->v_disks_count - 1;
     VAR_18 %= VAR_7->v_disks_count;
    }
    VAR_17 = (VAR_18 + VAR_20) % VAR_7->v_disks_count;
    VAR_12 += VAR_23;
   }
  } else {
   if (VAR_17 == VAR_18)
    VAR_17 += VAR_20;
   if (VAR_17 >= VAR_7->v_disks_count) {
    VAR_17 -= VAR_7->v_disks_count;
    if ((--VAR_22) <= 0) {
     VAR_22 += VAR_21;
     if (VAR_25 < 2)
      VAR_18++;
     else
      VAR_18 += VAR_7->v_disks_count - 1;
     VAR_18 %= VAR_7->v_disks_count;
    }
    if (VAR_17 == VAR_18)
     VAR_17 += VAR_20;
    else
     VAR_17 += FUNC_8(0, VAR_18 + VAR_20 - VAR_7->v_disks_count);
    VAR_12 += VAR_23;
   }
  }
  VAR_16 -= VAR_14;
  VAR_11 += VAR_14;
  VAR_13 = 0;
 } while (VAR_16 > 0);
 while ((VAR_10 = FUNC_3(&VAR_9)) != ((void*)0)) {
  VAR_8 = VAR_10->bio_caller1;
  VAR_10->bio_caller1 = ((void*)0);
  FUNC_7(VAR_8, VAR_10);
 }
 return;
failure:
 while ((VAR_10 = FUNC_3(&VAR_9)) != ((void*)0))
  FUNC_5(VAR_10);
 if (VAR_6->bio_error == 0)
  VAR_6->bio_error = VAR_0;
 FUNC_6(VAR_6, VAR_6->bio_error);
}
