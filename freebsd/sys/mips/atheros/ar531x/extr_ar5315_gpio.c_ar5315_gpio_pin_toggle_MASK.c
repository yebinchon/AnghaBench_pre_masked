
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ar5315_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5315_gpio_softc*,int ,int) ;
 int FUNC_1 (struct ar5315_gpio_softc*,int ) ;
 int FUNC_2 (struct ar5315_gpio_softc*,int ,int) ;
 int FUNC_3 () ;
 struct ar5315_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2)
{
 int VAR_3, VAR_4;
 struct ar5315_gpio_softc *VAR_5 = FUNC_4(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5->gpio_npins; VAR_4++) {
  if (VAR_5->gpio_pins[VAR_4].gp_pin == VAR_2)
   break;
 }

 if (VAR_4 >= VAR_5->gpio_npins)
  return (VAR_0);

 VAR_3 = (FUNC_1(VAR_5, FUNC_3()) & (1 << VAR_2)) ? 1 : 0;
 if (VAR_3)
  FUNC_0(VAR_5, FUNC_3(), VAR_2);
 else
  FUNC_2(VAR_5, FUNC_3(), VAR_2);

 return (0);
}
