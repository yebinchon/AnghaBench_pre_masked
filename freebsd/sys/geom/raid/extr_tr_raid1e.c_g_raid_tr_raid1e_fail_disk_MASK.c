
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {scalar_t__ v_disks_count; } ;
struct g_raid_subdisk {scalar_t__ sd_state; struct g_raid_volume* sd_volume; } ;
struct g_raid_softc {int dummy; } ;
struct g_raid_disk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct g_raid_softc*,struct g_raid_subdisk*,struct g_raid_disk*) ;
 scalar_t__ FUNC_1 (struct g_raid_volume*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct g_raid_softc *VAR_4, struct g_raid_subdisk *VAR_5,
    struct g_raid_disk *VAR_6)
{
 struct g_raid_volume *VAR_7;

 VAR_7 = VAR_5->sd_volume;
 if ((FUNC_1(VAR_7, VAR_0) +
      FUNC_1(VAR_7, VAR_1) +
      FUNC_1(VAR_7, VAR_2) +
      FUNC_1(VAR_7, VAR_3) <
      VAR_7->v_disks_count) &&
     (VAR_5->sd_state >= VAR_3))
  return;
 FUNC_0(VAR_4, VAR_5, VAR_6);
}
