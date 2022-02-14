
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
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct jz4780_clk_pll_sc*) ;
 int FUNC_1 (struct jz4780_clk_pll_sc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct jz4780_clk_pll_sc*) ;
 int FUNC_3 (struct jz4780_clk_pll_sc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int) ;
 struct jz4780_clk_pll_sc* FUNC_6 (struct clknode*) ;
 int FUNC_7 (struct jz4780_clk_pll_sc*) ;

__attribute__((used)) static int
FUNC_8(struct clknode *VAR_12, uint64_t VAR_13,
    uint64_t *VAR_14, int VAR_15, int *VAR_16)
{
 struct jz4780_clk_pll_sc *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 VAR_17 = FUNC_6(VAR_12);


 VAR_21 = 1;

 VAR_19 = FUNC_4((uint32_t)(*VAR_14 / VAR_11), (1u << VAR_3));
 VAR_19 = FUNC_4(VAR_19, 1);

 VAR_20 = FUNC_4((uint32_t)(VAR_13 / VAR_11), (1u << VAR_5));
 VAR_20 = FUNC_4(VAR_20, 1);

 if (VAR_15 & VAR_7) {
  if (((VAR_15 & (VAR_9 | VAR_8)) == 0) &&
      (*VAR_14 != (((VAR_13 / VAR_20) * VAR_19) / VAR_21)))
  return (VAR_10);

  *VAR_14 = ((VAR_13 / VAR_20) * VAR_19) / VAR_21;
  return (0);
 }

 FUNC_0(VAR_17);
 VAR_18 = FUNC_1(VAR_17, VAR_17->clk_reg);


 VAR_18 = FUNC_5(VAR_18, VAR_2, VAR_19 - 1);
 VAR_18 = FUNC_5(VAR_18, VAR_4, VAR_20 - 1);
 VAR_18 = FUNC_5(VAR_18, VAR_6, VAR_21 - 1);


 VAR_18 = FUNC_5(VAR_18, VAR_1, 1);
 VAR_18 = FUNC_5(VAR_18, VAR_0, 0);


 FUNC_3(VAR_17, VAR_17->clk_reg, VAR_18);


 VAR_22 = FUNC_7(VAR_17);
 FUNC_2(VAR_17);
 if (VAR_22 != 0)
  return (VAR_22);

 *VAR_14 = ((VAR_13 / VAR_20) * VAR_19) / VAR_21;
 return (0);
}
