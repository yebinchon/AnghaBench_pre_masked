
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_gpio_softc {scalar_t__ npins; } ;
typedef int device_t ;


 struct aml8726_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, int *VAR_1)
{
 struct aml8726_gpio_softc *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = (int)VAR_2->npins;

 return (0);
}
