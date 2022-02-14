
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_clk_composite_sc {int mux_shift; int mux_width; int mux_mask; int div_shift; int div_width; int div_mask; int flags; int gate_shift; int gate_offset; int muxdiv_offset; } ;
struct rk_clk_composite_def {int mux_shift; int mux_width; int div_shift; int div_width; int flags; int gate_shift; int gate_offset; int muxdiv_offset; int clkdef; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct rk_clk_composite_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int
FUNC_3(struct clkdom *VAR_1,
    struct rk_clk_composite_def *VAR_2)
{
 struct clknode *VAR_3;
 struct rk_clk_composite_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0,
     &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->muxdiv_offset = VAR_2->muxdiv_offset;

 VAR_4->mux_shift = VAR_2->mux_shift;
 VAR_4->mux_width = VAR_2->mux_width;
 VAR_4->mux_mask = ((1 << VAR_2->mux_width) - 1) << VAR_4->mux_shift;

 VAR_4->div_shift = VAR_2->div_shift;
 VAR_4->div_width = VAR_2->div_width;
 VAR_4->div_mask = ((1 << VAR_2->div_width) - 1) << VAR_4->div_shift;

 VAR_4->gate_offset = VAR_2->gate_offset;
 VAR_4->gate_shift = VAR_2->gate_shift;

 VAR_4->flags = VAR_2->flags;

 FUNC_2(VAR_1, VAR_3);

 return (0);
}
