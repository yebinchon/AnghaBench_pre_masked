
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_sc {int mnp_bits; int pdiv_table; int flags; int iddq_mask; int iddq_reg; int lock_enable; int lock_mask; int misc_reg; int base_reg; int type; int clkdev; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct clk_pll_def {int mnp_bits; int pdiv_table; int flags; int iddq_mask; int iddq_reg; int lock_enable; int lock_mask; int misc_reg; int base_reg; int type; int clkdef; } ;


 int VAR_0 ;
 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 int FUNC_1 (struct clknode*) ;
 struct pll_sc* FUNC_2 (struct clknode*) ;
 int FUNC_3 (struct clkdom*,struct clknode*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct clkdom *VAR_2, struct clk_pll_def *VAR_3)
{
 struct clknode *VAR_4;
 struct pll_sc *VAR_5;

 VAR_4 = FUNC_0(VAR_2, &VAR_1, &VAR_3->clkdef);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->clkdev = FUNC_1(VAR_4);
 VAR_5->type = VAR_3->type;
 VAR_5->base_reg = VAR_3->base_reg;
 VAR_5->misc_reg = VAR_3->misc_reg;
 VAR_5->lock_mask = VAR_3->lock_mask;
 VAR_5->lock_enable = VAR_3->lock_enable;
 VAR_5->iddq_reg = VAR_3->iddq_reg;
 VAR_5->iddq_mask = VAR_3->iddq_mask;
 VAR_5->flags = VAR_3->flags;
 VAR_5->pdiv_table = VAR_3->pdiv_table;
 VAR_5->mnp_bits = VAR_3->mnp_bits;
 FUNC_3(VAR_2, VAR_4);
 return (0);
}
