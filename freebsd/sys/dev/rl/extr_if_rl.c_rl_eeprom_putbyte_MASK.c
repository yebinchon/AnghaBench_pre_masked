
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_eecmd_read; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct rl_softc *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_3 | VAR_2->rl_eecmd_read;




 for (VAR_5 = 0x400; VAR_5; VAR_5 >>= 1) {
  if (VAR_4 & VAR_5) {
   FUNC_2(VAR_1);
  } else {
   FUNC_1(VAR_1);
  }
  FUNC_0(100);
  FUNC_2(VAR_0);
  FUNC_0(150);
  FUNC_1(VAR_0);
  FUNC_0(100);
 }
}
