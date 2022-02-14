
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct aml8726_gpio_softc {unsigned int npins; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct aml8726_gpio_softc*,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct aml8726_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, uint32_t VAR_5, uint32_t *VAR_6)
{
 struct aml8726_gpio_softc *VAR_7 = FUNC_1(VAR_4);
 uint32_t VAR_8 = 1U << VAR_5;

 if (VAR_5 >= VAR_7->npins)
  return (VAR_1);

 if ((FUNC_0(VAR_7, VAR_0) & VAR_8) == 0) {

  *VAR_6 = VAR_3;
 } else

  *VAR_6 = VAR_2;

 return (0);
}
