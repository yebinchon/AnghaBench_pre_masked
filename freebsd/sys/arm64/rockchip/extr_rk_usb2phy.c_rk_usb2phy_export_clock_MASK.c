
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk_usb2phy_softc {int dev; int grf; } ;
struct TYPE_3__ {int offset; } ;
struct rk_usb2phy_regs {TYPE_1__ clk_ctl; } ;
struct rk_usb2phy_clk_sc {struct rk_usb2phy_regs* regs; int grf; int clkdev; } ;
struct clknode_init_def {char const* name; int parent_cnt; int * parent_names; scalar_t__ id; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
typedef int regs ;
typedef int phandle_t ;
typedef int def ;
typedef int clk_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct clkdom* FUNC_4 (int ) ;
 int FUNC_5 (struct clkdom*) ;
 scalar_t__ FUNC_6 (struct clkdom*) ;
 int FUNC_7 (struct clkdom*,int ) ;
 struct clknode* FUNC_8 (struct clkdom*,int *,struct clknode_init_def*) ;
 struct rk_usb2phy_clk_sc* FUNC_9 (struct clknode*) ;
 int FUNC_10 (struct clkdom*,struct clknode*) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int * FUNC_13 (int,int ,int ) ;
 int FUNC_14 (struct clknode_init_def*,int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,char*,int*) ;
 TYPE_2__* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*,char const***) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_19(struct rk_usb2phy_softc *VAR_7)
{
 struct clknode_init_def VAR_8;
 struct rk_usb2phy_clk_sc *VAR_9;
 const char **VAR_10;
 struct clkdom *VAR_11;
 struct clknode *VAR_12;
 clk_t VAR_13;
 phandle_t VAR_14;
 phandle_t VAR_15[2];
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = FUNC_15(VAR_7->dev);

 VAR_19 = FUNC_16(VAR_14, "clocks",
     "#clock-cells", &VAR_18);
 if (VAR_19 != 0 || VAR_18 != 1) {
  FUNC_12(VAR_7->dev, "couldn't find parent clock\n");
  return (VAR_0);
 }

 VAR_17 = FUNC_18(VAR_14, "clock-output-names",
     &VAR_10);
 if (VAR_17 != 1)
  return (VAR_0);

 VAR_11 = FUNC_4(VAR_7->dev);
 FUNC_7(VAR_11, VAR_6);

 FUNC_14(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.id = 0;
 VAR_8.name = VAR_10[0];
 VAR_8.parent_names = FUNC_13(sizeof(char *) * VAR_18, VAR_1, VAR_2);
 for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
  VAR_19 = FUNC_1(VAR_7->dev, 0, VAR_16, &VAR_13);
  if (VAR_19 != 0) {
   FUNC_12(VAR_7->dev, "cannot get clock %d\n", VAR_19);
   return (VAR_0);
  }
  VAR_8.parent_names[VAR_16] = FUNC_2(VAR_13);
  FUNC_3(VAR_13);
 }
 VAR_8.parent_cnt = VAR_18;

 VAR_12 = FUNC_8(VAR_11, &VAR_5, &VAR_8);
 if (VAR_12 == ((void*)0)) {
  FUNC_12(VAR_7->dev, "cannot create clknode\n");
  return (VAR_0);
 }

 VAR_9 = FUNC_9(VAR_12);
 VAR_9->clkdev = FUNC_11(VAR_7->dev);
 VAR_9->grf = VAR_7->grf;
 VAR_9->regs = (struct rk_usb2phy_regs *)FUNC_17(VAR_7->dev, VAR_4)->ocd_data;
 FUNC_0(VAR_14, "reg", VAR_15, sizeof(VAR_15));
 VAR_9->regs->clk_ctl.offset = VAR_15[0];
 FUNC_10(VAR_11, VAR_12);

 if (FUNC_6(VAR_11) != 0) {
  FUNC_12(VAR_7->dev, "cannot finalize clkdom initialization\n");
  return (VAR_0);
 }

 if (VAR_3)
  FUNC_5(VAR_11);

 return (0);
}
