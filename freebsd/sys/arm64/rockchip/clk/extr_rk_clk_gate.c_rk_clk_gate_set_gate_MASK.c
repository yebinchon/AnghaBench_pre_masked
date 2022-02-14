
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_gate_sc {int ungated; int mask; int shift; int on_value; int off_value; int offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int,int) ;
 int FUNC_3 (struct clknode*,int ,int *) ;
 int VAR_0 ;
 struct rk_clk_gate_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_1, bool VAR_2)
{
 uint32_t VAR_3;
 struct rk_clk_gate_sc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1);
 VAR_4->ungated = VAR_2;
 FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_1, VAR_4->offset, VAR_4->mask << VAR_4->shift,
     ((VAR_4->ungated ? VAR_4->on_value : VAR_4->off_value) << VAR_4->shift) |
     VAR_0);
 if (VAR_5 != 0) {
  FUNC_1(VAR_1);
  return (VAR_5);
 }
 FUNC_3(VAR_1, VAR_4->offset, &VAR_3);
 FUNC_1(VAR_1);
 return(0);
}
