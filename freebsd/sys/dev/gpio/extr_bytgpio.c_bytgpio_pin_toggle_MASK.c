
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
 int FUNC_3 (struct bytgpio_softc*,int) ;
 int FUNC_4 (struct bytgpio_softc*,int) ;
 scalar_t__ FUNC_5 (struct bytgpio_softc*,int) ;
 int FUNC_6 (struct bytgpio_softc*,int,int) ;
 struct bytgpio_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3, uint32_t VAR_4)
{
 struct bytgpio_softc *VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = FUNC_7(VAR_3);
 if (FUNC_5(VAR_5, VAR_4) != 0)
  return (VAR_2);

 if (!FUNC_3(VAR_5, VAR_4))
  return (VAR_2);


 FUNC_1(VAR_5);
 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_0);
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 VAR_7 = VAR_7 ^ VAR_1;
 FUNC_6(VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_5);

 return (0);
}
