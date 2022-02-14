
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct clknode_div_sc {int div_flags; scalar_t__ divider; struct clk_div_table* div_table; } ;
struct clk_div_table {scalar_t__ divider; scalar_t__ value; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(struct clknode_div_sc *VAR_1, uint32_t VAR_2)
{
 struct clk_div_table *VAR_3;

 if (!(VAR_1->div_flags & VAR_0))
  return (VAR_2);

 for (VAR_3 = VAR_1->div_table; VAR_3->divider != 0; VAR_3++)
  if (VAR_3->value == VAR_1->divider)
   return (VAR_3->divider);

 return (0);
}
