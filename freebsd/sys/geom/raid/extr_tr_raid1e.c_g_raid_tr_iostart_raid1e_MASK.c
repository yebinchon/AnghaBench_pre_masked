
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {scalar_t__ v_state; int v_name; } ;
struct g_raid_tr_raid1e_object {scalar_t__ trso_fair_io; scalar_t__ trso_recover_slabs; int * trso_failed_sd; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct bio {int bio_cflags; int bio_cmd; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct g_raid_tr_object*,struct bio*) ;
 int FUNC_3 (struct g_raid_tr_object*,struct bio*) ;
 int FUNC_4 (struct g_raid_tr_object*,struct bio*) ;
 int FUNC_5 (struct g_raid_tr_object*) ;

__attribute__((used)) static void
FUNC_6(struct g_raid_tr_object *VAR_6, struct bio *VAR_7)
{
 struct g_raid_volume *VAR_8;
 struct g_raid_tr_raid1e_object *VAR_9;

 VAR_8 = VAR_6->tro_volume;
 VAR_9 = (struct g_raid_tr_raid1e_object *)VAR_6;
 if (VAR_8->v_state != VAR_3 &&
     VAR_8->v_state != VAR_4 &&
     VAR_8->v_state != VAR_2) {
  FUNC_1(VAR_7, VAR_0);
  return;
 }






 if (VAR_9->trso_failed_sd != ((void*)0) &&
     !(VAR_7->bio_cflags & VAR_1)) {

  VAR_9->trso_recover_slabs = 0;
  if (--VAR_9->trso_fair_io <= 0) {
   VAR_9->trso_fair_io = VAR_5;
   FUNC_5(VAR_6);
  }
 }
 switch (VAR_7->bio_cmd) {
 case 129:
  FUNC_3(VAR_6, VAR_7);
  break;
 case 128:
 case 131:
  FUNC_4(VAR_6, VAR_7);
  break;
 case 130:
  FUNC_2(VAR_6, VAR_7);
  break;
 default:
  FUNC_0(1 == 0, ("Invalid command here: %u (volume=%s)",
      VAR_7->bio_cmd, VAR_8->v_name));
  break;
 }
}
