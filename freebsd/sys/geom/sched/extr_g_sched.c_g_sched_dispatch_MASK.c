
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_sched_softc {int sc_flags; int sc_data; int sc_mtx; struct g_gsched* sc_gsched; } ;
struct g_gsched {struct bio* (* gs_next ) (int ,int ) ;} ;
struct g_geom {int consumer; struct g_sched_softc* softc; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (int *) ;
 struct bio* FUNC_4 (int ,int ) ;

void
FUNC_5(struct g_geom *VAR_1)
{
 struct g_sched_softc *VAR_2 = VAR_1->softc;
 struct g_gsched *VAR_3 = VAR_2->sc_gsched;
 struct bio *VAR_4;

 FUNC_0(FUNC_3(&VAR_2->sc_mtx), ("sc_mtx not owned during dispatch"));

 if ((VAR_2->sc_flags & VAR_0))
  return;

 while ((VAR_4 = VAR_3->gs_next(VAR_2->sc_data, 0)) != ((void*)0))
  FUNC_2(VAR_4, FUNC_1(&VAR_1->consumer));
}
