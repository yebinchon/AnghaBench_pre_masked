
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clknode_fixed_sc {int mult; int div; int freq; } ;
struct clknode {int dummy; } ;


 struct clknode_fixed_sc* FUNC_0 (struct clknode*) ;

__attribute__((used)) static int
FUNC_1(struct clknode *VAR_0, uint64_t *VAR_1)
{
 struct clknode_fixed_sc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if ((VAR_2->mult != 0) && (VAR_2->div != 0))
  *VAR_1 = (*VAR_1 / VAR_2->div) * VAR_2->mult;
 else
  *VAR_1 = VAR_2->freq;
 return (0);
}
