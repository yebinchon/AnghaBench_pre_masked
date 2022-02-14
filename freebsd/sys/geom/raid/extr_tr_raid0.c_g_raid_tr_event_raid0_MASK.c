
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {int v_name; struct g_raid_softc* v_softc; } ;
struct g_raid_tr_raid0_object {int trso_stopped; int trso_starting; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;
struct g_raid_subdisk {int sd_state; int sd_pos; } ;
struct g_raid_softc {int dummy; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_raid_subdisk*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct g_raid_volume*) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_volume*,struct g_raid_subdisk*,int *) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_tr_object *VAR_3,
    struct g_raid_subdisk *VAR_4, u_int VAR_5)
{
 struct g_raid_tr_raid0_object *VAR_6;
 struct g_raid_softc *VAR_7;
 struct g_raid_volume *VAR_8;
 int VAR_9;

 VAR_6 = (struct g_raid_tr_raid0_object *)VAR_3;
 VAR_8 = VAR_3->tro_volume;
 VAR_7 = VAR_8->v_softc;

 VAR_9 = VAR_4->sd_state;
 if (VAR_9 != VAR_2 &&
     VAR_9 != VAR_1 &&
     VAR_9 != VAR_0) {
  FUNC_0(1, VAR_7,
      "Promote subdisk %s:%d from %s to ACTIVE.",
      VAR_8->v_name, VAR_4->sd_pos,
      FUNC_2(VAR_4->sd_state));
  FUNC_1(VAR_4, VAR_0);
 }
 if (VAR_9 != VAR_4->sd_state &&
     !VAR_6->trso_starting && !VAR_6->trso_stopped)
  FUNC_4(VAR_7, VAR_8, VAR_4, ((void*)0));
 FUNC_3(VAR_8);
 return (0);
}
