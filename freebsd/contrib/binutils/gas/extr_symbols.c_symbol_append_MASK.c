
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* sy_previous; struct TYPE_7__* sy_next; } ;
typedef TYPE_1__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4 (symbolS *VAR_2, symbolS *VAR_3,
        symbolS **VAR_4, symbolS **VAR_5)
{
  if (FUNC_0 (VAR_2))
    FUNC_1 ();
  if (VAR_3 != ((void*)0) && FUNC_0 (VAR_3))
    FUNC_1 ();

  if (VAR_3 == ((void*)0))
    {
      FUNC_3 (*VAR_4 == ((void*)0));
      FUNC_3 (*VAR_5 == ((void*)0));
      VAR_2->sy_next = ((void*)0);
      VAR_2->sy_previous = ((void*)0);
      *VAR_4 = VAR_2;
      *VAR_5 = VAR_2;
      return;
    }

  if (VAR_3->sy_next != ((void*)0))
    {
      VAR_3->sy_next->sy_previous = VAR_2;
    }
  else
    {
      FUNC_3 (*VAR_5 == VAR_3);
      *VAR_5 = VAR_2;
    }

  VAR_2->sy_next = VAR_3->sy_next;
  VAR_3->sy_next = VAR_2;
  VAR_2->sy_previous = VAR_3;

  FUNC_2 (VAR_1, VAR_0);
}
