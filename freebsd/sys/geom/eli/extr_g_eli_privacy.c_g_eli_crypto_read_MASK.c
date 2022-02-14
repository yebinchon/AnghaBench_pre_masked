
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_eli_softc {int sc_flags; TYPE_1__* sc_geom; int sc_queue_mtx; int sc_inflight; int sc_queue; } ;
struct g_consumer {int provider; } ;
struct bio {int bio_to; int bio_done; struct bio* bio_driver1; int * bio_driver2; scalar_t__ bio_pflags; } ;
typedef int boolean_t ;
struct TYPE_2__ {int consumer; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct bio*,char*) ;
 struct g_consumer* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct bio*) ;
 int VAR_1 ;
 int FUNC_5 (struct bio*,struct g_consumer*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct g_eli_softc*) ;

void
FUNC_9(struct g_eli_softc *VAR_2, struct bio *VAR_3, boolean_t VAR_4)
{
 struct g_consumer *VAR_5;
 struct bio *VAR_6;

 if (!VAR_4) {




  FUNC_6(&VAR_2->sc_queue_mtx);
  if (VAR_2->sc_flags & VAR_0) {




   FUNC_0(0, "device suspended, move onto queue");
   FUNC_4(&VAR_2->sc_queue, VAR_3);
   FUNC_7(&VAR_2->sc_queue_mtx);
   FUNC_8(VAR_2);
   return;
  }
  FUNC_3(&VAR_2->sc_inflight, 1);
  FUNC_7(&VAR_2->sc_queue_mtx);
 }
 VAR_3->bio_pflags = 0;
 VAR_3->bio_driver2 = ((void*)0);
 VAR_6 = VAR_3->bio_driver1;
 VAR_6->bio_done = VAR_1;
 VAR_5 = FUNC_2(&VAR_2->sc_geom->consumer);
 VAR_6->bio_to = VAR_5->provider;
 FUNC_1(2, VAR_6, "Sending request.");



 FUNC_5(VAR_6, VAR_5);
}
