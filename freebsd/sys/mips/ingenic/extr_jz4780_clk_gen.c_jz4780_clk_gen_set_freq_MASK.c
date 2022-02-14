
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct jz4780_clk_gen_sc {TYPE_2__* clk_descr; } ;
struct clknode {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int div_lg; unsigned int div_bits; int div_shift; unsigned int div_ce_bit; unsigned int div_st_bit; unsigned int div_busy_bit; int div_reg; } ;
struct TYPE_4__ {TYPE_1__ clk_div; } ;


 int FUNC_0 (struct jz4780_clk_gen_sc*) ;
 int FUNC_1 (struct jz4780_clk_gen_sc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct jz4780_clk_gen_sc*) ;
 int FUNC_3 (struct jz4780_clk_gen_sc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct jz4780_clk_gen_sc* FUNC_6 (struct clknode*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int
FUNC_8(struct clknode *VAR_6, uint64_t VAR_7,
    uint64_t *VAR_8, int VAR_9, int *VAR_10)
{
 struct jz4780_clk_gen_sc *VAR_11;
 uint64_t VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_11 = FUNC_6(VAR_6);


 VAR_17 = FUNC_7(VAR_7, *VAR_8);
 VAR_18 = VAR_7 / *VAR_8;
 VAR_13 = FUNC_5((int64_t)*VAR_8 - (VAR_7 / VAR_17)) <
     FUNC_5((int64_t)*VAR_8 - (VAR_7 / VAR_18)) ? VAR_17 : VAR_18;


 VAR_14 = VAR_13 >> VAR_11->clk_descr->clk_div.div_lg;
 VAR_13 = VAR_14 << VAR_11->clk_descr->clk_div.div_lg;
 if (VAR_13 == 0)
  VAR_13 = 1;

 VAR_12 = VAR_7 / VAR_13;


 if ((VAR_9 & VAR_2) && (*VAR_8 > VAR_12))
  VAR_14--;
 else if ((VAR_9 & VAR_1) && (*VAR_8 < VAR_12))
  VAR_14++;
 if (VAR_14 == 0)
  VAR_14 = 1;

 VAR_15 = (1u << VAR_11->clk_descr->clk_div.div_bits) - 1;

 *VAR_10 = 1;
 if (VAR_14 > VAR_15 + 1) {
  *VAR_10 = 0;
  VAR_14 = VAR_15;
 }

 VAR_13 = (VAR_14 << VAR_11->clk_descr->clk_div.div_lg);
 VAR_14--;

 if ((VAR_9 & VAR_0) != 0) {
  if (*VAR_10 != 0 && *VAR_8 != VAR_7 / VAR_13 &&
      (VAR_9 & (VAR_2 | VAR_1)) == 0)
   return (VAR_4);
  *VAR_8 = VAR_7 / VAR_13;
  return (0);
 }

 FUNC_0(VAR_11);

 VAR_16 = FUNC_1(VAR_11, VAR_11->clk_descr->clk_div.div_reg);
 VAR_16 &= ~(VAR_15 << VAR_11->clk_descr->clk_div.div_shift);
 VAR_16 |= (VAR_14 << VAR_11->clk_descr->clk_div.div_shift);

 if (VAR_11->clk_descr->clk_div.div_ce_bit >= 0)
  VAR_16 |= (1u << VAR_11->clk_descr->clk_div.div_ce_bit);

 if (VAR_11->clk_descr->clk_div.div_st_bit >= 0)
  VAR_16 &= ~(1u << VAR_11->clk_descr->clk_div.div_st_bit);

 FUNC_3(VAR_11, VAR_11->clk_descr->clk_div.div_reg, VAR_16);


 VAR_19 = 0;
 if (VAR_11->clk_descr->clk_div.div_busy_bit >= 0) {
  int VAR_20;

  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
   VAR_16 = FUNC_1(VAR_11, VAR_11->clk_descr->clk_div.div_reg);
   if (!(VAR_16 & (1u << VAR_11->clk_descr->clk_div.div_busy_bit)))
    break;
   FUNC_4(1000);
  }
  if (VAR_20 == VAR_3)
   VAR_19 = VAR_5;
 }
 FUNC_2(VAR_11);

 *VAR_8 = VAR_7 / VAR_13;
 return (VAR_19);
}
