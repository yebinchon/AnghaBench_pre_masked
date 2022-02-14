
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct g_eli_worker {int w_number; scalar_t__ w_active; struct g_eli_softc* w_softc; } ;
struct g_eli_softc {int sc_flags; scalar_t__ sc_inflight; int sc_queue_mtx; int sc_workers; scalar_t__ sc_cpubind; } ;
struct bio {scalar_t__ bio_pflags; scalar_t__ bio_cmd; } ;
struct TYPE_8__ {TYPE_1__* td_proc; } ;
struct TYPE_7__ {scalar_t__ p_comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_eli_worker*,int ) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (scalar_t__*,int) ;
 TYPE_2__* VAR_11 ;
 int FUNC_5 (struct g_eli_worker*,int ) ;
 int FUNC_6 (struct g_eli_softc*,struct bio*) ;
 int FUNC_7 (struct g_eli_worker*,struct bio*) ;
 int FUNC_8 (struct g_eli_softc*) ;
 int FUNC_9 (struct g_eli_softc*,struct bio*,int) ;
 int FUNC_10 (struct g_eli_worker*,struct bio*) ;
 int FUNC_11 (struct g_eli_worker*) ;
 int FUNC_12 (struct g_eli_worker*) ;
 struct bio* FUNC_13 (struct g_eli_softc*) ;
 int VAR_12 ;
 int FUNC_14 (int ) ;
 int VAR_13 ;
 int FUNC_15 (struct g_eli_softc*,int *,int ,char*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (struct g_eli_worker*,int ,char*,int) ;
 int VAR_15 ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void
FUNC_24(void *VAR_16)
{
 struct g_eli_softc *VAR_17;
 struct g_eli_worker *VAR_18;
 struct bio *VAR_19;
 int VAR_20;

 VAR_18 = VAR_16;
 VAR_17 = VAR_18->w_softc;
 FUNC_20(VAR_11);
 FUNC_19(VAR_11, VAR_9);
 if (VAR_17->sc_cpubind)
  FUNC_18(VAR_11, VAR_18->w_number % VAR_13);
 FUNC_21(VAR_11);

 FUNC_0(1, "Thread %s started.", VAR_11->td_proc->p_comm);

 for (;;) {
  FUNC_16(&VAR_17->sc_queue_mtx);
again:
  VAR_19 = FUNC_13(VAR_17);
  if (VAR_19 == ((void*)0)) {
   if (VAR_17->sc_flags & VAR_3) {
    FUNC_8(VAR_17);
    FUNC_2(VAR_18, VAR_15);
    FUNC_11(VAR_18);
    FUNC_5(VAR_18, VAR_6);
    FUNC_0(1, "Thread %s exiting.",
        VAR_11->td_proc->p_comm);
    FUNC_23(&VAR_17->sc_workers);
    FUNC_17(&VAR_17->sc_queue_mtx);
    FUNC_14(0);
   }
   while (VAR_17->sc_flags & VAR_4) {
    if (VAR_17->sc_inflight > 0) {
     FUNC_0(0, "inflight=%d",
         VAR_17->sc_inflight);




     FUNC_15(VAR_17, &VAR_17->sc_queue_mtx, VAR_8,
         "geli:inf", VAR_12 / 5);
     goto again;
    }




    if (VAR_18->w_active) {
     FUNC_11(VAR_18);
     VAR_18->w_active = VAR_1;
    }
    FUNC_23(&VAR_17->sc_workers);
    FUNC_15(VAR_17, &VAR_17->sc_queue_mtx, VAR_8,
        "geli:suspend", 0);
    if (!VAR_18->w_active &&
        !(VAR_17->sc_flags & VAR_4)) {
     VAR_20 = FUNC_12(VAR_18);
     FUNC_1(VAR_20 == 0,
         ("g_eli_newsession() failed on resume (error=%d)",
         VAR_20));
     VAR_18->w_active = VAR_10;
    }
    goto again;
   }
   FUNC_15(VAR_17, &VAR_17->sc_queue_mtx, VAR_7, "geli:w", 0);
   continue;
  }
  if (VAR_19->bio_pflags == VAR_5)
   FUNC_4(&VAR_17->sc_inflight, 1);
  FUNC_17(&VAR_17->sc_queue_mtx);
  if (VAR_19->bio_pflags == VAR_5) {
   VAR_19->bio_pflags = 0;
   if (VAR_17->sc_flags & VAR_2) {
    if (VAR_19->bio_cmd == VAR_0)
     FUNC_6(VAR_17, VAR_19);
    else
     FUNC_7(VAR_18, VAR_19);
   } else {
    if (VAR_19->bio_cmd == VAR_0)
     FUNC_9(VAR_17, VAR_19, 1);
    else
     FUNC_10(VAR_18, VAR_19);
   }
  } else {
   if (VAR_17->sc_flags & VAR_2)
    FUNC_7(VAR_18, VAR_19);
   else
    FUNC_10(VAR_18, VAR_19);
  }
 }
}
