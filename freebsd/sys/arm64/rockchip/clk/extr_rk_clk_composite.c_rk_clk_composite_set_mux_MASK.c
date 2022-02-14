
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_composite_sc {int flags; int mux_shift; int mux_mask; int muxdiv_offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct clknode*,int ,int) ;
 struct rk_clk_composite_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_2, int VAR_3)
{
 struct rk_clk_composite_sc *VAR_4;
 uint32_t VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_2);

 if ((VAR_4->flags & VAR_0) == 0)
  return (0);

 FUNC_4("Set mux to %d\n", VAR_3);
 FUNC_0(VAR_2);
 VAR_5 |= (VAR_3 << VAR_4->mux_shift);
 VAR_5 |= VAR_4->mux_mask << VAR_1;
 FUNC_4("Write: muxdiv_offset=%x, val=%x\n", VAR_4->muxdiv_offset, VAR_5);
 FUNC_2(VAR_2, VAR_4->muxdiv_offset, VAR_5);
 FUNC_1(VAR_2);

 return (0);
}
