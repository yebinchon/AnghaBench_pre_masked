
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sy_forward_ref; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct local_symbol*) ;

void
FUNC_2 (symbolS *VAR_0)
{
  if (FUNC_0 (VAR_0))
    VAR_0 = FUNC_1 ((struct local_symbol *) VAR_0);
  VAR_0->sy_forward_ref = 1;
}
