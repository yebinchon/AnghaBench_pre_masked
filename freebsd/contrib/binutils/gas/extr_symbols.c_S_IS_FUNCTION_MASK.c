
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bsym; } ;
typedef TYPE_2__ symbolS ;
typedef int flagword ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

int
FUNC_1 (symbolS *VAR_1)
{
  flagword VAR_2;

  if (FUNC_0 (VAR_1))
    return 0;

  VAR_2 = VAR_1->bsym->flags;

  return (VAR_2 & VAR_0) != 0;
}
