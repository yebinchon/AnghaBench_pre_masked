
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
 int VAR_2 ;
 int FUNC_1 (struct chvgpio_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct chvgpio_softc*,int) ;
 int FUNC_3 (struct chvgpio_softc*,int) ;
 scalar_t__ FUNC_4 (struct chvgpio_softc*,int) ;
 struct chvgpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6, uint32_t VAR_7, uint32_t *VAR_8)
{
 struct chvgpio_softc *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_5(VAR_6);
 if (FUNC_4(VAR_9, VAR_7) != 0)
  return (VAR_3);

 *VAR_8 = 0;


 FUNC_0(VAR_9);
 VAR_10 = FUNC_2(VAR_9, VAR_7);

 if (VAR_10 & VAR_1 ||
  VAR_10 & VAR_2)
  *VAR_8 |= VAR_5;

 if (VAR_10 & VAR_1 ||
  VAR_10 & VAR_0)
  *VAR_8 |= VAR_4;

 VAR_10 = FUNC_3(VAR_9, VAR_7);

 FUNC_1(VAR_9);
 return (0);
}
