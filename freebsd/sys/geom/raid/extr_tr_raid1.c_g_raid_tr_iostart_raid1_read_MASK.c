
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_tr_object {TYPE_1__* tro_volume; } ;
struct g_raid_subdisk {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int v_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct bio* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct g_raid_subdisk*,struct bio*) ;
 struct g_raid_subdisk* FUNC_4 (TYPE_1__*,struct bio*,int ) ;

__attribute__((used)) static void
FUNC_5(struct g_raid_tr_object *VAR_1, struct bio *VAR_2)
{
 struct g_raid_subdisk *VAR_3;
 struct bio *VAR_4;

 VAR_3 = FUNC_4(VAR_1->tro_volume, VAR_2, 0);
 FUNC_0(VAR_3 != ((void*)0), ("No active disks in volume %s.",
  VAR_1->tro_volume->v_name));

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_2, VAR_0);
  return;
 }

 FUNC_3(VAR_3, VAR_4);
}
