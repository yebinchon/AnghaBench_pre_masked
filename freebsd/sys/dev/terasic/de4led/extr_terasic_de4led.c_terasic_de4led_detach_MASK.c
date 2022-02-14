
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_de4led_softc {int ** tdl_leds; } ;


 int FUNC_0 (struct terasic_de4led_softc*) ;
 int FUNC_1 (struct terasic_de4led_softc*) ;
 int FUNC_2 (struct terasic_de4led_softc*) ;
 int FUNC_3 (struct terasic_de4led_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct terasic_de4led_softc*) ;

void
FUNC_6(struct terasic_de4led_softc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  FUNC_4(VAR_0->tdl_leds[VAR_1]);
  VAR_0->tdl_leds[VAR_1] = ((void*)0);
 }
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
