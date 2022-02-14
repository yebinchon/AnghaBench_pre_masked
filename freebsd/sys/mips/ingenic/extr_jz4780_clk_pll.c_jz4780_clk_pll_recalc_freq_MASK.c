
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct jz4780_clk_pll_sc {int clk_reg; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct jz4780_clk_pll_sc*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int ) ;
 struct jz4780_clk_pll_sc* FUNC_2 (struct clknode*) ;

__attribute__((used)) static int
FUNC_3(struct clknode *VAR_6, uint64_t *VAR_7)
{
 struct jz4780_clk_pll_sc *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_0(VAR_8, VAR_8->clk_reg);


 if (FUNC_1(VAR_9, VAR_1) == 0) {
  *VAR_7 = 0;
  return 0;
 }


 if (FUNC_1(VAR_9, VAR_0) != 0)
  return 0;

 VAR_10 = FUNC_1(VAR_9, VAR_2) + 1;
 VAR_11 = FUNC_1(VAR_9, VAR_3) + 1;
 VAR_12 = FUNC_1(VAR_9, VAR_4) + 1;


 if (VAR_10 == 0 || VAR_11 == 0 || VAR_12 == 0) {
  *VAR_7 = 0;
  return (VAR_5);
 }

 *VAR_7 = ((*VAR_7 / VAR_11) * VAR_10) / VAR_12;
 return (0);
}
