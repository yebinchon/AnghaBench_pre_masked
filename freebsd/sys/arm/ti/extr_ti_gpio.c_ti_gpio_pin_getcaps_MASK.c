
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ti_gpio_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ti_gpio_softc*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_10, uint32_t VAR_11, uint32_t *VAR_12)
{
 struct ti_gpio_softc *VAR_13;

 VAR_13 = FUNC_0(VAR_10);
 if (FUNC_1(VAR_13, VAR_11) != 0)
  return (VAR_0);

 *VAR_12 = (VAR_6 | VAR_7 | VAR_9 |
     VAR_8 | VAR_5 | VAR_4 |
     VAR_3 | VAR_2 |
     VAR_1);

 return (0);
}
