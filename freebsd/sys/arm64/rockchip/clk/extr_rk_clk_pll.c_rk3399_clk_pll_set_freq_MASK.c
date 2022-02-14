
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct rk_clk_pll_sc {scalar_t__ base_offset; struct rk_clk_pll_rate* frac_rates; struct rk_clk_pll_rate* rates; } ;
struct rk_clk_pll_rate {scalar_t__ freq; int fbdiv; int postdiv1; int postdiv2; int refdiv; int frac; int dsmpd; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_0 ;
 int FUNC_3 (struct clknode*,scalar_t__,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct clknode*,scalar_t__,int) ;
 struct rk_clk_pll_sc* FUNC_5 (struct clknode*) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_21, uint64_t VAR_22, uint64_t *VAR_23,
    int VAR_24, int *VAR_25)
{
 struct rk_clk_pll_rate *VAR_26;
 struct rk_clk_pll_sc *VAR_27;
 uint32_t VAR_28;
 int VAR_29;

 VAR_27 = FUNC_5(VAR_21);

 if (VAR_27->rates)
  VAR_26 = VAR_27->rates;
 else if (VAR_27->frac_rates)
  VAR_26 = VAR_27->frac_rates;
 else
  return (VAR_0);

 for (; VAR_26->freq; VAR_26++) {
  if (VAR_26->freq == *VAR_23)
   break;
 }
 if (VAR_26->freq == 0) {
  *VAR_25 = 1;
  return (VAR_0);
 }

 FUNC_1(VAR_21);


 VAR_28 = VAR_12 << VAR_11;
 VAR_28 |= VAR_9 << VAR_20;
 FUNC_4(VAR_21, VAR_27->base_offset + 0xC, VAR_28);


 VAR_28 = VAR_26->fbdiv << VAR_4;
 VAR_28 |= VAR_3 << VAR_20;
 FUNC_4(VAR_21, VAR_27->base_offset, VAR_28);


 VAR_28 = VAR_26->postdiv1 << VAR_14;
 VAR_28 |= VAR_26->postdiv2 << VAR_16;
 VAR_28 |= VAR_26->refdiv << VAR_18;
 VAR_28 |= (VAR_13 | VAR_15 |
     VAR_17) << VAR_20;
 FUNC_4(VAR_21, VAR_27->base_offset + 0x4, VAR_28);


 FUNC_3(VAR_21, VAR_27->base_offset + 0x8, &VAR_28);
 VAR_28 &= ~VAR_5;
 VAR_28 |= VAR_26->frac << VAR_6;
 FUNC_4(VAR_21, VAR_27->base_offset + 0x8, VAR_28 | VAR_19);


 VAR_28 = VAR_26->dsmpd << VAR_2;
 VAR_28 |= VAR_1 << VAR_20;
 FUNC_4(VAR_21, VAR_27->base_offset + 0xC, VAR_28);


 for (VAR_29 = 1000; VAR_29; VAR_29--) {
  FUNC_3(VAR_21, VAR_27->base_offset + VAR_8, &VAR_28);
  if ((VAR_28 & VAR_7) == 0)
   break;
  FUNC_0(1);
 }


 VAR_28 = VAR_10 << VAR_11;
 VAR_28 |= VAR_9 << VAR_20;
 FUNC_4(VAR_21, VAR_27->base_offset + 0xC, VAR_28);

 FUNC_2(VAR_21);

 *VAR_25 = 1;
 return (0);
}
