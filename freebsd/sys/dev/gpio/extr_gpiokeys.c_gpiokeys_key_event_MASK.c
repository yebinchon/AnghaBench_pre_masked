
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct gpiokeys_softc {int dummy; } ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 int FUNC_1 (struct gpiokeys_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gpiokeys_softc*) ;
 int FUNC_3 (struct gpiokeys_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct gpiokeys_softc *VAR_4, uint16_t VAR_5, int VAR_6)
{
 uint32_t VAR_7;


 VAR_7 = VAR_5 & VAR_1;

 if (!VAR_6)
  VAR_7 |= VAR_0;

 FUNC_0(VAR_4);
 if (VAR_5 & VAR_2)
  FUNC_3(VAR_4, 0xe0);
 else if (VAR_5 & VAR_3)
  FUNC_3(VAR_4, 0xe1);

 FUNC_3(VAR_4, VAR_7);
 FUNC_1(VAR_4);

 FUNC_2(VAR_4);
}
