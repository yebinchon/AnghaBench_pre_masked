
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int print_operand; int * print_handlers; } ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_2 (CGEN_CPU_DESC VAR_2)
{
  FUNC_1 (VAR_2);
  FUNC_0 (VAR_2);
  VAR_2->print_handlers = & VAR_0[0];
  VAR_2->print_operand = VAR_1;
}
