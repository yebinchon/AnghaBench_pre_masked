
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_delay_softc {int sc_wait; int sc_geom; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct g_delay_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct g_delay_softc *VAR_1 = VAR_0;

 FUNC_2(VAR_1->sc_geom);
 FUNC_1(VAR_1->sc_geom);
 FUNC_3(VAR_1->sc_geom);
 FUNC_0(&VAR_1->sc_wait, 1, FUNC_4, VAR_1);
}
