
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ahci_sc {int dev; int phy; int hwreset_sata_oob; int hwreset_sata_cold; int clk_pll_e; int clk_cml; int clk_sata_oob; int hwreset_sata; int clk_sata; int supply_target_12v; int supply_target_5v; int supply_avdd; int supply_vddio; int supply_hvdd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct tegra_ahci_sc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_6(VAR_1->supply_hvdd);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable  'hvdd' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_6(VAR_1->supply_vddio);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable  'vddio' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_6(VAR_1->supply_avdd);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable  'avdd' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_6(VAR_1->supply_target_5v);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot enable  'target-5v' regulator\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_6(VAR_1->supply_target_12v);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot enable  'sc->target-12v' regulator\n");
  return (VAR_2);
 }


 FUNC_1(VAR_1->clk_sata);
 FUNC_1(VAR_1->clk_sata_oob);
 FUNC_7(VAR_0);

 VAR_2 = FUNC_3(VAR_1->hwreset_sata);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot assert 'sata' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_3(VAR_1->hwreset_sata_oob);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot assert 'sata oob' reset\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_3(VAR_1->hwreset_sata_cold);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot assert 'sata cold' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_8(VAR_0,
     VAR_1->clk_sata, VAR_1->hwreset_sata);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable 'SAX' powergate\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_0(VAR_1->clk_sata_oob);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable 'sata oob' clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_1->clk_cml);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable 'cml' clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_1->clk_pll_e);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable 'pll e' clock\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_4(VAR_1->hwreset_sata_cold);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot unreset 'sata cold' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_1->hwreset_sata_oob);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot unreset 'sata oob' reset\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_5(VAR_1->phy);
 if (VAR_2 != 0) {
  FUNC_2(VAR_1->dev, "Cannot enable SATA phy\n");
  return (VAR_2);
 }

 return (0);
}
