
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bytgpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bytgpio_softc*,int,int ) ;
 int FUNC_1 (struct bytgpio_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bytgpio_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct bytgpio_softc*,int) ;
 int FUNC_4 (struct bytgpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct bytgpio_softc*,int) ;
 int FUNC_6 (struct bytgpio_softc*,int,int) ;
 struct bytgpio_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 struct bytgpio_softc *VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_10 = FUNC_7(VAR_7);
 if (FUNC_5(VAR_10, VAR_8) != 0)
  return (VAR_4);

 if (FUNC_3(VAR_10, VAR_8))
  VAR_13 = VAR_5 | VAR_6;
 else
  VAR_13 = 0;




 if (VAR_9 & ~VAR_13)
  return (VAR_4);




 if ((VAR_9 & VAR_13) == VAR_13)
  return (VAR_4);


 FUNC_1(VAR_10);
 VAR_11 = FUNC_0(VAR_10, VAR_8, VAR_0);
 VAR_12 = FUNC_4(VAR_10, VAR_11);
 VAR_12 = VAR_12 | VAR_1;
 if (VAR_9 & VAR_5)
  VAR_12 = VAR_12 & ~VAR_2;
 if (VAR_9 & VAR_6)
  VAR_12 = VAR_12 & ~VAR_3;
 FUNC_6(VAR_10, VAR_11, VAR_12);
 FUNC_2(VAR_10);

 return (0);
}
