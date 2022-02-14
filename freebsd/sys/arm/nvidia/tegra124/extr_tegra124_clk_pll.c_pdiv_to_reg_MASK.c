
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pll_sc {struct pdiv_table* pdiv_table; } ;
struct pdiv_table {scalar_t__ divider; scalar_t__ value; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_1(struct pll_sc *VAR_0, uint32_t VAR_1)
{
 struct pdiv_table *VAR_2;

 VAR_2 = VAR_0->pdiv_table;
 if (VAR_2 == ((void*)0))
  return (FUNC_0(VAR_1) - 1);

 while (VAR_2->divider != 0) {
  if (VAR_1 <= VAR_2->divider)
   return (VAR_2->value);
  VAR_2++;
 }
 return (0xFFFFFFFF);
}
