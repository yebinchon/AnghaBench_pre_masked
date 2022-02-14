
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct aml8726_gpio_softc {unsigned int npins; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_gpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct aml8726_gpio_softc*) ;
 unsigned int FUNC_2 (struct aml8726_gpio_softc*,int ) ;
 int FUNC_3 (struct aml8726_gpio_softc*,int ,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct aml8726_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct aml8726_gpio_softc *VAR_6 = FUNC_4(VAR_3);
 uint32_t VAR_7 = 1U << VAR_4;

 if (VAR_4 >= VAR_6->npins)
  return (VAR_1);

 FUNC_0(VAR_6);

 if ((VAR_5 & VAR_2) != 0) {

  FUNC_3(VAR_6, VAR_0,
      (FUNC_2(VAR_6, VAR_0) & ~VAR_7));
 } else {

  FUNC_3(VAR_6, VAR_0,
      (FUNC_2(VAR_6, VAR_0) | VAR_7));
 }

 FUNC_1(VAR_6);

 return (0);
}
