
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nvidia_head; } ;
struct dc_softc {int dev; int hwreset_dc; int clk_dc; TYPE_1__ tegra_crtc; int clk_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct dc_softc *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_2->clk_dc, VAR_2->clk_parent);
 if (VAR_4 != 0) {
  FUNC_1(VAR_2->dev, "Cannot set parent for 'dc' clock\n");
  return (VAR_4);
 }

 VAR_3 = (VAR_2->tegra_crtc.nvidia_head == 0) ?
     VAR_0: VAR_1;
 VAR_4 = FUNC_2(VAR_3, VAR_2->clk_dc, VAR_2->hwreset_dc);
 if (VAR_4 != 0) {
  FUNC_1(VAR_2->dev, "Cannot enable 'DIS' powergate\n");
  return (VAR_4);
 }

 return (0);
}
