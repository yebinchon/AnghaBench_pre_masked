
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rk_clk_pll_sc {scalar_t__ base_offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,scalar_t__,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct rk_clk_pll_sc* FUNC_3 (struct clknode*) ;

__attribute__((used)) static int
FUNC_4(struct clknode *VAR_12, uint64_t *VAR_13)
{
 struct rk_clk_pll_sc *VAR_14;
 uint64_t VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24;

 VAR_14 = FUNC_3(VAR_12);

 FUNC_0(VAR_12);

 FUNC_2(VAR_12, VAR_14->base_offset, &VAR_22);
 FUNC_2(VAR_12, VAR_14->base_offset + 4, &VAR_23);
 FUNC_2(VAR_12, VAR_14->base_offset + 8, &VAR_24);

 VAR_18 = (VAR_22 & VAR_2) >> VAR_3;
 VAR_19 = (VAR_22 & VAR_6) >> VAR_7;

 VAR_16 = (VAR_23 & VAR_0) >> VAR_1;
 VAR_17 = (VAR_23 & VAR_10) >> VAR_11;
 VAR_20 = (VAR_23 & VAR_8) >> VAR_9;

 VAR_21 = (VAR_24 & VAR_4) >> VAR_5;

 FUNC_1(VAR_12);

 VAR_15 = *VAR_13 * VAR_18 / VAR_17;
 if (VAR_16 == 0) {

  uint64_t VAR_25;

  VAR_25 = *VAR_13 * VAR_21 / VAR_17;
  VAR_15 += VAR_25 >> 24;
 }

 *VAR_13 = VAR_15 / VAR_19 / VAR_20;

 if (*VAR_13 % 2)
  *VAR_13 = *VAR_13 + 1;

 return (0);
}
