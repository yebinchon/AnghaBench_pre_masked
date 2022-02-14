
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {struct g_geom* sc_geom; int sc_lock; int sc_queue_mtx; int sc_worker; int sc_queue; int sc_events; int sc_disks; int sc_volumes; scalar_t__ sc_flags; struct g_raid_md_object* sc_md; } ;
struct g_raid_md_object {int dummy; } ;
struct g_geom {struct g_raid_softc* softc; int dumpconf; int access; int orphan; int start; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int ,struct g_raid_softc*,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct g_raid_softc*,int ) ;
 int FUNC_5 (struct g_geom*) ;
 struct g_geom* FUNC_6 (struct g_class*,char*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct g_raid_softc*,int *,int ,int ,char*,char const*) ;
 struct g_raid_softc* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;

struct g_raid_softc *
FUNC_14(struct g_class *VAR_9,
    const char *VAR_10, struct g_raid_md_object *VAR_11)
{
 struct g_raid_softc *VAR_12;
 struct g_geom *VAR_13;
 int VAR_14;

 FUNC_7();
 FUNC_0(1, "Creating array %s.", VAR_10);

 VAR_13 = FUNC_6(VAR_9, "%s", VAR_10);
 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);
 VAR_13->start = VAR_7;
 VAR_13->orphan = VAR_6;
 VAR_13->access = VAR_4;
 VAR_13->dumpconf = VAR_5;

 VAR_12->sc_md = VAR_11;
 VAR_12->sc_geom = VAR_13;
 VAR_12->sc_flags = 0;
 FUNC_2(&VAR_12->sc_volumes);
 FUNC_2(&VAR_12->sc_disks);
 FUNC_13(&VAR_12->sc_lock, "graid:lock");
 FUNC_11(&VAR_12->sc_queue_mtx, "graid:queue", ((void*)0), VAR_0);
 FUNC_2(&VAR_12->sc_events);
 FUNC_3(&VAR_12->sc_queue);
 VAR_13->softc = VAR_12;
 VAR_14 = FUNC_8(VAR_8, VAR_12, &VAR_12->sc_worker, 0, 0,
     "g_raid %s", VAR_10);
 if (VAR_14 != 0) {
  FUNC_0(0, "Cannot create kernel thread for %s.", VAR_10);
  FUNC_10(&VAR_12->sc_queue_mtx);
  FUNC_12(&VAR_12->sc_lock);
  FUNC_5(VAR_12->sc_geom);
  FUNC_4(VAR_12, VAR_1);
  return (((void*)0));
 }

 FUNC_1(0, VAR_12, "Array %s created.", VAR_10);
 return (VAR_12);
}
