
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_sched_softc {scalar_t__ sc_pending; int sc_mtx; } ;
struct g_geom {struct g_sched_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct g_geom*,int *,int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct g_geom *VAR_3)
{
 struct g_sched_softc *VAR_4 = VAR_3->softc;
 int VAR_5 = VAR_2 + VAR_1;

 FUNC_0();

 while (VAR_4->sc_pending && VAR_5 - VAR_2 >= 0)
  FUNC_1(VAR_3, &VAR_4->sc_mtx, 0, "sched_wait_pending", VAR_1 / 4);

 return (VAR_4->sc_pending ? VAR_0 : 0);
}
