
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwm_softc*,int) ;

int
FUNC_2(struct iwm_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    int VAR_5)
{
 do {
  if ((FUNC_1(VAR_1, VAR_2) & VAR_4) == (VAR_3 & VAR_4))
   return (0);
  FUNC_0(10);
  VAR_5 -= 10;
 } while (VAR_5 > 0);

 return (VAR_0);
}
