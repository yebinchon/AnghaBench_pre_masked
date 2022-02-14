
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobacklight_softc {scalar_t__ sc_pin; } ;
typedef int device_t ;


 struct gpiobacklight_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct gpiobacklight_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->sc_pin)
  FUNC_1(VAR_1->sc_pin);

 return (0);
}
