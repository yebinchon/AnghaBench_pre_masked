
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_softc {int emac_dev; int emac_clk; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct emac_softc *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_2(VAR_0->emac_dev, 0, 0, &VAR_0->emac_clk);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->emac_dev, "cannot get clock\n");
  return (VAR_1);
 }
 VAR_1 = FUNC_1(VAR_0->emac_clk);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->emac_dev, "cannot enable clock\n");
  return (VAR_1);
 }


 FUNC_0();

 return (0);
}
