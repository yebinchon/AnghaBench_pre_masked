
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgamgr_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fpgamgr_softc*) ;

__attribute__((used)) static int
FUNC_2(struct fpgamgr_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = 1000;
 while (VAR_2 > 0) {
  if (FUNC_1(VAR_0) == VAR_1)
   break;
  VAR_2--;
  FUNC_0(10);
 }
 if (VAR_2 == 0) {
  return (1);
 }

 return (0);
}
