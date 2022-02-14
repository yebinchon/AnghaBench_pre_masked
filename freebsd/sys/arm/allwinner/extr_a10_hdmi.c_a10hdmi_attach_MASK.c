
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ich_arg; int ich_func; } ;
struct a10hdmi_softc {TYPE_1__ mode_hook; int clk_ahb; int clk_hdmi; int clk_lcd; int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct a10hdmi_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 struct a10hdmi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct a10hdmi_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_3);

 if (FUNC_1(VAR_3, VAR_2, &VAR_4->res)) {
  FUNC_6(VAR_3, "cannot allocate resources for device\n");
  return (VAR_0);
 }


 VAR_5 = FUNC_3(VAR_3, 0, "ahb", &VAR_4->clk_ahb);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "cannot find ahb clock\n");
  return (VAR_5);
 }
 VAR_5 = FUNC_3(VAR_3, 0, "hdmi", &VAR_4->clk_hdmi);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "cannot find hdmi clock\n");
  return (VAR_5);
 }
 VAR_5 = FUNC_3(VAR_3, 0, "lcd", &VAR_4->clk_lcd);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "cannot find lcd clock\n");
 }

 VAR_5 = FUNC_2(VAR_4->clk_hdmi);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "cannot enable hdmi clock\n");
  return (VAR_5);
 }

 VAR_5 = FUNC_2(VAR_4->clk_ahb);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "cannot enable ahb gate\n");
  return (VAR_5);
 }

 FUNC_0(VAR_4);

 VAR_4->mode_hook.ich_func = VAR_1;
 VAR_4->mode_hook.ich_arg = VAR_3;

 VAR_5 = FUNC_4(&VAR_4->mode_hook);
 if (VAR_5 != 0)
  return (VAR_5);

 return (0);
}
