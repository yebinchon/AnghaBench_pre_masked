
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_clk_nkmp_sc {int flags; int mux_mask; int mux_shift; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 int FUNC_3 (struct clknode*,int ,int) ;
 struct aw_clk_nkmp_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, int VAR_2)
{
 struct aw_clk_nkmp_sc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_4(VAR_1);

 if ((VAR_3->flags & VAR_0) == 0)
  return (0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_3->offset, &VAR_4);
 VAR_4 &= ~VAR_3->mux_mask;
 VAR_4 |= VAR_2 << VAR_3->mux_shift;
 FUNC_3(VAR_1, VAR_3->offset, VAR_4);
 FUNC_1(VAR_1);

 return (0);
}
