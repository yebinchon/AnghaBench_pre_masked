
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
 struct aml8726_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3, unsigned int *VAR_4)
{
 struct aml8726_gpio_softc *VAR_5 = FUNC_1(VAR_2);
 uint32_t VAR_6 = 1U << VAR_3;

 if (VAR_3 >= VAR_5->npins)
  return (VAR_1);

 *VAR_4 = (FUNC_0(VAR_5, VAR_0) & VAR_6) ? 1 : 0;

 return (0);
}
