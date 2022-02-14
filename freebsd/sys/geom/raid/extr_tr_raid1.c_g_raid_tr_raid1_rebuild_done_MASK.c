
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int v_softc; } ;
struct TYPE_2__ {struct g_raid_volume* tro_volume; } ;
struct g_raid_tr_raid1_object {struct g_raid_subdisk* trso_failed_sd; scalar_t__ trso_recover_slabs; int trso_type; int trso_flags; int * trso_buffer; TYPE_1__ trso_base; } ;
struct g_raid_subdisk {int sd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct g_raid_volume*,int *) ;
 int FUNC_2 (int ,struct g_raid_volume*,struct g_raid_subdisk*,int ) ;

__attribute__((used)) static void
FUNC_3(struct g_raid_tr_raid1_object *VAR_3)
{
 struct g_raid_volume *VAR_4;
 struct g_raid_subdisk *VAR_5;

 VAR_4 = VAR_3->trso_base.tro_volume;
 VAR_5 = VAR_3->trso_failed_sd;
 FUNC_2(VAR_4->v_softc, VAR_4, VAR_5, VAR_5->sd_disk);
 FUNC_0(VAR_3->trso_buffer, VAR_0);
 VAR_3->trso_buffer = ((void*)0);
 VAR_3->trso_flags &= ~VAR_1;
 VAR_3->trso_type = VAR_2;
 VAR_3->trso_recover_slabs = 0;
 VAR_3->trso_failed_sd = ((void*)0);
 FUNC_1(VAR_4, ((void*)0));
}
