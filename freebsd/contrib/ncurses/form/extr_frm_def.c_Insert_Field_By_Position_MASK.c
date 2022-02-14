
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ frow; scalar_t__ fcol; struct TYPE_6__* snext; struct TYPE_6__* sprev; } ;
typedef TYPE_1__ FIELD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static FIELD *
FUNC_1(FIELD *VAR_0, FIELD *VAR_1)
{
  FIELD *VAR_2, *VAR_3;

  FUNC_0(VAR_0);

  if (!VAR_1)
    {
      VAR_3 = VAR_0->snext = VAR_0->sprev = VAR_0;
    }
  else
    {
      VAR_3 = VAR_2 = VAR_1;
      while ((VAR_2->frow < VAR_0->frow) ||
      ((VAR_2->frow == VAR_0->frow) &&
       (VAR_2->fcol < VAR_0->fcol)))
 {
   VAR_2 = VAR_2->snext;
   if (VAR_2 == VAR_1)
     {
       VAR_1 = (FIELD *)0;
       break;
     }
 }

      VAR_0->snext = VAR_2;
      VAR_0->sprev = VAR_2->sprev;
      VAR_0->snext->sprev = VAR_0;
      VAR_0->sprev->snext = VAR_0;
      if (VAR_2 == VAR_1)
 VAR_3 = VAR_0;
    }
  return (VAR_3);
}
