
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {struct g_geom* ds_geom; scalar_t__ ds_ndisks; } ;
struct g_mirror_softc {int sc_idle; int sc_refcnt; struct g_geom* sc_geom; int sc_callout; int sc_rootmount; int sc_id; int sc_ndisks; int sc_name; TYPE_1__ sc_sync; int sc_worker; scalar_t__ sc_provider_open; int * sc_provider; int sc_state; int sc_done_mtx; int sc_events_mtx; int sc_events; int sc_disks; int sc_sync_delayed; int sc_inflight; int sc_regular_delayed; int sc_queue_mtx; int sc_queue; int sc_lock; scalar_t__ sc_writes; int sc_last_write; scalar_t__ sc_bump_id; int sc_sectorsize; int sc_type; } ;
struct g_mirror_metadata {int md_all; int md_name; int md_sectorsize; int md_mid; } ;
struct g_geom {void* orphan; struct g_mirror_softc* softc; int dumpconf; int access; int start; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ,struct g_mirror_softc*) ;
 int FUNC_5 (struct g_geom*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct g_mirror_softc*) ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_7 (struct g_mirror_softc*,struct g_mirror_metadata const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct g_geom* FUNC_8 (struct g_class*,char*,int ) ;
 int FUNC_9 () ;
 int VAR_12 ;
 int FUNC_10 (int ,struct g_mirror_softc*,int *,int ,int ,char*,int ) ;
 struct g_mirror_softc* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,char*) ;
 int VAR_13 ;

struct g_geom *
FUNC_15(struct g_class *VAR_14, const struct g_mirror_metadata *VAR_15,
    u_int VAR_16)
{
 struct g_mirror_softc *VAR_17;
 struct g_geom *VAR_18;
 int VAR_19, VAR_20;

 FUNC_9();
 FUNC_0(1, "Creating device %s (id=%u).", VAR_15->md_name,
     VAR_15->md_mid);


 if (VAR_15->md_all < 1)
  return (((void*)0));



 VAR_18 = FUNC_8(VAR_14, "%s", VAR_15->md_name);
 VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_2, VAR_3 | VAR_4);
 VAR_18->start = VAR_9;
 VAR_18->orphan = VAR_8;
 VAR_18->access = VAR_5;
 VAR_18->dumpconf = VAR_6;

 VAR_17->sc_type = VAR_16;
 VAR_17->sc_id = VAR_15->md_mid;
 FUNC_7(VAR_17, VAR_15);
 VAR_17->sc_sectorsize = VAR_15->md_sectorsize;
 VAR_17->sc_bump_id = 0;
 VAR_17->sc_idle = 1;
 VAR_17->sc_last_write = VAR_13;
 VAR_17->sc_writes = 0;
 VAR_17->sc_refcnt = 1;
 FUNC_14(&VAR_17->sc_lock, "gmirror:lock");
 FUNC_2(&VAR_17->sc_queue);
 FUNC_12(&VAR_17->sc_queue_mtx, "gmirror:queue", ((void*)0), VAR_1);
 FUNC_2(&VAR_17->sc_regular_delayed);
 FUNC_2(&VAR_17->sc_inflight);
 FUNC_2(&VAR_17->sc_sync_delayed);
 FUNC_1(&VAR_17->sc_disks);
 FUNC_2(&VAR_17->sc_events);
 FUNC_12(&VAR_17->sc_events_mtx, "gmirror:events", ((void*)0), VAR_1);
 FUNC_3(&VAR_17->sc_callout, 1);
 FUNC_12(&VAR_17->sc_done_mtx, "gmirror:done", ((void*)0), VAR_1);
 VAR_17->sc_state = VAR_0;
 VAR_18->softc = VAR_17;
 VAR_17->sc_geom = VAR_18;
 VAR_17->sc_provider = ((void*)0);
 VAR_17->sc_provider_open = 0;



 VAR_18 = FUNC_8(VAR_14, "%s.sync", VAR_15->md_name);
 VAR_18->softc = VAR_17;
 VAR_18->orphan = VAR_8;
 VAR_17->sc_sync.ds_geom = VAR_18;
 VAR_17->sc_sync.ds_ndisks = 0;
 VAR_19 = FUNC_10(VAR_11, VAR_17, &VAR_17->sc_worker, 0, 0,
     "g_mirror %s", VAR_15->md_name);
 if (VAR_19 != 0) {
  FUNC_0(1, "Cannot create kernel thread for %s.",
      VAR_17->sc_name);
  FUNC_5(VAR_17->sc_sync.ds_geom);
  FUNC_5(VAR_17->sc_geom);
  FUNC_6(VAR_17);
  return (((void*)0));
 }

 FUNC_0(1, "Device %s created (%u components, id=%u).",
     VAR_17->sc_name, VAR_17->sc_ndisks, VAR_17->sc_id);

 VAR_17->sc_rootmount = FUNC_13("GMIRROR");
 FUNC_0(1, "root_mount_hold %p", VAR_17->sc_rootmount);



 VAR_20 = VAR_10 * VAR_12;
 FUNC_4(&VAR_17->sc_callout, VAR_20, VAR_7, VAR_17);
 return (VAR_17->sc_geom);
}
