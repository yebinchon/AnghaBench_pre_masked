
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tegra_drm_encoder {int dev; } ;
struct hdmi_softc {int dev; int clk_hdmi; int clk_parent; } ;
typedef int clk_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 struct hdmi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct tegra_drm_encoder *VAR_1, clk_t VAR_2, uint64_t VAR_3)
{
 struct hdmi_softc *VAR_4;
 uint64_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_1->dev);


 VAR_6 = FUNC_1(VAR_4->clk_hdmi);
 if (VAR_6 != 0) {
  FUNC_7(VAR_4->dev, "Cannot disable 'hdmi' clock\n");
  return (VAR_6);
 }
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 != 0) {
  FUNC_7(VAR_4->dev, "Cannot disable display clock\n");
  return (VAR_6);
 }


 VAR_5 = VAR_0 * VAR_3;
 VAR_6 = FUNC_4(VAR_4->clk_parent, VAR_5, 0);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1->dev,
      "Cannot set display pixel frequency\n");
  return (VAR_6);
 }


 VAR_6 = FUNC_5(VAR_2, VAR_4->clk_parent);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1->dev, "Cannot set parent clock\n");
  return (VAR_6);

 }
 VAR_6 = FUNC_4(VAR_2, VAR_5, 0);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1->dev,
      "Cannot set display controller frequency\n");
  return (VAR_6);
 }
 VAR_6 = FUNC_4(VAR_4->clk_hdmi, VAR_3, 0);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1->dev,
      "Cannot set display controller frequency\n");
  return (VAR_6);
 }


 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 != 0) {
  FUNC_7(VAR_4->dev, "Cannot enable display clock\n");
  return (VAR_6);
 }
 VAR_6 = FUNC_2(VAR_4->clk_hdmi);
 if (VAR_6 != 0) {
  FUNC_7(VAR_4->dev, "Cannot enable 'hdmi' clock\n");
  return (VAR_6);
 }

 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1->dev,
      "Cannot get display controller frequency\n");
  return (VAR_6);
 }

 FUNC_0("DC frequency: %llu\n", VAR_5);

 return (0);
}
