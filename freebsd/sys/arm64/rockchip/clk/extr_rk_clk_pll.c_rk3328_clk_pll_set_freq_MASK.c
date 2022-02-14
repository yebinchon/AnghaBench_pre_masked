
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct rk_clk_pll_sc {int mode_shift; scalar_t__ mode_reg; scalar_t__ base_offset; struct rk_clk_pll_rate* frac_rates; struct rk_clk_pll_rate* rates; } ;
struct rk_clk_pll_rate {scalar_t__ freq; int postdiv1; int fbdiv; int dsmpd; int postdiv2; int refdiv; int frac; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct clknode*,scalar_t__,int) ;
 struct rk_clk_pll_sc* FUNC_5 (struct clknode*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(struct clknode *VAR_17, uint64_t VAR_18, uint64_t *VAR_19,
    int VAR_20, int *VAR_21)
{
 struct rk_clk_pll_rate *VAR_22;
 struct rk_clk_pll_sc *VAR_23;
 uint32_t VAR_24;
 int VAR_25;

 VAR_23 = FUNC_5(VAR_17);

 if (VAR_23->rates)
  VAR_22 = VAR_23->rates;
 else if (VAR_23->frac_rates)
  VAR_22 = VAR_23->frac_rates;
 else
  return (VAR_0);

 for (; VAR_22->freq; VAR_22++) {
  if (VAR_22->freq == *VAR_19)
   break;
 }
 if (VAR_22->freq == 0) {
  *VAR_21 = 1;
  return (VAR_0);
 }

 FUNC_1(VAR_17);


 VAR_24 = (VAR_8 << VAR_23->mode_shift) <<
  VAR_16;
 FUNC_6("Set PLL_MODEREG to %x\n", VAR_24);
 FUNC_4(VAR_17, VAR_23->mode_reg, VAR_24);


 VAR_24 = (VAR_22->postdiv1 << VAR_11) |
  (VAR_22->fbdiv << VAR_4);
 VAR_24 |= (VAR_10 | VAR_3) << 16;
 FUNC_6("Set PLL_CON0 to %x\n", VAR_24);
 FUNC_4(VAR_17, VAR_23->base_offset, VAR_24);


 VAR_24 = (VAR_22->dsmpd << VAR_2) |
  (VAR_22->postdiv2 << VAR_13) |
  (VAR_22->refdiv << VAR_15);
 VAR_24 |= (VAR_1 |
     VAR_12 |
     VAR_14) << VAR_16;
 FUNC_6("Set PLL_CON1 to %x\n", VAR_24);
 FUNC_4(VAR_17, VAR_23->base_offset + 0x4, VAR_24);


 FUNC_3(VAR_17, VAR_23->base_offset + 0x8, &VAR_24);
 VAR_24 &= ~VAR_5;
 VAR_24 |= VAR_22->frac << VAR_6;
 FUNC_6("Set PLL_CON2 to %x\n", VAR_24);
 FUNC_4(VAR_17, VAR_23->base_offset + 0x8, VAR_24);


 for (VAR_25 = 1000; VAR_25; VAR_25--) {
  FUNC_3(VAR_17, VAR_23->base_offset + 0x4, &VAR_24);
  if ((VAR_24 & VAR_7) == 0)
   break;
  FUNC_0(1);
 }


 VAR_24 = (VAR_9 << VAR_23->mode_shift);
 VAR_24 |= (VAR_8 << VAR_23->mode_shift) <<
  VAR_16;
 FUNC_6("Set PLL_MODEREG to %x\n", VAR_24);
 FUNC_4(VAR_17, VAR_23->mode_reg, VAR_24);

 FUNC_2(VAR_17);

 *VAR_21 = 1;
 return (0);
}
