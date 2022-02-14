
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct rk30_gpio_softc {int sc_gpio_npins; TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {unsigned int gp_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rk30_gpio_softc*) ;
 unsigned int FUNC_1 (struct rk30_gpio_softc*,int ) ;
 int FUNC_2 (struct rk30_gpio_softc*) ;
 struct rk30_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 struct rk30_gpio_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_3(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_6->sc_gpio_npins; VAR_5++) {
  if (VAR_6->sc_gpio_pins[VAR_5].gp_pin == VAR_3)
   break;
 }
 if (VAR_5 >= VAR_6->sc_gpio_npins)
  return (VAR_0);
 FUNC_0(VAR_6);
 VAR_7 = FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6);
 *VAR_4 = (VAR_7 & (1U << VAR_3)) ? 1 : 0;

 return (0);
}
