
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
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (symbolS *VAR_3)
{
  if (FUNC_0 (VAR_3))
    return;
  if ((VAR_3->bsym->flags & VAR_2) != 0)
    {

      return;
    }
  VAR_3->bsym->flags |= VAR_1;
  VAR_3->bsym->flags &= ~(VAR_0 | VAR_2);
}
