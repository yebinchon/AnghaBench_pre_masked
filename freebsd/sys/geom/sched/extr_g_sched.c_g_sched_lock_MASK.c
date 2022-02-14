
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_sched_softc {int sc_mtx; } ;
struct g_geom {struct g_sched_softc* softc; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct g_geom *VAR_0)
{
 struct g_sched_softc *VAR_1 = VAR_0->softc;

 FUNC_0(&VAR_1->sc_mtx);
}
