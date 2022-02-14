
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct asmc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct asmc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct asmc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t VAR_2, int VAR_3)
{
 struct asmc_softc *VAR_4 = FUNC_2(VAR_1);
 u_int VAR_5;

 VAR_2 = VAR_2 & VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((FUNC_0(VAR_4) & VAR_0) == VAR_2)
   return (0);
  FUNC_1(10);
 }

 return (1);
}
