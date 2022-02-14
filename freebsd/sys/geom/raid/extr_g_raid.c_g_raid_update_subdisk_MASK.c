
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {scalar_t__ v_tr; int v_name; } ;
struct g_raid_subdisk {scalar_t__ sd_disk; int sd_pos; struct g_raid_volume* sd_volume; struct g_raid_softc* sd_softc; } ;
struct g_raid_softc {int sc_lock; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int ,int ,char*) ;
 int FUNC_1 (scalar_t__,struct g_raid_subdisk*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_subdisk *VAR_1, u_int VAR_2)
{
 struct g_raid_softc *VAR_3;
 struct g_raid_volume *VAR_4;

 VAR_3 = VAR_1->sd_softc;
 VAR_4 = VAR_1->sd_volume;
 FUNC_4(&VAR_3->sc_lock, VAR_0);

 FUNC_0(2, VAR_3, "Event %s for subdisk %s:%d-%s.",
     FUNC_3(VAR_2),
     VAR_4->v_name, VAR_1->sd_pos,
     VAR_1->sd_disk ? FUNC_2(VAR_1->sd_disk) : "[none]");
 if (VAR_4->v_tr)
  FUNC_1(VAR_4->v_tr, VAR_1, VAR_2);

 return (0);
}
