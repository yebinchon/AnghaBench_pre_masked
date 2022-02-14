
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10_aintc_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct a10_aintc_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct a10_aintc_softc *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, FUNC_0(VAR_2));
  if (VAR_1 == 0)
   continue;
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
   if (VAR_1 & (1 << VAR_3)) {
    return (VAR_2 * 32 + VAR_3);
   }
 }

 return (-1);
}
