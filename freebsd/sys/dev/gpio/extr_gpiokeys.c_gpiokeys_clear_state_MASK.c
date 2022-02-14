
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpiokeys_softc {scalar_t__ sc_accents; int sc_state; int sc_flags; } ;
struct TYPE_3__ {struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(keyboard_t *VAR_2)
{
 struct gpiokeys_softc *VAR_3 = VAR_2->kb_data;

 VAR_3->sc_flags &= ~(VAR_0);
 VAR_3->sc_state &= VAR_1;
 VAR_3->sc_accents = 0;
}
