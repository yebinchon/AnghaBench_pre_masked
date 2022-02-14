
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_gpio_softc*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct ti_gpio_softc*) ;
 struct ti_gpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct ti_gpio_softc*,int ) ;
 scalar_t__ FUNC_5 (struct ti_gpio_softc*,int) ;
 int FUNC_6 (struct ti_gpio_softc*,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, uint32_t VAR_5)
{
 struct ti_gpio_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_4);
 if (FUNC_5(VAR_6, VAR_5) != 0)
  return (VAR_0);


 FUNC_0(VAR_6);
 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (VAR_8 & FUNC_1(VAR_5))
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_3;
 FUNC_6(VAR_6, VAR_7, FUNC_1(VAR_5));
 FUNC_2(VAR_6);

 return (0);
}
