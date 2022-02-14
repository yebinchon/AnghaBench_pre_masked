
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
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct ti_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
 unsigned int VAR_12 = 0;
 struct ti_gpio_softc *VAR_13 = FUNC_0(VAR_9);

 if (VAR_11 & VAR_1) {
  if (VAR_11 & VAR_3)
   VAR_12 = VAR_8;
  else
   VAR_12 = VAR_7;
 } else if (VAR_11 & VAR_0) {
  if (VAR_11 & VAR_3)
   VAR_12 = VAR_6;
  else if (VAR_11 & VAR_2)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_4;
 }
 return FUNC_1(VAR_13->sc_bank*32 + VAR_10, VAR_12);
}
