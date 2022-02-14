
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_clk_mux_sc {int mask; int mux_flags; int shift; int offset; } ;
struct rk_clk_mux_def {int width; int mux_flags; int shift; int offset; int clkdef; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct rk_clk_mux_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int
FUNC_3(struct clkdom *VAR_1, struct rk_clk_mux_def *VAR_2)
{
 struct clknode *VAR_3;
 struct rk_clk_mux_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->offset = VAR_2->offset;
 VAR_4->shift = VAR_2->shift;
 VAR_4->mask = (1 << VAR_2->width) - 1;
 VAR_4->mux_flags = VAR_2->mux_flags;

 FUNC_2(VAR_1, VAR_3);
 return (0);
}
