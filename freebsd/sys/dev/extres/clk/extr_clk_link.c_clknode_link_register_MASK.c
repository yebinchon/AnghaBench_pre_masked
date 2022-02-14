
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_init_def {int flags; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct clk_link_def {struct clknode_init_def clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,struct clknode_init_def*) ;
 int VAR_1 ;
 int FUNC_1 (struct clkdom*,struct clknode*) ;

int
FUNC_2(struct clkdom *VAR_2, struct clk_link_def *VAR_3)
{
 struct clknode *VAR_4;
 struct clknode_init_def VAR_5;

 VAR_5 = VAR_3->clkdef;
 VAR_5.flags |= VAR_0;
 VAR_4 = FUNC_0(VAR_2, &VAR_1, &VAR_5);
 if (VAR_4 == ((void*)0))
  return (1);
 FUNC_1(VAR_2, VAR_4);
 return (0);
}
