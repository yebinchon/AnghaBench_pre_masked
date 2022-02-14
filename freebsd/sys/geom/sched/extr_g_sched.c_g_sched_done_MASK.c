
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_sched_softc {int sc_pending; int sc_data; TYPE_1__* sc_gsched; } ;
struct g_geom {struct g_sched_softc* softc; } ;
struct bio {int bio_caller1; struct g_geom* bio_caller2; } ;
struct TYPE_2__ {int (* gs_done ) (int ,struct bio*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (struct g_geom*) ;
 int FUNC_3 (struct g_geom*) ;
 int FUNC_4 (struct g_geom*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int ,struct bio*) ;
 int FUNC_8 (struct g_geom*) ;

__attribute__((used)) static void
FUNC_9(struct bio *VAR_1)
{
 struct g_geom *VAR_2 = VAR_1->bio_caller2;
 struct g_sched_softc *VAR_3 = VAR_2->softc;

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_1->bio_caller1, ("null bio_caller1 in g_sched_done"));

 FUNC_3(VAR_2);

 FUNC_5(VAR_1);
 VAR_3->sc_gsched->gs_done(VAR_3->sc_data, VAR_1);
 if (!--VAR_3->sc_pending)
  FUNC_8(VAR_2);

 FUNC_2(VAR_2);
 FUNC_4(VAR_2);

 FUNC_6(VAR_1);
}
