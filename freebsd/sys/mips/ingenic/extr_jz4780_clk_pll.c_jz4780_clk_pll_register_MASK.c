
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
struct mtx {int dummy; } ;
struct jz4780_clk_pll_sc {int clk_reg; struct resource* clk_res; struct mtx* clk_mtx; } ;
struct clknode_init_def {int dummy; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,struct clknode_init_def*) ;
 struct jz4780_clk_pll_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int FUNC_3(struct clkdom *VAR_1,
    struct clknode_init_def *VAR_2, struct mtx *VAR_3,
    struct resource *VAR_4, uint32_t VAR_5)
{
 struct clknode *VAR_6;
 struct jz4780_clk_pll_sc *VAR_7;

 VAR_6 = FUNC_0(VAR_1, &VAR_0, VAR_2);
 if (VAR_6 == ((void*)0))
  return (1);

 VAR_7 = FUNC_1(VAR_6);
 VAR_7->clk_mtx = VAR_3;
 VAR_7->clk_res = VAR_4;
 VAR_7->clk_reg = VAR_5;
 FUNC_2(VAR_1, VAR_6);
 return (0);
}
