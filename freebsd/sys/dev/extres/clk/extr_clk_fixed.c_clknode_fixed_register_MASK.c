
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_fixed_sc {int div; int mult; int freq; int fixed_flags; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct clk_fixed_def {int div; int mult; int freq; int fixed_flags; int clkdef; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 int VAR_0 ;
 struct clknode_fixed_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct clk_fixed_def *VAR_2)
{
 struct clknode *VAR_3;
 struct clknode_fixed_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->fixed_flags = VAR_2->fixed_flags;
 VAR_4->freq = VAR_2->freq;
 VAR_4->mult = VAR_2->mult;
 VAR_4->div = VAR_2->div;

 FUNC_2(VAR_1, VAR_3);
 return (0);
}
