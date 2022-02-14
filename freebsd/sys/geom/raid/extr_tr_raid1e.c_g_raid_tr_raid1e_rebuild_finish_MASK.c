
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid_tr_raid1e_object {struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {TYPE_1__* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_rebuild_pos; scalar_t__ sd_disk; int sd_pos; TYPE_2__* sd_volume; } ;
struct TYPE_4__ {int v_name; } ;
struct TYPE_3__ {int v_softc; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid_subdisk*,int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct g_raid_tr_raid1e_object*) ;

__attribute__((used)) static void
FUNC_4(struct g_raid_tr_object *VAR_1)
{
 struct g_raid_tr_raid1e_object *VAR_2;
 struct g_raid_subdisk *VAR_3;

 VAR_2 = (struct g_raid_tr_raid1e_object *)VAR_1;
 VAR_3 = VAR_2->trso_failed_sd;
 FUNC_0(0, VAR_1->tro_volume->v_softc,
     "Subdisk %s:%d-%s rebuild completed.",
     VAR_3->sd_volume->v_name, VAR_3->sd_pos,
     VAR_3->sd_disk ? FUNC_2(VAR_3->sd_disk) : "[none]");
 FUNC_1(VAR_3, VAR_0);
 VAR_3->sd_rebuild_pos = 0;
 FUNC_3(VAR_2);
}
