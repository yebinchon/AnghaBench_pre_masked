
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {scalar_t__ sc_led_blinking; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
 struct bwi_softc *VAR_1 = VAR_0;
 VAR_1->sc_led_blinking = 0;
}
