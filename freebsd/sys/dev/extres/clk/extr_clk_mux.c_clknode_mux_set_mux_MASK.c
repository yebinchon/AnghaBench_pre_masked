
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode_mux_sc {int mask; int shift; int offset; } ;
struct clknode {int dummy; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*,int ,int,int) ;
 int FUNC_3 (struct clknode*,int ,int *) ;
 struct clknode_mux_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 struct clknode_mux_sc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_3->offset, VAR_3->mask << VAR_3->shift,
     (VAR_1 & VAR_3->mask) << VAR_3->shift);
 if (VAR_4 != 0) {
  FUNC_1(VAR_0);
  return (VAR_4);
 }
 FUNC_3(VAR_0, VAR_3->offset, &VAR_2);
 FUNC_1(VAR_0);

 return(0);
}
