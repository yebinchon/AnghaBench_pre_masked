
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct bcm_gpio_softc {int sc_gpio_npins; TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ gp_pin; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bcm_gpio_softc*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct bcm_gpio_softc*,int ) ;
 int FUNC_5 (struct bcm_gpio_softc*) ;
 int VAR_0 ;
 struct bcm_gpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct bcm_gpio_softc *VAR_4 = FUNC_6(VAR_1);
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->sc_gpio_npins; VAR_7++) {
  if (VAR_4->sc_gpio_pins[VAR_7].gp_pin == VAR_2)
   break;
 }
 if (VAR_7 >= VAR_4->sc_gpio_npins)
  return (VAR_0);
 VAR_5 = FUNC_0(VAR_2);
 FUNC_2(VAR_4);
 VAR_6 = FUNC_4(VAR_4, FUNC_1(VAR_5));
 FUNC_5(VAR_4);
 *VAR_3 = (VAR_6 & FUNC_3(VAR_2)) ? 1 : 0;

 return (0);
}
