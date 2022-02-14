
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {struct g_geom* ds_geom; } ;
struct g_raid3_softc {size_t sc_ndisks; int sc_idle; size_t d_no; struct g_geom* sc_geom; int sc_callout; int sc_rootmount; int sc_id; int sc_name; struct g_raid3_softc* sc_disks; int sc_lock; int sc_queue_mtx; int sc_events_mtx; TYPE_2__ sc_sync; TYPE_1__* sc_zones; int sc_worker; int * sc_provider; int sc_state; int sc_events; int sc_sync_delayed; int sc_inflight; int sc_regular_delayed; int sc_queue; int d_state; struct g_raid3_softc* d_softc; scalar_t__ sc_writes; int sc_last_write; scalar_t__ sc_bump_id; int sc_flags; scalar_t__ sc_round_robin; int sc_sectorsize; int sc_mediasize; } ;
struct g_raid3_metadata {int md_all; int md_name; int md_mflags; int md_sectorsize; int md_mediasize; int md_id; } ;
struct g_raid3_disk {int dummy; } ;
struct g_geom {void* orphan; struct g_raid3_softc* softc; int dumpconf; int access; int start; } ;
struct g_class {int dummy; } ;
struct TYPE_3__ {void* sz_zone; scalar_t__ sz_failed; scalar_t__ sz_requested; int sz_max; scalar_t__ sz_inuse; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ,struct g_raid3_softc*) ;
 int FUNC_6 (struct g_raid3_softc*,int ) ;
 int FUNC_7 (struct g_geom*) ;
 struct g_geom* FUNC_8 (struct g_class*,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 () ;
 int VAR_23 ;
 int FUNC_10 (int ,struct g_raid3_softc*,int *,int ,int ,char*,int ) ;
 void* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int VAR_24 ;
 void* FUNC_17 (char*,int,int ,int ,int *,int *,int ,int ) ;
 int FUNC_18 (void*) ;

__attribute__((used)) static struct g_geom *
FUNC_19(struct g_class *VAR_25, const struct g_raid3_metadata *VAR_26)
{
 struct g_raid3_softc *VAR_27;
 struct g_geom *VAR_28;
 int VAR_29, VAR_30;
 u_int VAR_31;

 FUNC_9();
 FUNC_0(1, "Creating device %s (id=%u).", VAR_26->md_name, VAR_26->md_id);


 if (VAR_26->md_all < 1)
  return (((void*)0));



 VAR_28 = FUNC_8(VAR_25, "%s", VAR_26->md_name);
 VAR_27 = FUNC_11(sizeof(*VAR_27), VAR_6, VAR_7 | VAR_8);
 VAR_27->sc_disks = FUNC_11(sizeof(struct g_raid3_disk) * VAR_26->md_all, VAR_6,
     VAR_7 | VAR_8);
 VAR_28->start = VAR_17;
 VAR_28->orphan = VAR_16;
 VAR_28->access = VAR_10;
 VAR_28->dumpconf = VAR_11;

 VAR_27->sc_id = VAR_26->md_id;
 VAR_27->sc_mediasize = VAR_26->md_mediasize;
 VAR_27->sc_sectorsize = VAR_26->md_sectorsize;
 VAR_27->sc_ndisks = VAR_26->md_all;
 VAR_27->sc_round_robin = 0;
 VAR_27->sc_flags = VAR_26->md_mflags;
 VAR_27->sc_bump_id = 0;
 VAR_27->sc_idle = 1;
 VAR_27->sc_last_write = VAR_24;
 VAR_27->sc_writes = 0;
 for (VAR_31 = 0; VAR_31 < VAR_27->sc_ndisks; VAR_31++) {
  VAR_27->sc_disks[VAR_31].d_softc = VAR_27;
  VAR_27->sc_disks[VAR_31].d_no = VAR_31;
  VAR_27->sc_disks[VAR_31].d_state = VAR_1;
 }
 FUNC_16(&VAR_27->sc_lock, "graid3:lock");
 FUNC_3(&VAR_27->sc_queue);
 FUNC_13(&VAR_27->sc_queue_mtx, "graid3:queue", ((void*)0), VAR_5);
 FUNC_3(&VAR_27->sc_regular_delayed);
 FUNC_3(&VAR_27->sc_inflight);
 FUNC_3(&VAR_27->sc_sync_delayed);
 FUNC_1(&VAR_27->sc_events);
 FUNC_13(&VAR_27->sc_events_mtx, "graid3:events", ((void*)0), VAR_5);
 FUNC_4(&VAR_27->sc_callout, 1);
 VAR_27->sc_state = VAR_0;
 VAR_28->softc = VAR_27;
 VAR_27->sc_geom = VAR_28;
 VAR_27->sc_provider = ((void*)0);



 VAR_28 = FUNC_8(VAR_25, "%s.sync", VAR_26->md_name);
 VAR_28->softc = VAR_27;
 VAR_28->orphan = VAR_16;
 VAR_27->sc_sync.ds_geom = VAR_28;

 if (!VAR_21) {
  VAR_27->sc_zones[VAR_4].sz_zone = FUNC_17("gr3:64k",
      65536, VAR_19, VAR_20, ((void*)0), ((void*)0),
      VAR_9, 0);
  VAR_27->sc_zones[VAR_4].sz_inuse = 0;
  VAR_27->sc_zones[VAR_4].sz_max = VAR_15;
  VAR_27->sc_zones[VAR_4].sz_requested =
      VAR_27->sc_zones[VAR_4].sz_failed = 0;
  VAR_27->sc_zones[VAR_2].sz_zone = FUNC_17("gr3:16k",
      16384, VAR_19, VAR_20, ((void*)0), ((void*)0),
      VAR_9, 0);
  VAR_27->sc_zones[VAR_2].sz_inuse = 0;
  VAR_27->sc_zones[VAR_2].sz_max = VAR_13;
  VAR_27->sc_zones[VAR_2].sz_requested =
      VAR_27->sc_zones[VAR_2].sz_failed = 0;
  VAR_27->sc_zones[VAR_3].sz_zone = FUNC_17("gr3:4k",
      4096, VAR_19, VAR_20, ((void*)0), ((void*)0),
      VAR_9, 0);
  VAR_27->sc_zones[VAR_3].sz_inuse = 0;
  VAR_27->sc_zones[VAR_3].sz_max = VAR_14;
  VAR_27->sc_zones[VAR_3].sz_requested =
      VAR_27->sc_zones[VAR_3].sz_failed = 0;
 }

 VAR_29 = FUNC_10(VAR_22, VAR_27, &VAR_27->sc_worker, 0, 0,
     "g_raid3 %s", VAR_26->md_name);
 if (VAR_29 != 0) {
  FUNC_0(1, "Cannot create kernel thread for %s.",
      VAR_27->sc_name);
  if (!VAR_21) {
   FUNC_18(VAR_27->sc_zones[VAR_4].sz_zone);
   FUNC_18(VAR_27->sc_zones[VAR_2].sz_zone);
   FUNC_18(VAR_27->sc_zones[VAR_3].sz_zone);
  }
  FUNC_7(VAR_27->sc_sync.ds_geom);
  FUNC_12(&VAR_27->sc_events_mtx);
  FUNC_12(&VAR_27->sc_queue_mtx);
  FUNC_15(&VAR_27->sc_lock);
  FUNC_7(VAR_27->sc_geom);
  FUNC_6(VAR_27->sc_disks, VAR_6);
  FUNC_6(VAR_27, VAR_6);
  return (((void*)0));
 }

 FUNC_0(1, "Device %s created (%u components, id=%u).",
     VAR_27->sc_name, VAR_27->sc_ndisks, VAR_27->sc_id);

 VAR_27->sc_rootmount = FUNC_14("GRAID3");
 FUNC_0(1, "root_mount_hold %p", VAR_27->sc_rootmount);




 VAR_30 = FUNC_2(&VAR_18);
 FUNC_5(&VAR_27->sc_callout, VAR_30 * VAR_23, VAR_12, VAR_27);
 return (VAR_27->sc_geom);
}
