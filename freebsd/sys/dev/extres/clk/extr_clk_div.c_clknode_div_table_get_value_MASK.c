
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct clknode_div_sc {int div_flags; struct clk_div_table* div_table; } ;
struct clk_div_table {scalar_t__ divider; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct clknode_div_sc *VAR_2, uint32_t *VAR_3)
{
 struct clk_div_table *VAR_4;

 if (!(VAR_2->div_flags & VAR_0))
  return (0);

 for (VAR_4 = VAR_2->div_table; VAR_4->divider != 0; VAR_4++)
  if (VAR_4->divider == *VAR_3) {
   *VAR_3 = VAR_4->value;
   return (0);
  }

 return (VAR_1);
}
