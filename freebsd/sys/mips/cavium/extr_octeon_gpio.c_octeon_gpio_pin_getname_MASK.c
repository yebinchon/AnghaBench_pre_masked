
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct octeon_gpio_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ gp_pin; int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct octeon_gpio_softc*) ;
 int FUNC_1 (struct octeon_gpio_softc*) ;
 struct octeon_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct octeon_gpio_softc *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->gpio_npins; VAR_6++) {
  if (VAR_5->gpio_pins[VAR_6].gp_pin == VAR_3)
   break;
 }

 if (VAR_6 >= VAR_5->gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_5);
 FUNC_3(VAR_4, VAR_5->gpio_pins[VAR_6].gp_name, VAR_1);
 FUNC_1(VAR_5);

 return (0);
}
