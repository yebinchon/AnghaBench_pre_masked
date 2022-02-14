
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zy7_gpio_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct zy7_gpio_softc*,int ,int) ;
 int FUNC_3 (struct zy7_gpio_softc*) ;
 int FUNC_4 (struct zy7_gpio_softc*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct zy7_gpio_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct zy7_gpio_softc *VAR_6 = FUNC_7(VAR_3);

 if (!FUNC_1(VAR_4))
  return (VAR_0);

 FUNC_3(VAR_6);

 if ((VAR_5 & VAR_1) != 0) {

  FUNC_2(VAR_6, FUNC_5(VAR_4 >> 5),
      FUNC_0(VAR_6, FUNC_5(VAR_4 >> 5)) | (1 << (VAR_4 & 31)));

  if ((VAR_5 & VAR_2) != 0)
   FUNC_2(VAR_6, FUNC_6(VAR_4 >> 5),
       FUNC_0(VAR_6, FUNC_6(VAR_4 >> 5)) &
       ~(1 << (VAR_4 & 31)));
  else
   FUNC_2(VAR_6, FUNC_6(VAR_4 >> 5),
       FUNC_0(VAR_6, FUNC_6(VAR_4 >> 5)) |
       (1 << (VAR_4 & 31)));
 } else {

  FUNC_2(VAR_6, FUNC_5(VAR_4 >> 5),
      FUNC_0(VAR_6, FUNC_5(VAR_4 >> 5)) & ~(1 << (VAR_4 & 31)));
  FUNC_2(VAR_6, FUNC_6(VAR_4 >> 5),
      FUNC_0(VAR_6, FUNC_6(VAR_4 >> 5)) & ~(1 << (VAR_4 & 31)));
 }

 FUNC_4(VAR_6);

 return (0);
}
