
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_clk_gate_sc {int shift; int mask; int ungated; int on_value; int offset; } ;
struct clknode {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int*) ;
 struct rk_clk_gate_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int ) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, device_t VAR_1)
{
 uint32_t VAR_2;
 struct rk_clk_gate_sc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_3->offset, &VAR_2);
 FUNC_1(VAR_0);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_2 = (VAR_2 >> VAR_3->shift) & VAR_3->mask;
 VAR_3->ungated = VAR_2 == VAR_3->on_value ? 1 : 0;
 FUNC_4(VAR_0, 0);
 return(0);
}
