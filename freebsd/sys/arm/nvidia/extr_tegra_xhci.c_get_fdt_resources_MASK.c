
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xhci_softc {int dev; int clk_xusb_gate; int clk_xusb_fs_src; int clk_xusb_hs_src; int clk_xusb_ss; int clk_xusb_falcon_src; int clk_xusb_host; int phy_usb3_0; int phy_usb2_2; int phy_usb2_1; int phy_usb2_0; int hwreset_xusb_ss; int hwreset_xusb_host; int supply_hvdd_usb_ss_pll_e; int supply_hvdd_usb_ss; int supply_avdd_usb_ss_pll; int supply_avdd_pll_erefe; int supply_avdd_pll_utmip; int supply_avdd_usb; int supply_dvddio_pex; int supply_avddio_pex; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int *) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_6(struct tegra_xhci_softc *VAR_1, phandle_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1->dev, 0, "avddio-pex-supply",
     &VAR_1->supply_avddio_pex);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'avddio-pex' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "dvddio-pex-supply",
     &VAR_1->supply_dvddio_pex);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'dvddio-pex' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "avdd-usb-supply",
     &VAR_1->supply_avdd_usb);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'avdd-usb' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "avdd-pll-utmip-supply",
     &VAR_1->supply_avdd_pll_utmip);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'avdd-pll-utmip' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "avdd-pll-erefe-supply",
     &VAR_1->supply_avdd_pll_erefe);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'avdd-pll-erefe' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "avdd-usb-ss-pll-supply",
     &VAR_1->supply_avdd_usb_ss_pll);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'avdd-usb-ss-pll' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0, "hvdd-usb-ss-supply",
     &VAR_1->supply_hvdd_usb_ss);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'hvdd-usb-ss' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_5(VAR_1->dev, 0,
     "hvdd-usb-ss-pll-e-supply", &VAR_1->supply_hvdd_usb_ss_pll_e);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev,
      "Cannot get 'hvdd-usb-ss-pll-e' regulator\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_3(VAR_1->dev, 0, "xusb_host",
     &VAR_1->hwreset_xusb_host);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_host' reset\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_3(VAR_1->dev, 0, "xusb_ss",
     &VAR_1->hwreset_xusb_ss);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_ss' reset\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_4(VAR_1->dev, 0, "usb2-0", &VAR_1->phy_usb2_0);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'usb2-0' phy\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "usb2-1", &VAR_1->phy_usb2_1);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'usb2-1' phy\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "usb2-2", &VAR_1->phy_usb2_2);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'usb2-2' phy\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_4(VAR_1->dev, 0, "usb3-0", &VAR_1->phy_usb3_0);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'usb3-0' phy\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_1(VAR_1->dev, 0, "xusb_host",
     &VAR_1->clk_xusb_host);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_host' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_1(VAR_1->dev, 0, "xusb_falcon_src",
     &VAR_1->clk_xusb_falcon_src);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_falcon_src' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_1(VAR_1->dev, 0, "xusb_ss",
     &VAR_1->clk_xusb_ss);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_ss' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_1(VAR_1->dev, 0, "xusb_hs_src",
     &VAR_1->clk_xusb_hs_src);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_hs_src' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_1(VAR_1->dev, 0, "xusb_fs_src",
     &VAR_1->clk_xusb_fs_src);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_fs_src' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "freebsd,clock-xusb-gate", 0,
     &VAR_1->clk_xusb_gate);
 if (VAR_3 != 0) {
  FUNC_2(VAR_1->dev, "Cannot get 'xusb_gate' clock\n");
  return (VAR_0);
 }
 return (0);
}
