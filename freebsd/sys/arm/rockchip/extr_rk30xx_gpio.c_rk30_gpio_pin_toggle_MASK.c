
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
 int FUNC_0 (struct rk30_gpio_softc*) ;
 unsigned int FUNC_1 (struct rk30_gpio_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct rk30_gpio_softc*) ;
 int FUNC_3 (struct rk30_gpio_softc*,int ,unsigned int) ;
 struct rk30_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;
 struct rk30_gpio_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5->sc_gpio_npins; VAR_4++) {
  if (VAR_5->sc_gpio_pins[VAR_4].gp_pin == VAR_3)
   break;
 }
 if (VAR_4 >= VAR_5->sc_gpio_npins)
  return (VAR_0);
 FUNC_0(VAR_5);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6 & (1U << VAR_3))
  VAR_6 &= ~(1U << VAR_3);
 else
  VAR_6 |= (1U << VAR_3);
 FUNC_3(VAR_5, VAR_1, VAR_6);
 FUNC_2(VAR_5);

 return (0);
}
