
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_clk_pll_sc {int clk_reg; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_clk_pll_sc*) ;
 int FUNC_1 (struct jz4780_clk_pll_sc*,int ) ;
 int FUNC_2 (struct jz4780_clk_pll_sc*) ;
 int FUNC_3 (struct jz4780_clk_pll_sc*,int ,int ) ;
 struct jz4780_clk_pll_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_0, device_t VAR_1)
{
 struct jz4780_clk_pll_sc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_4(VAR_0);
 FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_2, VAR_2->clk_reg);
 FUNC_3(VAR_2, VAR_2->clk_reg, VAR_3);
 FUNC_2(VAR_2);

 FUNC_5(VAR_0, 0);
 return (0);
}
