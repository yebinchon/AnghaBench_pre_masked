
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bytgpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bytgpio_softc*,int) ;
 scalar_t__ FUNC_1 (struct bytgpio_softc*,int) ;
 struct bytgpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 struct bytgpio_softc *VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (FUNC_1(VAR_6, VAR_4) != 0)
  return (VAR_0);

 *VAR_5 = 0;
 if (FUNC_0(VAR_6, VAR_4))
  *VAR_5 = VAR_1 | VAR_2;

 return (0);
}
