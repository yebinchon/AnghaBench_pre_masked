
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int v_softc; } ;
struct g_raid_tr_raid1e_object {int trso_flags; int trso_lock_len; int trso_lock_pos; struct g_raid_subdisk* trso_failed_sd; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {scalar_t__ sd_disk; int sd_pos; TYPE_1__* sd_volume; } ;
struct TYPE_2__ {int v_name; } ;


 int FUNC_0 (int,int ,char*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct g_raid_tr_raid1e_object*) ;
 int FUNC_3 (struct g_raid_volume*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_raid_tr_object *VAR_3)
{
 struct g_raid_tr_raid1e_object *VAR_4;
 struct g_raid_subdisk *VAR_5;
 struct g_raid_volume *VAR_6;

 VAR_6 = VAR_3->tro_volume;
 VAR_4 = (struct g_raid_tr_raid1e_object *)VAR_3;
 VAR_5 = VAR_4->trso_failed_sd;
 if (VAR_4->trso_flags & VAR_1) {
  FUNC_0(1, VAR_6->v_softc,
      "Subdisk %s:%d-%s rebuild is aborting.",
      VAR_5->sd_volume->v_name, VAR_5->sd_pos,
      VAR_5->sd_disk ? FUNC_1(VAR_5->sd_disk) : "[none]");
  VAR_4->trso_flags |= VAR_0;
 } else {
  FUNC_0(0, VAR_6->v_softc,
      "Subdisk %s:%d-%s rebuild aborted.",
      VAR_5->sd_volume->v_name, VAR_5->sd_pos,
      VAR_5->sd_disk ? FUNC_1(VAR_5->sd_disk) : "[none]");
  VAR_4->trso_flags &= ~VAR_0;
  if (VAR_4->trso_flags & VAR_2) {
   VAR_4->trso_flags &= ~VAR_2;
   FUNC_3(VAR_3->tro_volume,
       VAR_4->trso_lock_pos, VAR_4->trso_lock_len);
  }
  FUNC_2(VAR_4);
 }
}
