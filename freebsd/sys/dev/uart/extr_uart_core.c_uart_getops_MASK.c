
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_ops {int dummy; } ;
struct uart_class {struct uart_ops* uc_ops; } ;



struct uart_ops *
FUNC_0(struct uart_class *VAR_0)
{
 return ((VAR_0 != ((void*)0)) ? VAR_0->uc_ops : ((void*)0));
}
