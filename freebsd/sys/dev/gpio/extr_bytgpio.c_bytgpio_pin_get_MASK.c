
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
 unsigned int VAR_4 ;
 int FUNC_3 (struct bytgpio_softc*,int) ;
 int FUNC_4 (struct bytgpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct bytgpio_softc*,int) ;
 struct bytgpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, uint32_t VAR_6, unsigned int *VAR_7)
{
 struct bytgpio_softc *VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_8 = FUNC_6(VAR_5);
 if (FUNC_5(VAR_8, VAR_6) != 0)
  return (VAR_2);



 if (!FUNC_3(VAR_8, VAR_6)) {
  *VAR_7 = VAR_4;
  return (0);
 }

 FUNC_1(VAR_8);
 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_0);



 VAR_10 = FUNC_4(VAR_8, VAR_9);
 if (VAR_10 & VAR_1)
  *VAR_7 = VAR_3;
 else
  *VAR_7 = VAR_4;
 FUNC_2(VAR_8);

 return (0);
}
