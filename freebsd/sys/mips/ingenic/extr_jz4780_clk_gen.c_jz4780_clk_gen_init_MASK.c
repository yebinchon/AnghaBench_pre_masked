
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jz4780_clk_gen_sc {TYPE_2__* clk_descr; } ;
struct clknode {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {unsigned int mux_bits; int mux_shift; int mux_map; int mux_reg; } ;
struct TYPE_4__ {int clk_type; TYPE_1__ clk_mux; } ;


 int FUNC_0 (struct jz4780_clk_gen_sc*) ;
 int VAR_0 ;
 int FUNC_1 (struct jz4780_clk_gen_sc*,int ) ;
 int FUNC_2 (struct jz4780_clk_gen_sc*) ;
 struct jz4780_clk_gen_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct clknode *VAR_1, device_t VAR_2)
{
 struct jz4780_clk_gen_sc *VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_3(VAR_1);
 FUNC_0(VAR_3);

 if (VAR_3->clk_descr->clk_type & VAR_0) {
  VAR_5 = (1u << VAR_3->clk_descr->clk_mux.mux_bits) - 1;
  VAR_4 = FUNC_1(VAR_3, VAR_3->clk_descr->clk_mux.mux_reg);
  VAR_4 = (VAR_4 >> VAR_3->clk_descr->clk_mux.mux_shift) & VAR_5;
  VAR_6 = FUNC_5(VAR_4, VAR_3->clk_descr->clk_mux.mux_map);
 } else
  VAR_6 = 0;
 FUNC_2(VAR_3);

 FUNC_4(VAR_1, VAR_6);
 return (0);
}
