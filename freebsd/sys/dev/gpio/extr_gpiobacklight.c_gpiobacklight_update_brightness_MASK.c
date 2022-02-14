
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobacklight_softc {int sc_brightness; scalar_t__ sc_pin; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct gpiobacklight_softc *VAR_0)
{

 if (VAR_0->sc_pin)
  FUNC_0(VAR_0->sc_pin, VAR_0->sc_brightness);
}
