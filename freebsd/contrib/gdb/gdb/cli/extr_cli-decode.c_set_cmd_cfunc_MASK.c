
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cfunc; } ;
struct cmd_list_element {TYPE_1__ function; int * func; } ;
typedef int cmd_cfunc_ftype ;


 int * VAR_0 ;

void
FUNC_0 (struct cmd_list_element *VAR_1, cmd_cfunc_ftype *VAR_2)
{
  if (VAR_2 == ((void*)0))
    VAR_1->func = ((void*)0);
  else
    VAR_1->func = VAR_0;
  VAR_1->function.cfunc = VAR_2;
}
