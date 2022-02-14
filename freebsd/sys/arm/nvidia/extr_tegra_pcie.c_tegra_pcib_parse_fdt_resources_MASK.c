
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcib_softc {scalar_t__ num_ports; struct tegra_pcib_port** ports; int dev; int clk_cml; int clk_pll_e; int clk_afi; int clk_pex; int hwreset_pcie_x; int hwreset_afi; int hwreset_pex; int supply_avdd_pll_erefe; int supply_vddio_pex_ctl; int supply_hvdd_pex_pll_e; int supply_hvdd_pex; int supply_avdd_pex_pll; int supply_dvddio_pex; int supply_avddio_pex; } ;
struct tegra_pcib_port {int dummy; } ;
typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (int ,int ,char*,int *) ;
 struct tegra_pcib_port* FUNC_6 (struct tegra_pcib_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct tegra_pcib_softc *VAR_1, phandle_t VAR_2)
{
 phandle_t VAR_3;
 struct tegra_pcib_port *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_5(VAR_1->dev, 0, "avddio-pex-supply",
     &VAR_1->supply_avddio_pex);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'avddio-pex' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "dvddio-pex-supply",
      &VAR_1->supply_dvddio_pex);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'dvddio-pex' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "avdd-pex-pll-supply",
      &VAR_1->supply_avdd_pex_pll);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'avdd-pex-pll' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "hvdd-pex-supply",
      &VAR_1->supply_hvdd_pex);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'hvdd-pex' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "hvdd-pex-pll-e-supply",
      &VAR_1->supply_hvdd_pex_pll_e);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'hvdd-pex-pll-e' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "vddio-pex-ctl-supply",
     &VAR_1->supply_vddio_pex_ctl);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'vddio-pex-ctl' regulator\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_5(VAR_1->dev, 0, "avdd-pll-erefe-supply",
      &VAR_1->supply_avdd_pll_erefe);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot get 'avdd-pll-erefe' regulator\n");
  return (VAR_0);
 }


 VAR_5 = FUNC_4(VAR_1->dev, 0, "pex", &VAR_1->hwreset_pex);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'pex' reset\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_4(VAR_1->dev, 0, "afi", &VAR_1->hwreset_afi);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'afi' reset\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_4(VAR_1->dev, 0, "pcie_x", &VAR_1->hwreset_pcie_x);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'pcie_x' reset\n");
  return (VAR_0);
 }


 VAR_5 = FUNC_2(VAR_1->dev, 0, "pex", &VAR_1->clk_pex);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'pex' clock\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_2(VAR_1->dev, 0, "afi", &VAR_1->clk_afi);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'afi' clock\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_2(VAR_1->dev, 0, "pll_e", &VAR_1->clk_pll_e);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'pll_e' clock\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_2(VAR_1->dev, 0, "cml", &VAR_1->clk_cml);
 if (VAR_5 != 0) {
  FUNC_3(VAR_1->dev, "Cannot get 'cml' clock\n");
  return (VAR_0);
 }


 VAR_1->num_ports = 0;
 for (VAR_3 = FUNC_0(VAR_2); VAR_3 != 0; VAR_3 = FUNC_1(VAR_3)) {
  VAR_4 = FUNC_6(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_1->dev, "Cannot parse PCIe port node\n");
   return (VAR_0);
  }
  VAR_1->ports[VAR_1->num_ports++] = VAR_4;
 }

 return (0);
}
