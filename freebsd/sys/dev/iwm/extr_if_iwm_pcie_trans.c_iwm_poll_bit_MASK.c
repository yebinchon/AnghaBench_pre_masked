
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iwm_softc*,int) ;

int
FUNC_2(struct iwm_softc *VAR_0, int VAR_1,
 uint32_t VAR_2, uint32_t VAR_3, int VAR_4)
{
 for (;;) {
  if ((FUNC_1(VAR_0, VAR_1) & VAR_3) == (VAR_2 & VAR_3)) {
   return 1;
  }
  if (VAR_4 < 10) {
   return 0;
  }
  VAR_4 -= 10;
  FUNC_0(10);
 }
}
