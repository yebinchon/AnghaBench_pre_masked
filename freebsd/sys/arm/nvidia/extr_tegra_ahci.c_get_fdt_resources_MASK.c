
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ahci_sc {int dev; int clk_pll_e; int clk_cml; int clk_sata_oob; int clk_sata; int phy; int hwreset_sata_cold; int hwreset_sata_oob; int hwreset_sata; int supply_target_12v; int supply_target_5v; int supply_avdd; int supply_vddio; int supply_hvdd; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_5(struct tegra_ahci_sc *VAR_1, phandle_t VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_4(VAR_1->dev, 0, "hvdd-supply",
     &VAR_1->supply_hvdd );
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'hvdd' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "vddio-supply",
     &VAR_1->supply_vddio);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'vddio' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "avdd-supply",
     &VAR_1->supply_avdd);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'avdd' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "target-5v-supply",
     &VAR_1->supply_target_5v);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'target-5v' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "target-12v-supply",
     &VAR_1->supply_target_12v);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'target-12v' regulator\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_2(VAR_1->dev, 0, "sata", &VAR_1->hwreset_sata );
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata' reset\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_2(VAR_1->dev, 0, "sata-oob",
     &VAR_1->hwreset_sata_oob);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata oob' reset\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_2(VAR_1->dev, 0, "sata-cold",
     &VAR_1->hwreset_sata_cold);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata cold' reset\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_3(VAR_1->dev, 0, "sata-0", &VAR_1->phy);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata' phy\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_0(VAR_1->dev, 0, "sata", &VAR_1->clk_sata);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "sata-oob", &VAR_1->clk_sata_oob);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'sata oob' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "cml1", &VAR_1->clk_cml);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'cml1' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "pll_e", &VAR_1->clk_pll_e);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'pll_e' clock\n");
  return (VAR_0);
 }
 return (0);
}
