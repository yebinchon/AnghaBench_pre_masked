
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_sc {scalar_t__ type; } ;
struct clknode {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pll_sc* FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct pll_sc*) ;
 int FUNC_2 (struct pll_sc*) ;
 int FUNC_3 (struct pll_sc*) ;

__attribute__((used)) static int
FUNC_4(struct clknode *VAR_1, bool VAR_2)
{
 int VAR_3;
 struct pll_sc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_2 == 0) {
  VAR_3 = FUNC_1(VAR_4);
  return(VAR_3);
 }

 if (VAR_4->type == VAR_0)
  VAR_3 = FUNC_3(VAR_4);
 else
  VAR_3 = FUNC_2(VAR_4);
 return (VAR_3);
}
