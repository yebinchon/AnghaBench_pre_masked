
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mountver_softc {scalar_t__ sc_orphaned; scalar_t__ sc_shutting_down; int sc_queue; } ;
struct g_geom {struct g_mountver_softc* softc; } ;
struct bio {TYPE_1__* bio_to; } ;
struct TYPE_2__ {struct g_geom* geom; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct g_geom*) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_1)
{
 struct g_mountver_softc *VAR_2;
 struct g_geom *VAR_3;

 VAR_3 = VAR_1->bio_to->geom;
 VAR_2 = VAR_3->softc;
 FUNC_0(VAR_1, "Request received.");






 if (VAR_2->sc_orphaned || !FUNC_1(&VAR_2->sc_queue)) {
  if (VAR_2->sc_shutting_down) {
   FUNC_0(VAR_1, "Discarding request due to shutdown.");
   FUNC_2(VAR_1, VAR_0);
   return;
  }
  FUNC_0(VAR_1, "Queueing request.");
  FUNC_3(VAR_1);
  if (!VAR_2->sc_orphaned)
   FUNC_5(VAR_3);
 } else {
  FUNC_0(VAR_1, "Sending request.");
  FUNC_4(VAR_1);
 }
}
