
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvidia_head; } ;
struct dc_softc {int dev; TYPE_1__ tegra_crtc; int clk_dc; int clk_parent; int hwreset_dc; } ;
typedef int phandle_t ;


 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct dc_softc *VAR_0, phandle_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0->dev, 0, "dc", &VAR_0->hwreset_dc);
 if (VAR_2 != 0) {
  FUNC_2(VAR_0->dev, "Cannot get 'dc' reset\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_1(VAR_0->dev, 0, "parent", &VAR_0->clk_parent);
 if (VAR_2 != 0) {
  FUNC_2(VAR_0->dev, "Cannot get 'parent' clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_1(VAR_0->dev, 0, "dc", &VAR_0->clk_dc);
 if (VAR_2 != 0) {
  FUNC_2(VAR_0->dev, "Cannot get 'dc' clock\n");
  return (VAR_2);
 }

 VAR_2 = FUNC_0(VAR_1, "nvidia,head", &VAR_0->tegra_crtc.nvidia_head,
     sizeof(VAR_0->tegra_crtc.nvidia_head));
 if (VAR_2 <= 0) {
  FUNC_2(VAR_0->dev,
      "Cannot get 'nvidia,head' property\n");
  return (VAR_2);
 }
 return (0);
}
