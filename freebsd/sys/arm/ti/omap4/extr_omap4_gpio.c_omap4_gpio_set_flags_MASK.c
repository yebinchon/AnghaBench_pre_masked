
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
 struct ti_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 unsigned int VAR_11 = 0;
 struct ti_gpio_softc *VAR_12;

 VAR_12 = FUNC_0(VAR_8);

 if (VAR_10 & VAR_1)
  VAR_11 = VAR_7;
 else if (VAR_10 & VAR_0) {
  if (VAR_10 & VAR_3)
   VAR_11 = VAR_6;
  else if (VAR_10 & VAR_2)
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_4;
 }
 return FUNC_1((VAR_12->sc_bank-1)*32 + VAR_9, VAR_11);
}
