
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_clk_pll_sc {int clk_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct jz4780_clk_pll_sc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct jz4780_clk_pll_sc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (FUNC_0(VAR_3, VAR_3->clk_reg) & FUNC_2(VAR_0, 1))
   return (0);
  FUNC_1(1000);
 }
 return (VAR_1);
}
