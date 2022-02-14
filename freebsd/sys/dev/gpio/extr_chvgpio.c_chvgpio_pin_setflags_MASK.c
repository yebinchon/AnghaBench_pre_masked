
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chvgpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chvgpio_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct chvgpio_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct chvgpio_softc*,int) ;
 scalar_t__ FUNC_3 (struct chvgpio_softc*,int) ;
 int FUNC_4 (struct chvgpio_softc*,int,int) ;
 struct chvgpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 struct chvgpio_softc *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_8 = FUNC_5(VAR_5);
 if (FUNC_3(VAR_8, VAR_6) != 0)
  return (VAR_2);

 VAR_10 = VAR_3 | VAR_4;




 if (VAR_7 & ~VAR_10)
  return (VAR_2);




 if ((VAR_7 & VAR_10) == VAR_10)
  return (VAR_2);


 FUNC_0(VAR_8);
 VAR_9 = FUNC_2(VAR_8, VAR_6);
 if (VAR_7 & VAR_3)
  VAR_9 = VAR_9 & VAR_0;
 if (VAR_7 & VAR_4)
  VAR_9 = VAR_9 & VAR_1;
 FUNC_4(VAR_8, VAR_6, VAR_9);
 FUNC_1(VAR_8);

 return (0);
}
