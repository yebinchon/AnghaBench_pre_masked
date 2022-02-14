
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_clk_fract_sc {int offset; int flags; } ;
struct rk_clk_fract_def {int offset; int flags; int clkdef; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 struct rk_clk_fract_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int
FUNC_3(struct clkdom *VAR_1, struct rk_clk_fract_def *VAR_2)
{
 struct clknode *VAR_3;
 struct rk_clk_fract_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->flags = VAR_2->flags;
 VAR_4->offset = VAR_2->offset;

 FUNC_2(VAR_1, VAR_3);
 return (0);
}
