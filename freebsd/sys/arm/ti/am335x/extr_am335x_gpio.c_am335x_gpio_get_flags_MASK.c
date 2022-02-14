
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_gpio_softc {int sc_bank; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 struct ti_gpio_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5, uint32_t VAR_6, uint32_t *VAR_7)
{
 unsigned int VAR_8;
 struct ti_gpio_softc *VAR_9 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_9->sc_bank*32 + VAR_6, &VAR_8) != 0) {
  *VAR_7 = 0;
  return (VAR_0);
 } else {
  switch (VAR_8) {
   case 129:
    *VAR_7 = VAR_2;
    break;
   case 128:
    *VAR_7 = VAR_2 | VAR_4;
    break;
   case 132:
    *VAR_7 = VAR_1;
    break;
   case 130:
    *VAR_7 = VAR_1 | VAR_4;
    break;
   case 131:
    *VAR_7 = VAR_1 | VAR_3;
    break;
   default:
    *VAR_7 = 0;
    break;
  }
 }

 return (0);
}
