
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_softc {int dev; int clk_hdmi; int clk_parent; int hwreset_hdmi; int supply_vdd; int supply_pll; int supply_hdmi; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct hdmi_softc *VAR_1, phandle_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev, 0, "hdmi-supply",
     &VAR_1->supply_hdmi);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'hdmi' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_3(VAR_1->dev,0, "pll-supply",
     &VAR_1->supply_pll);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'pll' regulator\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_3(VAR_1->dev, 0, "vdd-supply",
     &VAR_1->supply_vdd);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'vdd' regulator\n");
  return (VAR_0);
 }

 VAR_3 = FUNC_2(VAR_1->dev, 0, "hdmi", &VAR_1->hwreset_hdmi);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'hdmi' reset\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "parent", &VAR_1->clk_parent);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'parent' clock\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_0(VAR_1->dev, 0, "hdmi", &VAR_1->clk_hdmi);
 if (VAR_3 != 0) {
  FUNC_1(VAR_1->dev, "Cannot get 'hdmi' clock\n");
  return (VAR_0);
 }

 return (0);
}
