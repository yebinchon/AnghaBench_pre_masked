
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_clk_gen_sc {TYPE_2__* clk_descr; } ;
struct clknode {int dummy; } ;
struct TYPE_3__ {unsigned int mux_bits; int mux_shift; int mux_reg; int mux_map; } ;
struct TYPE_4__ {int clk_type; TYPE_1__ clk_mux; } ;


 int FUNC_0 (struct jz4780_clk_gen_sc*) ;
 int VAR_0 ;
 int FUNC_1 (struct jz4780_clk_gen_sc*,int ) ;
 int FUNC_2 (struct jz4780_clk_gen_sc*) ;
 int FUNC_3 (struct jz4780_clk_gen_sc*,int ,int) ;
 int VAR_1 ;
 struct jz4780_clk_gen_sc* FUNC_4 (struct clknode*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_2, int VAR_3)
{
 struct jz4780_clk_gen_sc *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_4 = FUNC_4(VAR_2);


 if (!(VAR_4->clk_descr->clk_type & VAR_0))
  return (VAR_3 ? VAR_1 : 0);

 VAR_6 = (1u << VAR_4->clk_descr->clk_mux.mux_bits) - 1;
 VAR_3 = FUNC_5(VAR_3 & VAR_6, VAR_4->clk_descr->clk_mux.mux_map);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_4->clk_descr->clk_mux.mux_reg);
 VAR_5 &= ~(VAR_6 << VAR_4->clk_descr->clk_mux.mux_shift);
 VAR_5 |= (VAR_3 << VAR_4->clk_descr->clk_mux.mux_shift);
 FUNC_3(VAR_4, VAR_4->clk_descr->clk_mux.mux_reg, VAR_5);
 FUNC_2(VAR_4);

 return (0);
}
