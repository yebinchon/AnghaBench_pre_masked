
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* X_add_symbol; } ;
struct TYPE_7__ {int sy_used; TYPE_1__ sy_value; } ;
typedef TYPE_2__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (symbolS *VAR_0)
{
  if (FUNC_0 (VAR_0))
    return;
  VAR_0->sy_used = 1;
  if (FUNC_1 (VAR_0))
    FUNC_2 (VAR_0->sy_value.X_add_symbol);
}
