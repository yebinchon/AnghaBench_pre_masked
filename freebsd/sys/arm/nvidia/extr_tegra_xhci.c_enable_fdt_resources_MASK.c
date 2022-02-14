
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xhci_softc {int dev; int phy_usb3_0; int phy_usb2_2; int phy_usb2_1; int phy_usb2_0; int clk_xusb_hs_src; int clk_xusb_fs_src; int clk_xusb_falcon_src; int hwreset_xusb_ss; int clk_xusb_ss; int hwreset_xusb_host; int clk_xusb_host; int clk_xusb_gate; int supply_hvdd_usb_ss_pll_e; int supply_hvdd_usb_ss; int supply_avdd_usb_ss_pll; int supply_avdd_pll_erefe; int supply_avdd_pll_utmip; int supply_avdd_usb; int supply_dvddio_pex; int supply_avddio_pex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct tegra_xhci_softc *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3->hwreset_xusb_host);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot reset 'xusb_host' reset\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_3(VAR_3->hwreset_xusb_ss);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot reset 'xusb_ss' reset\n");
  return (VAR_4);
 }

 VAR_4 = FUNC_5(VAR_3->supply_avddio_pex);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'avddio_pex' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_dvddio_pex);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'dvddio_pex' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_avdd_usb);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'avdd_usb' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_avdd_pll_utmip);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'avdd_pll_utmip-5v' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_avdd_pll_erefe);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'avdd_pll_erefe' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_avdd_usb_ss_pll);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'avdd_usb_ss_pll' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_hvdd_usb_ss);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'hvdd_usb_ss' regulator\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_5(VAR_3->supply_hvdd_usb_ss_pll_e);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'hvdd_usb_ss_pll_e' regulator\n");
  return (VAR_4);
 }


 VAR_4 = FUNC_6(VAR_0);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot powerdown  'xusba' domain\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot powerdown  'xusbc' domain\n");
  return (VAR_4);
 }


 FUNC_1(VAR_3->clk_xusb_ss, VAR_2, 0);
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_4 = FUNC_0(VAR_3->clk_xusb_gate);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'xusb_gate' clock\n");
  return (VAR_4);
 }


 VAR_4 = FUNC_7(VAR_1,
     VAR_3->clk_xusb_host, VAR_3->hwreset_xusb_host);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot powerup 'xusbc' domain\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_7(VAR_0,
     VAR_3->clk_xusb_ss, VAR_3->hwreset_xusb_ss);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot powerup 'xusba' domain\n");
  return (VAR_4);
 }


 VAR_4 = FUNC_0(VAR_3->clk_xusb_falcon_src);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'xusb_falcon_src' clock\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_0(VAR_3->clk_xusb_fs_src);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'xusb_fs_src' clock\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_0(VAR_3->clk_xusb_hs_src);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev,
      "Cannot enable 'xusb_hs_src' clock\n");
  return (VAR_4);
 }

 VAR_4 = FUNC_4(VAR_3->phy_usb2_0);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot enable USB2_0 phy\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_4(VAR_3->phy_usb2_1);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot enable USB2_1 phy\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_4(VAR_3->phy_usb2_2);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot enable USB2_2 phy\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_4(VAR_3->phy_usb3_0);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->dev, "Cannot enable USB3_0 phy\n");
  return (VAR_4);
 }

 return (0);
}
