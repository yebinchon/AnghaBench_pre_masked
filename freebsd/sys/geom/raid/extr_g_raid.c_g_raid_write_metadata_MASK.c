
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int dummy; } ;
struct g_raid_subdisk {int dummy; } ;
struct g_raid_softc {scalar_t__ sc_stopping; scalar_t__ sc_md; } ;
struct g_raid_disk {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct g_raid_volume*,struct g_raid_subdisk*,struct g_raid_disk*) ;

void FUNC_1(struct g_raid_softc *VAR_1, struct g_raid_volume *VAR_2,
    struct g_raid_subdisk *VAR_3, struct g_raid_disk *VAR_4)
{

 if (VAR_1->sc_stopping == VAR_0)
  return;
 if (VAR_1->sc_md)
  FUNC_0(VAR_1->sc_md, VAR_2, VAR_3, VAR_4);
}
