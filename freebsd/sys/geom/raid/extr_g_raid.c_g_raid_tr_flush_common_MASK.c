
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_state; } ;
struct bio_queue_head {int dummy; } ;
struct bio {scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bio_queue_head*) ;
 int FUNC_1 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_2 (struct bio_queue_head*) ;
 struct bio* FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,scalar_t__) ;
 int FUNC_6 (struct g_raid_subdisk*,struct bio*) ;

void
FUNC_7(struct g_raid_tr_object *VAR_3, struct bio *VAR_4)
{
 struct g_raid_volume *VAR_5;
 struct g_raid_subdisk *VAR_6;
 struct bio_queue_head VAR_7;
 struct bio *VAR_8;
 int VAR_9;

 VAR_5 = VAR_3->tro_volume;





 FUNC_0(&VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_5->v_disks_count; VAR_9++) {
  VAR_6 = &VAR_5->v_subdisks[VAR_9];
  if (VAR_6->sd_state == VAR_2 ||
      VAR_6->sd_state == VAR_1)
   continue;
  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 == ((void*)0))
   goto failure;
  VAR_8->bio_caller1 = VAR_6;
  FUNC_1(&VAR_7, VAR_8);
 }
 while ((VAR_8 = FUNC_2(&VAR_7)) != ((void*)0)) {
  VAR_6 = VAR_8->bio_caller1;
  VAR_8->bio_caller1 = ((void*)0);
  FUNC_6(VAR_6, VAR_8);
 }
 return;
failure:
 while ((VAR_8 = FUNC_2(&VAR_7)) != ((void*)0))
  FUNC_4(VAR_8);
 if (VAR_4->bio_error == 0)
  VAR_4->bio_error = VAR_0;
 FUNC_5(VAR_4, VAR_4->bio_error);
}
