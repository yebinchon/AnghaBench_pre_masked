
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_softc {int my_dev; } ;


 int FUNC_0 (struct my_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct my_softc*) ;
 int FUNC_3 (struct my_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct my_softc * VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3, VAR_0, VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(10);
  if (!(FUNC_0(VAR_3, VAR_0) & VAR_1))
   break;
 }
 if (VAR_4 == VAR_2)
  FUNC_4(VAR_3->my_dev, "reset never completed!\n");


 FUNC_1(1000);
 return;
}
