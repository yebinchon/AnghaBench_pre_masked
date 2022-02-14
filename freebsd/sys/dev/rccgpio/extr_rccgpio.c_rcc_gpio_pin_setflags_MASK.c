
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rcc_gpio_softc {scalar_t__ sc_gpio_npins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct rcc_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct rcc_gpio_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_4->sc_gpio_npins)
  return (VAR_0);



 return (0);
}
