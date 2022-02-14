
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_eewidth; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct rl_softc *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_4 | (VAR_0 << VAR_3->rl_eewidth);





 for (VAR_6 = 1 << (VAR_3->rl_eewidth + 3); VAR_6; VAR_6 >>= 1) {
  if (VAR_5 & VAR_6) {
   FUNC_2(VAR_2);
  } else {
   FUNC_1(VAR_2);
  }
  FUNC_0(100);
  FUNC_2(VAR_1);
  FUNC_0(150);
  FUNC_1(VAR_1);
  FUNC_0(100);
 }
}
