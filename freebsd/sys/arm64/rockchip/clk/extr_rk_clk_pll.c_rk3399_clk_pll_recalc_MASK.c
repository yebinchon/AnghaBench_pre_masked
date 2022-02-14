
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct rk_clk_pll_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_16, uint64_t *VAR_17)
{
 struct rk_clk_pll_sc *VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26, VAR_27, VAR_28;
 uint64_t VAR_29;
 uint32_t VAR_30;
 VAR_18 = FUNC_3(VAR_16);

 FUNC_0(VAR_16);
 FUNC_2(VAR_16, VAR_18->base_offset, &VAR_25);
 FUNC_2(VAR_16, VAR_18->base_offset + 4, &VAR_26);
 FUNC_2(VAR_16, VAR_18->base_offset + 8, &VAR_27);
 FUNC_2(VAR_16, VAR_18->base_offset + 0xC, &VAR_28);
 FUNC_1(VAR_16);






 VAR_30 = (VAR_28 & VAR_7) >> VAR_8;
 if (VAR_30 == VAR_9) {
  FUNC_4("pll in slow mode, con4=%x\n", VAR_28);
  return (0);
 } else if (VAR_30 == VAR_6) {
  FUNC_4("pll in deep slow, con4=%x\n", VAR_28);
  *VAR_17 = 32768;
  return (0);
 }

 FUNC_4("con0: %x\n", VAR_25);
 FUNC_4("con1: %x\n", VAR_26);
 FUNC_4("con2: %x\n", VAR_27);
 FUNC_4("con3: %x\n", VAR_28);

 VAR_21 = (VAR_25 & VAR_2)
     >> VAR_3;

 VAR_22 = (VAR_26 & VAR_10)
     >> VAR_11;
 VAR_23 = (VAR_26 & VAR_12)
     >> VAR_13;
 VAR_20 = (VAR_26 & VAR_14)
     >> VAR_15;

 VAR_24 = (VAR_27 & VAR_4)
     >> VAR_5;
 VAR_24 >>= 24;

 VAR_19 = (VAR_28 & VAR_0) >> VAR_1;

 FUNC_4("fbdiv: %d\n", VAR_21);
 FUNC_4("postdiv1: %d\n", VAR_22);
 FUNC_4("postdiv2: %d\n", VAR_23);
 FUNC_4("refdiv: %d\n", VAR_20);
 FUNC_4("fracdiv: %d\n", VAR_24);
 FUNC_4("dsmpd: %d\n", VAR_19);

 FUNC_4("parent freq=%ju\n", *VAR_17);

 if (VAR_19 == 0) {

  VAR_29 = *VAR_17 / VAR_20 * (VAR_21 + VAR_24);
 } else {

  VAR_29 = *VAR_17 / VAR_20 * VAR_21;
 }
 FUNC_4("foutvco: %ju\n", VAR_29);

 *VAR_17 = VAR_29 / VAR_22 / VAR_23;
 FUNC_4("freq: %ju\n", *VAR_17);

 return (0);
}
