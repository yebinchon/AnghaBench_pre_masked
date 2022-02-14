
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_gpio_softc*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ti_gpio_softc*) ;
 struct ti_gpio_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ti_gpio_softc*,int ) ;
 int FUNC_5 (struct ti_gpio_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, uint32_t VAR_5, unsigned int VAR_6)
{
 struct ti_gpio_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 if (FUNC_4(VAR_7, VAR_5) != 0)
  return (VAR_0);

 FUNC_0(VAR_7);
 if (VAR_6 == VAR_1)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;
 FUNC_5(VAR_7, VAR_8, FUNC_1(VAR_5));
 FUNC_2(VAR_7);

 return (0);
}
