
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_armclk_sc {int mux_mask; int mux_shift; int muxdiv_offset; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 struct rk_clk_armclk_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, device_t VAR_1)
{
 struct rk_clk_armclk_sc *VAR_2;
 uint32_t VAR_3, VAR_4;

 VAR_2 = FUNC_3(VAR_0);

 VAR_4 = 0;
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_2->muxdiv_offset, &VAR_3);
 FUNC_1(VAR_0);

 VAR_4 = (VAR_3 & VAR_2->mux_mask) >> VAR_2->mux_shift;

 FUNC_4(VAR_0, VAR_4);

 return (0);
}
