
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sy_weakrefd; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct local_symbol*) ;

void
FUNC_3 (symbolS *VAR_0)
{
  if (FUNC_0 (VAR_0))
    VAR_0 = FUNC_2 ((struct local_symbol *) VAR_0);
  VAR_0->sy_weakrefd = 1;
  FUNC_1 (VAR_0);
}
