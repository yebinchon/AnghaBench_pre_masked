
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_gpio_softc {int sc_gpio_npins; TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; int gp_pin; } ;


 int FUNC_0 (struct bcm_gpio_softc*) ;
 int FUNC_1 (struct bcm_gpio_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bcm_gpio_softc*,int ,int ) ;
 struct bcm_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct bcm_gpio_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0);
 FUNC_0(VAR_3);


 FUNC_3(VAR_3, VAR_1, VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_3->sc_gpio_npins; VAR_4++) {
  if (VAR_3->sc_gpio_pins[VAR_4].gp_pin == VAR_1)
   break;
 }
 if (VAR_4 < VAR_3->sc_gpio_npins)
  VAR_3->sc_gpio_pins[VAR_4].gp_flags = FUNC_2(VAR_2);

        FUNC_1(VAR_3);
}
