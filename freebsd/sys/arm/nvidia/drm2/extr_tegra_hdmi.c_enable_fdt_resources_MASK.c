
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_softc {int dev; int hwreset_hdmi; int clk_hdmi; int supply_vdd; int supply_pll; int supply_hdmi; int clk_parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct hdmi_softc *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_2(VAR_0->clk_hdmi, VAR_0->clk_parent);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev,
      "Cannot set parent for 'hdmi' clock\n");
  return (VAR_1);
 }


 VAR_1 = FUNC_1(VAR_0->clk_parent, 594000000, 0);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev,
      "Cannot set frequency for 'hdmi' parent clock\n");
  return (VAR_1);
 }
 VAR_1 = FUNC_1(VAR_0->clk_hdmi, 594000000 / 4, 0);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev,
      "Cannot set frequency for 'hdmi' parent clock\n");
  return (VAR_1);
 }

 VAR_1 = FUNC_5(VAR_0->supply_hdmi);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev, "Cannot enable  'hdmi' regulator\n");
  return (VAR_1);
 }
 VAR_1 = FUNC_5(VAR_0->supply_pll);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev, "Cannot enable  'pll' regulator\n");
  return (VAR_1);
 }
 VAR_1 = FUNC_5(VAR_0->supply_vdd);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev, "Cannot enable  'vdd' regulator\n");
  return (VAR_1);
 }

 VAR_1 = FUNC_0(VAR_0->clk_hdmi);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev, "Cannot enable 'hdmi' clock\n");
  return (VAR_1);
 }

 VAR_1 = FUNC_4(VAR_0->hwreset_hdmi);
 if (VAR_1 != 0) {
  FUNC_3(VAR_0->dev, "Cannot unreset  'hdmi' reset\n");
  return (VAR_1);
 }
 return (0);
}
