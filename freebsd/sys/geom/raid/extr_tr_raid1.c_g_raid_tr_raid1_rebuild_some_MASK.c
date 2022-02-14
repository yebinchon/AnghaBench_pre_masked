
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_length; scalar_t__ bio_offset; struct g_raid_subdisk* bio_caller1; int bio_cflags; int bio_cmd; int bio_data; } ;
struct g_raid_tr_raid1_object {int trso_flags; int trso_buffer; struct bio trso_bio; struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {int dummy; } ;
struct g_raid_subdisk {int sd_volume; scalar_t__ sd_rebuild_pos; scalar_t__ sd_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct g_raid_subdisk* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int *,struct bio*) ;
 int FUNC_3 (struct g_raid_tr_object*) ;
 int FUNC_4 (struct bio*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct g_raid_tr_object *VAR_6)
{
 struct g_raid_tr_raid1_object *VAR_7;
 struct g_raid_subdisk *VAR_8, *VAR_9;
 struct bio *VAR_10;

 VAR_7 = (struct g_raid_tr_raid1_object *)VAR_6;
 if (VAR_7->trso_flags & VAR_3)
  return;
 VAR_8 = VAR_7->trso_failed_sd;
 VAR_9 = FUNC_1(VAR_8->sd_volume, VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_6);
  return;
 }
 VAR_10 = &VAR_7->trso_bio;
 FUNC_4(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->bio_offset = VAR_8->sd_rebuild_pos;
 VAR_10->bio_length = FUNC_0(VAR_5,
     VAR_8->sd_size - VAR_8->sd_rebuild_pos);
 VAR_10->bio_data = VAR_7->trso_buffer;
 VAR_10->bio_cmd = VAR_0;
 VAR_10->bio_cflags = VAR_1;
 VAR_10->bio_caller1 = VAR_9;
 VAR_7->trso_flags |= VAR_3;
 VAR_7->trso_flags |= VAR_4;
 FUNC_2(VAR_8->sd_volume,
    VAR_10->bio_offset, VAR_10->bio_length, ((void*)0), VAR_10);
}
