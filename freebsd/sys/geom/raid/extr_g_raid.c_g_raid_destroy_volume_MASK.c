
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_stopping; scalar_t__ v_state; scalar_t__ v_provider_open; int v_name; struct g_raid_volume* v_subdisks; struct g_raid_disk* sd_disk; scalar_t__ v_rootmount; int * v_tr; int * v_provider; struct g_raid_softc* v_softc; } ;
struct g_raid_softc {scalar_t__ sc_stopping; scalar_t__ sc_md; int sc_volumes; } ;
struct g_raid_disk {int d_subdisks; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct g_raid_softc*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,struct g_raid_volume*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct g_raid_volume*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,struct g_raid_volume*,int ) ;
 int FUNC_6 (struct g_raid_volume*,int ) ;
 int FUNC_7 (struct g_raid_softc*,struct g_raid_volume*) ;
 scalar_t__ FUNC_8 (struct g_raid_softc*,struct g_raid_volume*) ;
 int FUNC_9 (struct g_raid_softc*,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_14(struct g_raid_volume *VAR_9)
{
 struct g_raid_softc *VAR_10;
 struct g_raid_disk *VAR_11;
 int VAR_12;

 VAR_10 = VAR_9->v_softc;
 FUNC_0(2, VAR_10, "Destroying volume %s.", VAR_9->v_name);
 VAR_9->v_stopping = 1;
 if (VAR_9->v_state != VAR_4) {
  if (VAR_9->v_tr) {
   FUNC_3(VAR_9->v_tr);
   return (VAR_0);
  } else
   VAR_9->v_state = VAR_4;
 }
 if (FUNC_8(VAR_10, VAR_9) != 0)
  return (VAR_0);
 if (VAR_9->v_provider != ((void*)0))
  return (VAR_0);
 if (VAR_9->v_provider_open != 0)
  return (VAR_0);
 if (VAR_9->v_tr) {
  FUNC_2(VAR_9->v_tr);
  FUNC_12((kobj_t)VAR_9->v_tr, VAR_5);
  VAR_9->v_tr = ((void*)0);
 }
 if (VAR_9->v_rootmount)
  FUNC_13(VAR_9->v_rootmount);
 FUNC_10();
 FUNC_4(VAR_9, VAR_7);
 FUNC_11();
 FUNC_5(&VAR_10->sc_volumes, VAR_9, VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  FUNC_7(VAR_10, &VAR_9->v_subdisks[VAR_12]);
  VAR_11 = VAR_9->v_subdisks[VAR_12].sd_disk;
  if (VAR_11 == ((void*)0))
   continue;
  FUNC_5(&VAR_11->d_subdisks, &VAR_9->v_subdisks[VAR_12], VAR_6);
 }
 FUNC_0(2, VAR_10, "Volume %s destroyed.", VAR_9->v_name);
 if (VAR_10->sc_md)
  FUNC_1(VAR_10->sc_md, VAR_9);
 FUNC_7(VAR_10, VAR_9);
 FUNC_6(VAR_9, VAR_5);
 if (VAR_10->sc_stopping == VAR_1) {

  FUNC_9(VAR_10, VAR_3, 0);
 }
 return (0);
}
