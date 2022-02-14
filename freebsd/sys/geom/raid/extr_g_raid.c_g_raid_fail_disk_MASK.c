
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_subdisk {struct g_raid_disk* sd_disk; } ;
struct g_raid_softc {scalar_t__ sc_md; } ;
struct g_raid_disk {scalar_t__ d_state; } ;


 int FUNC_0 (int ,struct g_raid_softc*,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,struct g_raid_subdisk*,struct g_raid_disk*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct g_raid_softc *VAR_1,
    struct g_raid_subdisk *VAR_2, struct g_raid_disk *VAR_3)
{

 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_2->sd_disk;
 if (VAR_3 == ((void*)0)) {
  FUNC_0(0, VAR_1, "Warning! Fail request to an absent disk!");
  return;
 }
 if (VAR_3->d_state != VAR_0) {
  FUNC_0(0, VAR_1, "Warning! Fail request to a disk in a "
      "wrong state (%s)!", FUNC_2(VAR_3->d_state));
  return;
 }
 if (VAR_1->sc_md)
  FUNC_1(VAR_1->sc_md, VAR_2, VAR_3);
}
