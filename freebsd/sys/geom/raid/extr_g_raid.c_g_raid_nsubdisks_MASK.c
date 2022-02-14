
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_raid_volume {size_t v_disks_count; struct g_raid_subdisk* v_subdisks; struct g_raid_softc* v_softc; } ;
struct g_raid_subdisk {int sd_state; } ;
struct g_raid_softc {int sc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

u_int
FUNC_1(struct g_raid_volume *VAR_2, int VAR_3)
{
 struct g_raid_subdisk *VAR_4;
 struct g_raid_softc *VAR_5;
 u_int VAR_6, VAR_7 ;

 VAR_5 = VAR_2->v_softc;
 FUNC_0(&VAR_5->sc_lock, VAR_1);

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_2->v_disks_count; VAR_6++) {
  VAR_4 = &VAR_2->v_subdisks[VAR_6];
  if ((VAR_3 == -1 &&
       VAR_4->sd_state != VAR_0) ||
      VAR_4->sd_state == VAR_3)
   VAR_7++;
 }
 return (VAR_7);
}
