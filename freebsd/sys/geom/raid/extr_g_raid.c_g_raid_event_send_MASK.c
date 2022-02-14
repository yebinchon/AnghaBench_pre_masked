
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {struct g_raid_softc* v_softc; } ;
struct g_raid_subdisk {struct g_raid_softc* sd_softc; } ;
struct g_raid_softc {int sc_lock; int sc_queue_mtx; int sc_events; } ;
struct g_raid_event {int e_event; int e_flags; int e_error; void* e_tgt; } ;
struct g_raid_disk {struct g_raid_softc* d_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct g_raid_softc*,char*,struct g_raid_event*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct g_raid_event*,int *,int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,struct g_raid_event*,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct g_raid_event*) ;
 int VAR_13 ;
 struct g_raid_event* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct g_raid_softc*) ;

int
FUNC_12(void *VAR_14, int VAR_15, int VAR_16)
{
 struct g_raid_softc *VAR_17;
 struct g_raid_event *VAR_18;
 int VAR_19;

 if ((VAR_16 & VAR_4) != 0) {
  VAR_17 = ((struct g_raid_volume *)VAR_14)->v_softc;
 } else if ((VAR_16 & VAR_1) != 0) {
  VAR_17 = ((struct g_raid_disk *)VAR_14)->d_softc;
 } else if ((VAR_16 & VAR_3) != 0) {
  VAR_17 = ((struct g_raid_subdisk *)VAR_14)->sd_softc;
 } else {
  VAR_17 = VAR_14;
 }
 VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_7,
     FUNC_9(&VAR_17->sc_lock) ? VAR_8 : VAR_6);
 if (VAR_18 == ((void*)0))
  return (VAR_0);
 VAR_18->e_tgt = VAR_14;
 VAR_18->e_event = VAR_15;
 VAR_18->e_flags = VAR_16;
 VAR_18->e_error = 0;
 FUNC_0(4, VAR_17, "Sending event %p. Waking up %p.", VAR_18, VAR_17);
 FUNC_5(&VAR_17->sc_queue_mtx);
 FUNC_2(&VAR_17->sc_events, VAR_18, VAR_12);
 FUNC_6(&VAR_17->sc_queue_mtx);
 FUNC_11(VAR_17);

 if ((VAR_16 & VAR_5) == 0)
  return (0);

 FUNC_7(&VAR_17->sc_lock, VAR_11);
 FUNC_0(4, VAR_17, "Sleeping on %p.", VAR_18);
 FUNC_10(&VAR_17->sc_lock);
 while ((VAR_18->e_flags & VAR_2) == 0) {
  FUNC_5(&VAR_17->sc_queue_mtx);
  FUNC_1(VAR_19, VAR_18, &VAR_17->sc_queue_mtx, VAR_10 | VAR_9, "m:event",
      VAR_13 * 5);
 }
 VAR_19 = VAR_18->e_error;
 FUNC_3(VAR_18);
 FUNC_8(&VAR_17->sc_lock);
 return (VAR_19);
}
