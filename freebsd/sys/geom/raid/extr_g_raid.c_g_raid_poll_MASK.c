
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_softc {scalar_t__ sc_geom; int sc_lock; int sc_queue_mtx; int sc_queue; int sc_events; } ;
struct g_raid_event {int dummy; } ;
struct bio {TYPE_1__* bio_from; } ;
struct TYPE_2__ {scalar_t__ geom; } ;


 struct g_raid_event* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct g_raid_event*,int ) ;
 struct bio* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct g_raid_softc*,struct g_raid_event*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct g_raid_softc *VAR_1)
{
 struct g_raid_event *VAR_2;
 struct bio *VAR_3;

 FUNC_8(&VAR_1->sc_lock);
 FUNC_6(&VAR_1->sc_queue_mtx);




 VAR_2 = FUNC_0(&VAR_1->sc_events);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(&VAR_1->sc_events, VAR_2, VAR_0);
  FUNC_7(&VAR_1->sc_queue_mtx);
  FUNC_4(VAR_1, VAR_2);
  goto out;
 }
 VAR_3 = FUNC_2(&VAR_1->sc_queue);
 if (VAR_3 != ((void*)0)) {
  FUNC_7(&VAR_1->sc_queue_mtx);
  if (VAR_3->bio_from == ((void*)0) ||
      VAR_3->bio_from->geom != VAR_1->sc_geom)
   FUNC_5(VAR_3);
  else
   FUNC_3(VAR_3);
 }
out:
 FUNC_9(&VAR_1->sc_lock);
}
