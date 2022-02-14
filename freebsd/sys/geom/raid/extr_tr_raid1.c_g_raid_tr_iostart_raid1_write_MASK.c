
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int sd_state; int sd_rebuild_pos; } ;
struct bio_queue_head {int dummy; } ;
struct bio {scalar_t__ bio_error; struct g_raid_subdisk* bio_caller1; int bio_offset; } ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (struct bio_queue_head*) ;
 int FUNC_1 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_2 (struct bio_queue_head*) ;
 struct bio* FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,scalar_t__) ;
 int FUNC_6 (struct g_raid_subdisk*,struct bio*) ;

__attribute__((used)) static void
FUNC_7(struct g_raid_tr_object *VAR_1, struct bio *VAR_2)
{
 struct g_raid_volume *VAR_3;
 struct g_raid_subdisk *VAR_4;
 struct bio_queue_head VAR_5;
 struct bio *VAR_6;
 int VAR_7;

 VAR_3 = VAR_1->tro_volume;





 FUNC_0(&VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_3->v_disks_count; VAR_7++) {
  VAR_4 = &VAR_3->v_subdisks[VAR_7];
  switch (VAR_4->sd_state) {
  case 131:
   break;
  case 130:





   if (VAR_2->bio_offset >= VAR_4->sd_rebuild_pos)
    continue;
   break;
  case 128:
  case 129:






   break;
  default:
   continue;
  }
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6 == ((void*)0))
   goto failure;
  VAR_6->bio_caller1 = VAR_4;
  FUNC_1(&VAR_5, VAR_6);
 }
 while ((VAR_6 = FUNC_2(&VAR_5)) != ((void*)0)) {
  VAR_4 = VAR_6->bio_caller1;
  VAR_6->bio_caller1 = ((void*)0);
  FUNC_6(VAR_4, VAR_6);
 }
 return;
failure:
 while ((VAR_6 = FUNC_2(&VAR_5)) != ((void*)0))
  FUNC_4(VAR_6);
 if (VAR_2->bio_error == 0)
  VAR_2->bio_error = VAR_0;
 FUNC_5(VAR_2, VAR_2->bio_error);
}
