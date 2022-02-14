
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chvgpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chvgpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct chvgpio_softc*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct chvgpio_softc*,int) ;
 scalar_t__ FUNC_3 (struct chvgpio_softc*,int) ;
 struct chvgpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, uint32_t VAR_5, unsigned int *VAR_6)
{
 struct chvgpio_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_4(VAR_4);
 if (FUNC_3(VAR_7, VAR_5) != 0)
  return (VAR_1);

 FUNC_0(VAR_7);


 VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (VAR_8 & VAR_0)
  *VAR_6 = VAR_2;
 else
  *VAR_6 = VAR_3;

 FUNC_1(VAR_7);

 return (0);
}
