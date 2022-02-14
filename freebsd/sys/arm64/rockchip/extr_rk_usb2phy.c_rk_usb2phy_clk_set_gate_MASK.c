
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk_usb2phy_clk_sc {TYPE_1__* regs; int grf; } ;
struct clknode {int dummy; } ;
struct TYPE_4__ {int disable_mask; int offset; int enable_mask; } ;
struct TYPE_3__ {TYPE_2__ clk_ctl; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct rk_usb2phy_clk_sc* FUNC_1 (struct clknode*) ;

__attribute__((used)) static int
FUNC_2(struct clknode *VAR_0, bool VAR_1)
{
 struct rk_usb2phy_clk_sc *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_2->grf, VAR_2->regs->clk_ctl.offset,
      VAR_2->regs->clk_ctl.enable_mask);
 else
  FUNC_0(VAR_2->grf, VAR_2->regs->clk_ctl.offset,
      VAR_2->regs->clk_ctl.disable_mask);
 return (0);
}
