
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgamgr_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fpgamgr_softc*,int ) ;
 int FUNC_2 (struct fpgamgr_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct fpgamgr_softc *VAR_2, int VAR_3)
{
 int VAR_4;


 if (FUNC_1(VAR_2, VAR_1) != 0)
  FUNC_2(VAR_2, VAR_1, 0x1);


 FUNC_2(VAR_2, VAR_0, VAR_3);


 VAR_4 = 1000;
 while (VAR_4 > 0) {
  if (FUNC_1(VAR_2, VAR_1) == 1) {
   FUNC_2(VAR_2, VAR_1, 0x1);
   break;
  }
  VAR_4--;
  FUNC_0(10);
 }
 if (VAR_4 == 0) {
  return (1);
 }

 return (0);
}
