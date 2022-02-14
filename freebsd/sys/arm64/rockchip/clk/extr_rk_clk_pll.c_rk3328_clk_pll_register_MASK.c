
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_clk_pll_sc {int frac_rates; int rates; int flags; int mode_shift; int mode_reg; int gate_shift; int gate_offset; int base_offset; } ;
struct rk_clk_pll_def {int frac_rates; int rates; int flags; int mode_shift; int mode_reg; int gate_shift; int gate_offset; int base_offset; int clkdef; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct rk_clk_pll_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int
FUNC_3(struct clkdom *VAR_1, struct rk_clk_pll_def *VAR_2)
{
 struct clknode *VAR_3;
 struct rk_clk_pll_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0,
     &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->base_offset = VAR_2->base_offset;
 VAR_4->gate_offset = VAR_2->gate_offset;
 VAR_4->gate_shift = VAR_2->gate_shift;
 VAR_4->mode_reg = VAR_2->mode_reg;
 VAR_4->mode_shift = VAR_2->mode_shift;
 VAR_4->flags = VAR_2->flags;
 VAR_4->rates = VAR_2->rates;
 VAR_4->frac_rates = VAR_2->frac_rates;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
