
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aml8726_gpio_softc {int npins; int * res; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_gpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct aml8726_gpio_softc*) ;
 int FUNC_2 (struct aml8726_gpio_softc*,int ) ;
 int FUNC_3 (struct aml8726_gpio_softc*,int ,int) ;
 int VAR_1 ;
 struct aml8726_gpio_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint32_t VAR_3, unsigned int VAR_4)
{
 struct aml8726_gpio_softc *VAR_5 = FUNC_4(VAR_2);
 uint32_t VAR_6;

 if (VAR_3 >= VAR_5->npins || VAR_4 > 1)
  return (VAR_1);




 if (FUNC_5(VAR_5->res[1]) == FUNC_5(VAR_5->res[0]))
  VAR_3 += 16;

 VAR_6 = 1U << VAR_3;

 FUNC_0(VAR_5);

 FUNC_3(VAR_5, VAR_0,
     ((FUNC_2(VAR_5, VAR_0) & ~VAR_6) | (VAR_4 << VAR_3)));

 FUNC_1(VAR_5);

 return (0);
}
