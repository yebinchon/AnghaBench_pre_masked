
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcib_softc {int dev; int clk_pll_e; int clk_cml; int clk_afi; int hwreset_afi; int hwreset_pex; int clk_pex; int supply_avdd_pll_erefe; int supply_vddio_pex_ctl; int supply_hvdd_pex_pll_e; int supply_hvdd_pex; int supply_avdd_pex_pll; int supply_dvddio_pex; int supply_avddio_pex; int hwreset_pcie_x; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct tegra_pcib_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->hwreset_pcie_x);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot assert 'pcie_x' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_2(VAR_1->hwreset_afi);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot assert  'afi' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_2(VAR_1->hwreset_pex);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot assert  'pex' reset\n");
  return (VAR_2);
 }

 FUNC_5(VAR_0);


 VAR_2 = FUNC_4(VAR_1->supply_avddio_pex);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'avddio_pex' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_dvddio_pex);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'dvddio_pex' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_avdd_pex_pll);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'avdd-pex-pll' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_hvdd_pex);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'hvdd-pex-supply' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_hvdd_pex_pll_e);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'hvdd-pex-pll-e-supply' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_vddio_pex_ctl);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'vddio-pex-ctl' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->supply_avdd_pll_erefe);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev,
      "Cannot enable 'avdd-pll-erefe-supply' regulator\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_6(VAR_0,
     VAR_1->clk_pex, VAR_1->hwreset_pex);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot enable 'PCX' powergate\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_3(VAR_1->hwreset_afi);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot unreset 'afi' reset\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_0(VAR_1->clk_afi);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot enable 'afi' clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_1->clk_cml);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot enable 'cml' clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_1->clk_pll_e);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1->dev, "Cannot enable 'pll_e' clock\n");
  return (VAR_2);
 }
 return (0);
}
