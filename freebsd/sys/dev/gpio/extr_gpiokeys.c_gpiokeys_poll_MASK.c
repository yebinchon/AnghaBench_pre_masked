
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpiokeys_softc {int sc_flags; } ;
struct TYPE_3__ {struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (struct gpiokeys_softc*) ;
 int FUNC_1 (struct gpiokeys_softc*) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_1, int VAR_2)
{
 struct gpiokeys_softc *VAR_3 = VAR_1->kb_data;

 FUNC_0(VAR_3);
 if (VAR_2)
  VAR_3->sc_flags |= VAR_0;
 else
  VAR_3->sc_flags &= ~VAR_0;
 FUNC_1(VAR_3);

 return (0);
}
