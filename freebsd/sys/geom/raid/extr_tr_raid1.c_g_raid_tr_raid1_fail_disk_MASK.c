
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_subdisk {int sd_volume; } ;
struct g_raid_softc {int dummy; } ;
struct g_raid_disk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_raid_softc*,struct g_raid_subdisk*,struct g_raid_disk*) ;
 struct g_raid_subdisk* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct g_raid_softc *VAR_1, struct g_raid_subdisk *VAR_2,
    struct g_raid_disk *VAR_3)
{
 if (FUNC_2(VAR_2->sd_volume, VAR_0) == 1 &&
     FUNC_1(VAR_2->sd_volume, VAR_0) == VAR_2)
  return;
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
