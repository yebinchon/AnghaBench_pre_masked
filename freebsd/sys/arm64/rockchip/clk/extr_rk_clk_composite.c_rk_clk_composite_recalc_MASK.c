
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rk_clk_composite_sc {int div_mask; int div_shift; int flags; int muxdiv_offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int VAR_0 ;
 struct rk_clk_composite_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, uint64_t *VAR_2)
{
 struct rk_clk_composite_sc *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_1);

 FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_3->muxdiv_offset, &VAR_4);
 FUNC_4("Read: muxdiv_offset=%x, val=%x\n", VAR_3->muxdiv_offset, VAR_4);

 FUNC_1(VAR_1);

 VAR_5 = ((VAR_4 & VAR_3->div_mask) >> VAR_3->div_shift);
 if (VAR_3->flags & VAR_0)
  VAR_5 = 1 << VAR_5;
 else
  VAR_5 += 1;
 FUNC_4("parent_freq=%ju, div=%u\n", *VAR_2, VAR_5);
 *VAR_2 = *VAR_2 / VAR_5;
 FUNC_4("Final freq=%ju\n", *VAR_2);
 return (0);
}
