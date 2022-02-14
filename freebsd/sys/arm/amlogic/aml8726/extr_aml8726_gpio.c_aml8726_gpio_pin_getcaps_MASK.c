
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct aml8726_gpio_softc {scalar_t__ npins; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct aml8726_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 struct aml8726_gpio_softc *VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 >= VAR_6->npins)
  return (VAR_0);

 *VAR_5 = (VAR_1 | VAR_2);

 return (0);
}
