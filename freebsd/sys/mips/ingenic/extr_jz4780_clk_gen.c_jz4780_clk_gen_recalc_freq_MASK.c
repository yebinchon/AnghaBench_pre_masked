
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
struct TYPE_3__ {unsigned int div_bits; int div_shift; int div_lg; int div_reg; } ;
struct TYPE_4__ {int clk_type; TYPE_1__ clk_div; } ;


 int VAR_0 ;
 int FUNC_0 (struct jz4780_clk_gen_sc*,int ) ;
 struct jz4780_clk_gen_sc* FUNC_1 (struct clknode*) ;

__attribute__((used)) static int
FUNC_2(struct clknode *VAR_1, uint64_t *VAR_2)
{
 struct jz4780_clk_gen_sc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_1(VAR_1);


 if (VAR_3->clk_descr->clk_type & VAR_0) {
  uint32_t VAR_5;

  VAR_5 = (1u << VAR_3->clk_descr->clk_div.div_bits) - 1;
  VAR_4 = FUNC_0(VAR_3, VAR_3->clk_descr->clk_div.div_reg);
  VAR_4 = (VAR_4 >> VAR_3->clk_descr->clk_div.div_shift) & VAR_5;
  VAR_4 = (VAR_4 + 1) << VAR_3->clk_descr->clk_div.div_lg;
  *VAR_2 /= VAR_4;
 }
 return (0);
}
