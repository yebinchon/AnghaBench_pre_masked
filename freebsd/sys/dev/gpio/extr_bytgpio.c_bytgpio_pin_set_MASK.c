
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
 int FUNC_2 (struct bytgpio_softc*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 (struct bytgpio_softc*,int) ;
 int FUNC_4 (struct bytgpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct bytgpio_softc*,int) ;
 int FUNC_6 (struct bytgpio_softc*,int,int) ;
 struct bytgpio_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4, uint32_t VAR_5, unsigned int VAR_6)
{
 struct bytgpio_softc *VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_7 = FUNC_7(VAR_4);
 if (FUNC_5(VAR_7, VAR_5) != 0)
  return (VAR_2);

 if (!FUNC_3(VAR_7, VAR_5))
  return (VAR_2);

 FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_0);
 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_6 == VAR_3)
  VAR_9 = VAR_9 & ~VAR_1;
 else
  VAR_9 = VAR_9 | VAR_1;
 FUNC_6(VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_7);

 return (0);
}
