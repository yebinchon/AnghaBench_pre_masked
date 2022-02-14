
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct periph_sc {int div_width; int div_mask; int div_f_width; int div_f_mask; int flags; int base_reg; int clkdev; } ;
struct periph_def {int div_width; int div_f_width; int flags; int base_reg; int clkdef; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 int FUNC_1 (struct clknode*) ;
 struct periph_sc* FUNC_2 (struct clknode*) ;
 int FUNC_3 (struct clkdom*,struct clknode*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct clkdom *VAR_1, struct periph_def *VAR_2)
{
 struct clknode *VAR_3;
 struct periph_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->clkdev = FUNC_1(VAR_3);
 VAR_4->base_reg = VAR_2->base_reg;
 VAR_4->div_width = VAR_2->div_width;
 VAR_4->div_mask = (1 <<VAR_2->div_width) - 1;
 VAR_4->div_f_width = VAR_2->div_f_width;
 VAR_4->div_f_mask = (1 <<VAR_2->div_f_width) - 1;
 VAR_4->flags = VAR_2->flags;

 FUNC_3(VAR_1, VAR_3);
 return (0);
}
