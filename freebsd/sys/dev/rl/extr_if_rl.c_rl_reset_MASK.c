
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_dev; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct rl_softc*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct rl_softc *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_3);

 FUNC_1(VAR_3, VAR_1, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_2(10);
  if (!(FUNC_0(VAR_3, VAR_1) & VAR_0))
   break;
 }
 if (VAR_4 == VAR_2)
  FUNC_4(VAR_3->rl_dev, "reset never completed!\n");
}
