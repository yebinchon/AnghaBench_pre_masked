
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwmmc_softc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dwmmc_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dwmmc_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct dwmmc_softc *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 VAR_3 |= (VAR_2);
 FUNC_2(VAR_1, VAR_0, VAR_3);


 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  if (!(FUNC_1(VAR_1, VAR_0) & VAR_2))
   return (0);
  FUNC_0(10);
 }

 FUNC_3(VAR_1->dev, "Reset failed\n");

 return (1);
}
