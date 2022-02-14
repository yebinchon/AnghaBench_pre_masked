
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* X_add_symbol; } ;
struct TYPE_9__ {TYPE_2__* bsym; TYPE_1__ sy_value; } ;
typedef TYPE_3__ symbolS ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

int
FUNC_2 (symbolS *VAR_1)
{
  if (FUNC_0 (VAR_1))
    return 0;




  if (FUNC_1 (VAR_1))
    return FUNC_2 (VAR_1->sy_value.X_add_symbol);
  return (VAR_1->bsym->flags & VAR_0) != 0;
}
