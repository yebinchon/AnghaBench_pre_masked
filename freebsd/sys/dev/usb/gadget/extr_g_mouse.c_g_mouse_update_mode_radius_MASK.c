
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mouse_softc {int sc_radius; int sc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct g_mouse_softc *VAR_2)
{
 VAR_2->sc_mode = VAR_1;
 VAR_2->sc_radius = VAR_0;

 if (VAR_2->sc_radius < 0)
  VAR_2->sc_radius = 0;
 else if (VAR_2->sc_radius > 1023)
  VAR_2->sc_radius = 1023;
}
