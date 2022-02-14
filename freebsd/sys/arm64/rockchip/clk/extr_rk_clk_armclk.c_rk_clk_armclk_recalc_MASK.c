
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rk_clk_armclk_sc {int muxdiv_offset; int div_mask; int div_shift; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int,int*) ;
 struct rk_clk_armclk_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, uint64_t *VAR_1)
{
 struct rk_clk_armclk_sc *VAR_2;
 uint32_t VAR_3, VAR_4;

 VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_2->muxdiv_offset, &VAR_3);
 FUNC_4("Read: muxdiv_offset=%x, val=%x\n", VAR_2->muxdiv_offset, VAR_3);

 FUNC_1(VAR_0);

 VAR_4 = ((VAR_3 & VAR_2->div_mask) >> VAR_2->div_shift) + 1;
 FUNC_4("parent_freq=%ju, div=%u\n", *VAR_1, VAR_4);

 *VAR_1 = *VAR_1 / VAR_4;

 return (0);
}
