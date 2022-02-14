
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ bsh; scalar_t__ bst; } ;



int
FUNC_0(struct uart_bas *VAR_0, struct uart_bas *VAR_1)
{
 return (VAR_0->bsh == VAR_1->bsh && VAR_0->bst == VAR_1->bst);
}
