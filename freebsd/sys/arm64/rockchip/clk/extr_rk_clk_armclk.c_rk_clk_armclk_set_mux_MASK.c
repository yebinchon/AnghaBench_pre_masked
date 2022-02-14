
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_armclk_sc {int mux_shift; int mux_mask; int muxdiv_offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int VAR_0 ;
 int FUNC_2 (struct clknode*,int ,int) ;
 struct rk_clk_armclk_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, int VAR_2)
{
 struct rk_clk_armclk_sc *VAR_3;
 uint32_t VAR_4 = 0;

 VAR_3 = FUNC_3(VAR_1);

 FUNC_4("Set mux to %d\n", VAR_2);
 FUNC_0(VAR_1);
 VAR_4 |= VAR_2 << VAR_3->mux_shift;
 VAR_4 |= VAR_3->mux_mask << VAR_0;
 FUNC_4("Write: muxdiv_offset=%x, val=%x\n", VAR_3->muxdiv_offset, VAR_4);
 FUNC_2(VAR_1, VAR_3->muxdiv_offset, VAR_4);
 FUNC_1(VAR_1);

 return (0);
}
