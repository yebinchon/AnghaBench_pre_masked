
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int v_softc; } ;
struct g_raid_tr_raid1_object {int trso_flags; struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_rebuild_pos; scalar_t__ sd_size; scalar_t__ sd_disk; int sd_pos; TYPE_1__* sd_volume; } ;
typedef int off_t ;
struct TYPE_2__ {int v_name; } ;


 int FUNC_0 (int,int ,char*,int ,int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct g_raid_tr_raid1_object*) ;
 int FUNC_4 (struct g_raid_volume*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct g_raid_tr_object *VAR_4)
{
 struct g_raid_tr_raid1_object *VAR_5;
 struct g_raid_subdisk *VAR_6;
 struct g_raid_volume *VAR_7;
 off_t VAR_8;

 VAR_7 = VAR_4->tro_volume;
 VAR_5 = (struct g_raid_tr_raid1_object *)VAR_4;
 VAR_6 = VAR_5->trso_failed_sd;
 if (VAR_5->trso_flags & VAR_1) {
  FUNC_0(1, VAR_7->v_softc,
      "Subdisk %s:%d-%s rebuild is aborting.",
      VAR_6->sd_volume->v_name, VAR_6->sd_pos,
      VAR_6->sd_disk ? FUNC_2(VAR_6->sd_disk) : "[none]");
  VAR_5->trso_flags |= VAR_0;
 } else {
  FUNC_0(0, VAR_7->v_softc,
      "Subdisk %s:%d-%s rebuild aborted.",
      VAR_6->sd_volume->v_name, VAR_6->sd_pos,
      VAR_6->sd_disk ? FUNC_2(VAR_6->sd_disk) : "[none]");
  VAR_5->trso_flags &= ~VAR_0;
  if (VAR_5->trso_flags & VAR_2) {
   VAR_5->trso_flags &= ~VAR_2;
   VAR_8 = FUNC_1(VAR_3,
       VAR_6->sd_size - VAR_6->sd_rebuild_pos);
   FUNC_4(VAR_4->tro_volume,
       VAR_6->sd_rebuild_pos, VAR_8);
  }
  FUNC_3(VAR_5);
 }
}
