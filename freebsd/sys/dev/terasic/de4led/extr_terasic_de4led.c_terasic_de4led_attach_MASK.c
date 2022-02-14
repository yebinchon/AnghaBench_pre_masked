
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_de4led_softc {int tdl_unit; int tdl_dev; void** tdl_leds; } ;


 int FUNC_0 (struct terasic_de4led_softc*) ;
 int FUNC_1 (struct terasic_de4led_softc*) ;
 int FUNC_2 (struct terasic_de4led_softc*) ;
 int FUNC_3 (struct terasic_de4led_softc*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (int ,struct terasic_de4led_softc*,char*) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int ,int ,char*,char const**) ;
 int FUNC_8 (struct terasic_de4led_softc*) ;

void
FUNC_9(struct terasic_de4led_softc *VAR_8)
{
 const char *VAR_9;

 FUNC_2(VAR_8);




 FUNC_1(VAR_8);
 FUNC_0(VAR_8);
 FUNC_8(VAR_8);
 FUNC_3(VAR_8);




 VAR_8->tdl_leds[0] = FUNC_5(VAR_0, VAR_8, "de4led_0");
 VAR_8->tdl_leds[1] = FUNC_5(VAR_1, VAR_8, "de4led_1");
 VAR_8->tdl_leds[2] = FUNC_5(VAR_2, VAR_8, "de4led_2");
 VAR_8->tdl_leds[3] = FUNC_5(VAR_3, VAR_8, "de4led_3");
 VAR_8->tdl_leds[4] = FUNC_5(VAR_4, VAR_8, "de4led_4");
 VAR_8->tdl_leds[5] = FUNC_5(VAR_5, VAR_8, "de4led_5");
 VAR_8->tdl_leds[6] = FUNC_5(VAR_6, VAR_8, "de4led_6");
 VAR_8->tdl_leds[7] = FUNC_5(VAR_7, VAR_8, "de4led_7");

 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_0_cmd", &VAR_9) == 0)
  FUNC_6("de4led_0", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_1_cmd", &VAR_9) == 0)
  FUNC_6("de4led_1", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_2_cmd", &VAR_9) == 0)
  FUNC_6("de4led_2", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_3_cmd", &VAR_9) == 0)
  FUNC_6("de4led_3", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_4_cmd", &VAR_9) == 0)
  FUNC_6("de4led_4", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_5_cmd", &VAR_9) == 0)
  FUNC_6("de4led_5", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_6_cmd", &VAR_9) == 0)
  FUNC_6("de4led_6", VAR_9);
 if (FUNC_7(FUNC_4(VAR_8->tdl_dev),
     VAR_8->tdl_unit, "de4led_7_cmd", &VAR_9) == 0)
  FUNC_6("de4led_7", VAR_9);
}
