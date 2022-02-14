
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_sc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pll_sc*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct pll_sc *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1 / 10; VAR_3 > 0; VAR_3--) {
  if (FUNC_1(VAR_2))
   break;
  FUNC_0(10);
 }
 if (VAR_3 <= 0) {
  FUNC_2("PLL lock timeout\n");
  return (VAR_0);
 }
 return (0);
}
