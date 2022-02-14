
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode_gate_sc {int gate_flags; int off_value; int on_value; int mask; int shift; int offset; } ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
struct clk_gate_def {int gate_flags; int off_value; int on_value; int mask; int shift; int offset; int clkdef; } ;


 struct clknode* FUNC_0 (struct clkdom*,int *,int *) ;
 int VAR_0 ;
 struct clknode_gate_sc* FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clkdom*,struct clknode*) ;

int
FUNC_3(struct clkdom *VAR_1, struct clk_gate_def *VAR_2)
{
 struct clknode *VAR_3;
 struct clknode_gate_sc *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_0, &VAR_2->clkdef);
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->offset = VAR_2->offset;
 VAR_4->shift = VAR_2->shift;
 VAR_4->mask = VAR_2->mask;
 VAR_4->on_value = VAR_2->on_value;
 VAR_4->off_value = VAR_2->off_value;
 VAR_4->gate_flags = VAR_2->gate_flags;

 FUNC_2(VAR_1, VAR_3);
 return (0);
}
