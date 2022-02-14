
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;

int
FUNC_2 (symbolS *VAR_2)
{
  flagword VAR_3;

  if (FUNC_0 (VAR_2))
    return 0;

  VAR_3 = VAR_2->bsym->flags;


  if ((VAR_3 & VAR_1) && (VAR_3 & VAR_0))
    FUNC_1 ();

  return (VAR_3 & VAR_0) != 0;
}
