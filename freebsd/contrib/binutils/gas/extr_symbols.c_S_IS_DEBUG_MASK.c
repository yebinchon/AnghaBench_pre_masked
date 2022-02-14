
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1 (symbolS *VAR_1)
{
  if (FUNC_0 (VAR_1))
    return 0;
  if (VAR_1->bsym->flags & VAR_0)
    return 1;
  return 0;
}
