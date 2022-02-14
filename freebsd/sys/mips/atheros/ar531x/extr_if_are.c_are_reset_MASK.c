
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct are_softc {int are_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct are_softc*,int ) ;
 int FUNC_1 (struct are_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct are_softc *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_1, VAR_0);





 FUNC_2(10);
 FUNC_1(VAR_2, VAR_1, 0);

 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {




  FUNC_2(10);
  if ((FUNC_0(VAR_2, VAR_1) & VAR_0) == 0)
   break;
 }

 if (FUNC_0(VAR_2, VAR_1) & VAR_0)
  FUNC_3(VAR_2->are_dev, "reset time out\n");

 FUNC_2(1000);
}
