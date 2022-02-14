
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* sy_next; struct TYPE_8__* sy_previous; } ;
typedef TYPE_1__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_3 (symbolS *VAR_0, symbolS **VAR_1, symbolS **VAR_2)
{
  if (FUNC_0 (VAR_0))
    FUNC_1 ();

  if (VAR_0 == *VAR_1)
    {
      *VAR_1 = VAR_0->sy_next;
    }

  if (VAR_0 == *VAR_2)
    {
      *VAR_2 = VAR_0->sy_previous;
    }

  if (VAR_0->sy_next != ((void*)0))
    {
      VAR_0->sy_next->sy_previous = VAR_0->sy_previous;
    }

  if (VAR_0->sy_previous != ((void*)0))
    {
      VAR_0->sy_previous->sy_next = VAR_0->sy_next;
    }

  FUNC_2 (*VAR_1, *VAR_2);
}
