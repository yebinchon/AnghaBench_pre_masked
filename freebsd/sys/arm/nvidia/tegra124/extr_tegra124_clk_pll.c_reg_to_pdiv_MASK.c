
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pll_sc {struct pdiv_table* pdiv_table; } ;
struct pdiv_table {int divider; int value; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct pll_sc *VAR_0, uint32_t VAR_1)
{
 struct pdiv_table *VAR_2;

 VAR_2 = VAR_0->pdiv_table;
 if (VAR_2 == ((void*)0))
  return (1 << VAR_1);

 while (VAR_2->divider) {
  if (VAR_1 == VAR_2->value)
   return (VAR_2->divider);
  VAR_2++;
 }
 return (0);
}
