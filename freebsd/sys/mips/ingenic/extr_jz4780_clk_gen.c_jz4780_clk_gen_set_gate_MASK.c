
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_clk_gen_sc {TYPE_1__* clk_descr; } ;
struct clknode {int dummy; } ;
struct TYPE_2__ {scalar_t__ clk_gate_bit; } ;


 int FUNC_0 (struct jz4780_clk_gen_sc*) ;
 int FUNC_1 (struct jz4780_clk_gen_sc*,int) ;
 int FUNC_2 (struct jz4780_clk_gen_sc*) ;
 int FUNC_3 (struct jz4780_clk_gen_sc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct jz4780_clk_gen_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_2, bool VAR_3)
{
 struct jz4780_clk_gen_sc *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_4(VAR_2);


 if (VAR_4->clk_descr->clk_gate_bit < 0)
  return 0;

 VAR_7 = VAR_4->clk_descr->clk_gate_bit;
 if (VAR_7 < 32) {
  VAR_5 = VAR_0;
 } else {
  VAR_5 = VAR_1;
  VAR_7 -= 32;
 }

 FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_3)
  VAR_6 &= ~(1u << VAR_7);
 else
  VAR_6 |= (1u << VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_4);

 return (0);
}
