
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {scalar_t__ v_state; int v_name; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct bio {int bio_cmd; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct g_raid_tr_object*,struct bio*) ;

__attribute__((used)) static void
FUNC_3(struct g_raid_tr_object *VAR_3, struct bio *VAR_4)
{
 struct g_raid_volume *VAR_5;

 VAR_5 = VAR_3->tro_volume;
 if (VAR_5->v_state < VAR_2) {
  FUNC_1(VAR_4, VAR_0);
  return;
 }
 switch (VAR_4->bio_cmd) {
 case 129:
  FUNC_2(VAR_3, VAR_4);
  break;
 case 128:
 case 131:
 case 130:
  FUNC_1(VAR_4, VAR_1);
  break;
 default:
  FUNC_0(1 == 0, ("Invalid command here: %u (volume=%s)",
      VAR_4->bio_cmd, VAR_5->v_name));
  break;
 }
}
