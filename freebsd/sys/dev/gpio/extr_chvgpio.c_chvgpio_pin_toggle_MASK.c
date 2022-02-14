
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
 int FUNC_2 (struct chvgpio_softc*,int) ;
 scalar_t__ FUNC_3 (struct chvgpio_softc*,int) ;
 int FUNC_4 (struct chvgpio_softc*,int,int) ;
 struct chvgpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint32_t VAR_3)
{
 struct chvgpio_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_5(VAR_2);
 if (FUNC_3(VAR_4, VAR_3) != 0)
  return (VAR_1);

 FUNC_0(VAR_4);


 VAR_5 = FUNC_2(VAR_4, VAR_3);
 VAR_5 = VAR_5 ^ VAR_0;
 FUNC_4(VAR_4, VAR_3, VAR_5);

 FUNC_1(VAR_4);

 return (0);
}
