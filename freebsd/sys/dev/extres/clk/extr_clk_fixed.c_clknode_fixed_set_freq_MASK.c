
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clknode_fixed_sc {int mult; int div; int freq; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 struct clknode_fixed_sc* FUNC_0 (struct clknode*) ;

__attribute__((used)) static int
FUNC_1(struct clknode *VAR_1, uint64_t VAR_2, uint64_t *VAR_3,
    int VAR_4, int *VAR_5)
{
 struct clknode_fixed_sc *VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6->mult == 0 || VAR_6->div == 0) {

  *VAR_5 = 1;
  if (*VAR_3 != VAR_6->freq)
   return (VAR_0);
  return (0);
 }

 *VAR_5 = 0;
 *VAR_3 = (*VAR_3 / VAR_6->mult) * VAR_6->div;
 return (0);
}
