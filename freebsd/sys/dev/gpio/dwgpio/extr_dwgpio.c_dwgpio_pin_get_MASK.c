
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dwgpio_softc {int gpio_npins; int port; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ gp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwgpio_softc*) ;
 int FUNC_2 (struct dwgpio_softc*) ;
 int FUNC_3 (struct dwgpio_softc*,int ) ;
 struct dwgpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct dwgpio_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->gpio_npins; VAR_5++) {
  if (VAR_4->gpio_pins[VAR_5].gp_pin == VAR_2)
   break;
 }

 if (VAR_5 >= VAR_4->gpio_npins)
  return (VAR_0);

 FUNC_1(VAR_4);
 *VAR_3 = (FUNC_3(VAR_4, FUNC_0(VAR_4->port)) & (1 << VAR_5)) ? 1 : 0;
 FUNC_2(VAR_4);

 return (0);
}
