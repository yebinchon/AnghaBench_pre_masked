
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ bst; int bsh; } ;


 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(struct uart_bas *VAR_0, struct uart_bas *VAR_1)
{

 if (VAR_0->bst != VAR_1->bst)
  return (0);
 if (FUNC_0(VAR_0->bsh) == 0)
  return (0);
 if (FUNC_0(VAR_1->bsh) == 0)
  return (0);
 return ((FUNC_0(VAR_0->bsh) == FUNC_0(VAR_1->bsh)) ? 1 : 0);
}
