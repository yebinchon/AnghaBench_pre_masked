
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_delay_softc {int sc_geom; int sc_in_flight; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct bio *VAR_1)
{
 struct g_delay_softc *VAR_2 = VAR_0;

 VAR_2->sc_in_flight--;

 FUNC_0(VAR_2->sc_geom);
}
