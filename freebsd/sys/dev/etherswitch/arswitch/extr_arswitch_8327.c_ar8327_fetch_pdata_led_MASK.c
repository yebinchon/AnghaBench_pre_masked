
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int sc_dev; } ;
struct ar8327_led_cfg {int led_ctrl0; int led_ctrl1; int led_ctrl2; int led_ctrl3; int open_drain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_3(struct arswitch_softc *VAR_0,
    struct ar8327_led_cfg *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "led.ctrl0", &VAR_2) != 0)
  return (0);
 VAR_1->led_ctrl0 = VAR_2;

 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "led.ctrl1", &VAR_2) != 0)
  return (0);
 VAR_1->led_ctrl1 = VAR_2;

 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "led.ctrl2", &VAR_2) != 0)
  return (0);
 VAR_1->led_ctrl2 = VAR_2;

 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "led.ctrl3", &VAR_2) != 0)
  return (0);
 VAR_1->led_ctrl3 = VAR_2;

 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "led.open_drain", &VAR_2) != 0)
  return (0);
 VAR_1->open_drain = VAR_2;

 return (1);
}
