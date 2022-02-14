
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emac_softc {int dummy; } ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct emac_softc*,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(struct emac_softc *VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 100; VAR_2 != 0; --VAR_2) {
  FUNC_0(100);
  if ((FUNC_1(VAR_1, VAR_0) & 0x1) == 0)
   return (1);
 }

 return (0);
}
