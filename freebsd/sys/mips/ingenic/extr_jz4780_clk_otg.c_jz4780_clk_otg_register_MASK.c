
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mtx {int dummy; } ;
struct jz4780_clk_otg_sc {struct resource* clk_res; struct mtx* clk_mtx; } ;
struct clknode_init_def {int dummy; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,struct clknode_init_def*) ;
 struct jz4780_clk_otg_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

int FUNC_3(struct clkdom *VAR_1,
    struct clknode_init_def *VAR_2, struct mtx *VAR_3,
    struct resource *VAR_4)
{
 struct clknode *VAR_5;
 struct jz4780_clk_otg_sc *VAR_6;

 VAR_5 = FUNC_0(VAR_1, &VAR_0, VAR_2);
 if (VAR_5 == ((void*)0))
  return (1);

 VAR_6 = FUNC_1(VAR_5);
 VAR_6->clk_mtx = VAR_3;
 VAR_6->clk_res = VAR_4;
 FUNC_2(VAR_1, VAR_5);
 return (0);
}
