
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {scalar_t__ sc_led_blinking; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
 struct bwn_mac *VAR_1 = VAR_0;
 struct bwn_softc *VAR_2 = VAR_1->mac_sc;

 VAR_2->sc_led_blinking = 0;
}
