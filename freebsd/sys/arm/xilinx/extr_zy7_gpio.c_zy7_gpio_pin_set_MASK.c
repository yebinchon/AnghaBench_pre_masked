
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct zy7_gpio_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct zy7_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2, unsigned int VAR_3)
{
 struct zy7_gpio_softc *VAR_4 = FUNC_4(VAR_1);

 if (!FUNC_0(VAR_2) || VAR_3 > 1)
  return (VAR_0);


 if ((VAR_2 & 16) != 0)
  FUNC_1(VAR_4, FUNC_3(VAR_2 >> 5),
      (0xffff0000 ^ (0x10000 << (VAR_2 & 15))) |
      (VAR_3 << (VAR_2 & 15)));
 else
  FUNC_1(VAR_4, FUNC_2(VAR_2 >> 5),
      (0xffff0000 ^ (0x10000 << (VAR_2 & 15))) |
      (VAR_3 << (VAR_2 & 15)));

 return (0);
}
