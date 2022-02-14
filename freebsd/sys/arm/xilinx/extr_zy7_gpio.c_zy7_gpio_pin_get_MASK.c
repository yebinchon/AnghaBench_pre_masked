
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct zy7_gpio_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct zy7_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct zy7_gpio_softc *VAR_4 = FUNC_3(VAR_1);

 if (!FUNC_1(VAR_2))
  return (VAR_0);

 *VAR_3 = (FUNC_0(VAR_4, FUNC_2(VAR_2 >> 5)) >> (VAR_2 & 31)) & 1;

 return (0);
}
