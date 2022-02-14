
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
 int FUNC_2 (struct zy7_gpio_softc*,int ,int) ;
 int FUNC_3 (struct zy7_gpio_softc*) ;
 int FUNC_4 (struct zy7_gpio_softc*) ;
 int FUNC_5 (int) ;
 struct zy7_gpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, uint32_t VAR_2)
{
 struct zy7_gpio_softc *VAR_3 = FUNC_6(VAR_1);

 if (!FUNC_1(VAR_2))
  return (VAR_0);

 FUNC_3(VAR_3);

 FUNC_2(VAR_3, FUNC_5(VAR_2 >> 5),
     FUNC_0(VAR_3, FUNC_5(VAR_2 >> 5)) ^ (1 << (VAR_2 & 31)));

 FUNC_4(VAR_3);

 return (0);
}
