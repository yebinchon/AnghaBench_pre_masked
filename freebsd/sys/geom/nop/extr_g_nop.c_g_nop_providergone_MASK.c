
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_geom* geom; } ;
struct g_nop_softc {int sc_lock; int sc_physpath; int sc_head_delay; } ;
struct g_geom {struct g_nop_softc* softc; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct g_nop_softc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct g_provider *VAR_1)
{
 struct g_geom *VAR_2 = VAR_1->geom;
 struct g_nop_softc *VAR_3 = VAR_2->softc;

 FUNC_0(FUNC_1(&VAR_3->sc_head_delay),
     ("delayed request list is not empty"));

 VAR_2->softc = ((void*)0);
 FUNC_2(VAR_3->sc_physpath, VAR_0);
 FUNC_4(&VAR_3->sc_lock);
 FUNC_3(VAR_3);
}
