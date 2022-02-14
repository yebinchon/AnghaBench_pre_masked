
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct imx51_gpio_softc {size_t gpio_npins; int * gpio_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct imx51_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct imx51_gpio_softc*,int *,size_t) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct imx51_gpio_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_4->gpio_npins)
  return (VAR_0);

 FUNC_1(VAR_4, &VAR_4->gpio_pins[VAR_2], VAR_3);

 return (0);
}
