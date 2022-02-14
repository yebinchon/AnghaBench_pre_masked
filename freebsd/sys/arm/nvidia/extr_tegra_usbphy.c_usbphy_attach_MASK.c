
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbphy_softc {int have_utmi_regs; scalar_t__ dr_mode; scalar_t__ ifc_type; int dev; int supply_vbus; int clk_reg; int clk_pllu; int reset_usb; int clk_pads; int reset_pads; int * mem_res; void* pads_res; } ;
struct phynode_init_def {int id; int ofw_node; } ;
struct phynode {int dummy; } ;
typedef int phy_init ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (struct phynode_init_def*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 struct usbphy_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*,int *) ;
 int FUNC_9 (int ) ;
 struct phynode* FUNC_10 (int ,int *,struct phynode_init_def*) ;
 int * FUNC_11 (struct phynode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,char*,int *) ;
 scalar_t__ FUNC_14 (int ,int ,char*) ;
 scalar_t__ FUNC_15 (int ,int ,char*) ;
 int VAR_7 ;
 int FUNC_16 (struct usbphy_softc*,int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_8)
{
 struct usbphy_softc *VAR_9;
 int VAR_10, VAR_11;
 phandle_t VAR_12;
 struct phynode *VAR_13;
 struct phynode_init_def VAR_14;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->dev = VAR_8;

 VAR_10 = 0;
 VAR_9->mem_res = FUNC_1(VAR_8, VAR_3, &VAR_10,
     VAR_1 | VAR_2);
 if (VAR_9->mem_res == ((void*)0)) {
  FUNC_6(VAR_8, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_10 = 1;
 VAR_9->pads_res = FUNC_1(VAR_8, VAR_3, &VAR_10,
     VAR_1 | VAR_2);
 if (VAR_9->mem_res == ((void*)0)) {
  FUNC_6(VAR_8, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 VAR_12 = FUNC_9(VAR_8);

 VAR_11 = FUNC_8(VAR_9->dev, 0, "usb", &VAR_9->reset_usb);
 if (VAR_11 != 0) {
  FUNC_6(VAR_8, "Cannot get 'usb' reset\n");
  return (VAR_0);
 }
 VAR_11 = FUNC_8(VAR_9->dev, 0, "utmi-pads", &VAR_9->reset_pads);
 if (VAR_11 != 0) {
  FUNC_6(VAR_8, "Cannot get 'utmi-pads' reset\n");
  return (VAR_0);
 }

 VAR_11 = FUNC_4(VAR_9->dev, 0, "reg", &VAR_9->clk_reg);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot get 'reg' clock\n");
  return (VAR_0);
 }
 VAR_11 = FUNC_4(VAR_9->dev, 0, "pll_u", &VAR_9->clk_pllu);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot get 'pll_u' clock\n");
  return (VAR_0);
 }
 VAR_11 = FUNC_4(VAR_9->dev, 0, "utmi-pads", &VAR_9->clk_pads);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot get 'utmi-pads' clock\n");
  return (VAR_0);
 }

 VAR_11 = FUNC_7(VAR_9->reset_usb);
 if (VAR_11 != 0) {
  FUNC_6(VAR_8, "Cannot unreset 'usb' reset\n");
  return (VAR_0);
 }

 VAR_11 = FUNC_3(VAR_9->clk_pllu);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot enable 'pllu' clock\n");
  return (VAR_0);
 }
 VAR_11 = FUNC_3(VAR_9->clk_reg);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot enable 'reg' clock\n");
  return (VAR_0);
 }
 if (FUNC_0(VAR_12, "nvidia,has-utmi-pad-registers"))
  VAR_9->have_utmi_regs = 1;

 VAR_9->dr_mode = FUNC_14(VAR_8, VAR_12, "dr_mode");
 if (VAR_9->dr_mode == VAR_5)
  VAR_9->dr_mode = VAR_4;

 VAR_9->ifc_type = FUNC_15(VAR_8, VAR_12, "phy_type");


 if (VAR_9->ifc_type != VAR_6) {
  FUNC_6(VAR_8, "Unsupported phy type\n");
  return (VAR_0);
 }
 VAR_11 = FUNC_16(VAR_9, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_0(VAR_12, "vbus-supply")) {
  VAR_11 = FUNC_13(VAR_9->dev, 0, "vbus-supply",
      &VAR_9->supply_vbus);
  if (VAR_11 != 0) {
   FUNC_6(VAR_9->dev,
      "Cannot get \"vbus\" regulator\n");
   return (VAR_0);
  }
  VAR_11 = FUNC_12(VAR_9->supply_vbus);
  if (VAR_11 != 0) {
   FUNC_6(VAR_9->dev,
       "Cannot enable  \"vbus\" regulator\n");
   return (VAR_11);
  }
 }


 FUNC_2(&VAR_14, sizeof(VAR_14));
 VAR_14.id = 1;
 VAR_14.ofw_node = VAR_12;
 VAR_13 = FUNC_10(VAR_8, &VAR_7, &VAR_14);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_9->dev, "Cannot create phy\n");
  return (VAR_0);
 }
 if (FUNC_11(VAR_13) == ((void*)0)) {
  FUNC_6(VAR_9->dev, "Cannot create phy\n");
  return (VAR_0);
 }

 return (0);
}
