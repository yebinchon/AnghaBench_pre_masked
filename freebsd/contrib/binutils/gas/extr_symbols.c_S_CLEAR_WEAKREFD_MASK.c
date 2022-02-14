
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* bsym; scalar_t__ sy_weakrefd; } ;
typedef TYPE_2__ symbolS ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (symbolS *VAR_2)
{
  if (FUNC_0 (VAR_2))
    return;
  if (VAR_2->sy_weakrefd)
    {
      VAR_2->sy_weakrefd = 0;





      if (VAR_2->bsym->flags & VAR_1)
 {



   VAR_2->bsym->flags &= ~VAR_1;
   VAR_2->bsym->flags |= VAR_0;
 }
    }
}
