
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct imx51_gpio_softc {size_t gpio_npins; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct imx51_gpio_softc*,int ) ;
 struct imx51_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, uint32_t VAR_5, unsigned int *VAR_6)
{
 struct imx51_gpio_softc *VAR_7;

 VAR_7 = FUNC_1(VAR_4);

 if (VAR_5 >= VAR_7->gpio_npins)
  return (VAR_0);
 if (VAR_7->gpio_pins[VAR_5].gp_flags & VAR_1)
  *VAR_6 = (FUNC_0(VAR_7, VAR_3) >> VAR_5) & 1;
 else
  *VAR_6 = (FUNC_0(VAR_7, VAR_2) >> VAR_5) & 1;

 return (0);
}
