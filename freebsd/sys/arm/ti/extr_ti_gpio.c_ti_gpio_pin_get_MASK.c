
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
 int FUNC_4 (struct ti_gpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct ti_gpio_softc*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, uint32_t VAR_5, unsigned int *VAR_6)
{
 struct ti_gpio_softc *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_4);
 if (FUNC_5(VAR_7, VAR_5) != 0)
  return (VAR_0);





 FUNC_0(VAR_7);
 VAR_8 = FUNC_4(VAR_7, VAR_3);
 if (VAR_8 & FUNC_1(VAR_5))
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;
 VAR_10 = FUNC_4(VAR_7, VAR_9);
 *VAR_6 = (VAR_10 & FUNC_1(VAR_5)) ? 1 : 0;
 FUNC_2(VAR_7);

 return (0);
}
