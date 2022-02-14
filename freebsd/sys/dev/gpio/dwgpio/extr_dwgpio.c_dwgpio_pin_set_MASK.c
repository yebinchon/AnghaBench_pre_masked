
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
 int FUNC_0 (struct dwgpio_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwgpio_softc*) ;
 int FUNC_3 (struct dwgpio_softc*,int ) ;
 int FUNC_4 (struct dwgpio_softc*,int ,int) ;
 struct dwgpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2, unsigned int VAR_3)
{
 struct dwgpio_softc *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4->gpio_npins; VAR_6++) {
  if (VAR_4->gpio_pins[VAR_6].gp_pin == VAR_2)
   break;
 }

 if (VAR_6 >= VAR_4->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_4->port));
 if (VAR_3)
  VAR_5 |= (1 << VAR_6);
 else
  VAR_5 &= ~(1 << VAR_6);
 FUNC_4(VAR_4, FUNC_1(VAR_4->port), VAR_5);
 FUNC_2(VAR_4);

 return (0);
}
