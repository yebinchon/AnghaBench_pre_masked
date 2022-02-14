
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int X_add_symbol; } ;
struct TYPE_7__ {int sy_weakrefr; TYPE_1__ sy_value; scalar_t__ sy_used; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct local_symbol*) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (symbolS *VAR_0)
{
  if (FUNC_0 (VAR_0))
    VAR_0 = FUNC_1 ((struct local_symbol *) VAR_0);
  VAR_0->sy_weakrefr = 1;






  if (VAR_0->sy_used)
    FUNC_2 (VAR_0->sy_value.X_add_symbol);
}
