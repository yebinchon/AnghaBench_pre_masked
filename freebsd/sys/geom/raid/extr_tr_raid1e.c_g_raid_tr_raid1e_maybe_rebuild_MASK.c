
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_state; } ;
struct g_raid_tr_raid1e_object {int trso_type; struct g_raid_subdisk* trso_failed_sd; scalar_t__ trso_stopping; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct g_raid_volume*,int ) ;
 int FUNC_1 (struct g_raid_tr_object*) ;
 int FUNC_2 (struct g_raid_tr_object*) ;

__attribute__((used)) static void
FUNC_3(struct g_raid_tr_object *VAR_6,
    struct g_raid_subdisk *VAR_7)
{
 struct g_raid_volume *VAR_8;
 struct g_raid_tr_raid1e_object *VAR_9;
 int VAR_10;

 VAR_8 = VAR_6->tro_volume;
 VAR_9 = (struct g_raid_tr_raid1e_object *)VAR_6;
 if (VAR_9->trso_stopping)
  return;
 VAR_10 = FUNC_0(VAR_8, VAR_1) +
     FUNC_0(VAR_8, VAR_2);
 switch(VAR_9->trso_type) {
 case 130:
  if (VAR_8->v_state < VAR_5)
   return;
  if (VAR_10 == 0) {
   VAR_10 = FUNC_0(VAR_8, VAR_0) +
       FUNC_0(VAR_8, VAR_3) +
       FUNC_0(VAR_8, VAR_4);
   if (VAR_10 == 0)
    return;
  }
  FUNC_2(VAR_6);
  break;
 case 129:
  if (VAR_8->v_state < VAR_5 || VAR_10 == 0 ||
      VAR_9->trso_failed_sd == VAR_7)
   FUNC_1(VAR_6);
  break;
 case 128:
  break;
 }
}
