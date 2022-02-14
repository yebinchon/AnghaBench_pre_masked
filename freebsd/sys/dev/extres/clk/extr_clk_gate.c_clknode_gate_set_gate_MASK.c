
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode_gate_sc {int ungated; int mask; int shift; int on_value; int off_value; int offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int,int) ;
 int FUNC_3 (struct clknode*,int ,int *) ;
 struct clknode_gate_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, bool VAR_1)
{
 uint32_t VAR_2;
 struct clknode_gate_sc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0);
 VAR_3->ungated = VAR_1;
 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_3->offset, VAR_3->mask << VAR_3->shift,
     (VAR_3->ungated ? VAR_3->on_value : VAR_3->off_value) << VAR_3->shift);
 if (VAR_4 != 0) {
  FUNC_1(VAR_0);
  return (VAR_4);
 }
 FUNC_3(VAR_0, VAR_3->offset, &VAR_2);
 FUNC_1(VAR_0);
 return(0);
}
