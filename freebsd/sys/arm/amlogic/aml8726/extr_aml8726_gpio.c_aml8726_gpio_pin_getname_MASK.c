
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct aml8726_gpio_softc {scalar_t__ npins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct aml8726_gpio_softc* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct aml8726_gpio_softc *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_5->npins)
  return (VAR_0);

 FUNC_2(VAR_4, VAR_1, "%s.%u", FUNC_1(VAR_2), VAR_3);

 return (0);
}
