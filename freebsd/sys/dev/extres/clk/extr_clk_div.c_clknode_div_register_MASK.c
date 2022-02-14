
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_div_sc {int i_width; int i_mask; int f_width; int f_mask; int div_table; int div_flags; int f_shift; int i_shift; int offset; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct clk_div_def {int i_width; int f_width; int div_table; int div_flags; int f_shift; int i_shift; int offset; int clkdef; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 int VAR_0 ;
 struct clknode_div_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct clk_div_def *VAR_2)
{
 struct clknode *VAR_3;
 struct clknode_div_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->offset = VAR_2->offset;
 VAR_4->i_shift = VAR_2->i_shift;
 VAR_4->i_width = VAR_2->i_width;
 VAR_4->i_mask = (1 << VAR_2->i_width) - 1;
 VAR_4->f_shift = VAR_2->f_shift;
 VAR_4->f_width = VAR_2->f_width;
 VAR_4->f_mask = (1 << VAR_2->f_width) - 1;
 VAR_4->div_flags = VAR_2->div_flags;
 VAR_4->div_table = VAR_2->div_table;

 FUNC_2(VAR_1, VAR_3);
 return (0);
}
