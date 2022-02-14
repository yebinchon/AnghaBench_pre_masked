
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct g_raid_volume {int v_disks_count; struct g_raid_subdisk* v_subdisks; } ;
struct g_raid_subdisk {scalar_t__ sd_state; TYPE_1__* sd_disk; } ;
struct g_raid_softc {int dummy; } ;
struct g_provider {struct g_raid_volume* private; } ;
struct bio {struct g_provider* bio_to; } ;
struct TYPE_2__ {scalar_t__ d_candelete; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*,char*,int*,int) ;

__attribute__((used)) static void
FUNC_1(struct g_raid_softc *VAR_1, struct bio *VAR_2)
{
 struct g_provider *VAR_3;
 struct g_raid_volume *VAR_4;
 struct g_raid_subdisk *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = VAR_2->bio_to;
 VAR_4 = VAR_3->private;
 for (VAR_6 = 0; VAR_6 < VAR_4->v_disks_count; VAR_6++) {
  VAR_5 = &VAR_4->v_subdisks[VAR_6];
  if (VAR_5->sd_state == VAR_0)
   continue;
  if (VAR_5->sd_disk->d_candelete)
   break;
 }
 VAR_7 = VAR_6 < VAR_4->v_disks_count;
 FUNC_0(VAR_2, "GEOM::candelete", &VAR_7, sizeof(VAR_7));
}
