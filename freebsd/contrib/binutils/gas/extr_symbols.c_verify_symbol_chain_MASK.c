
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sy_next; int * bsym; } ;
typedef TYPE_2__ symbolS ;
struct TYPE_7__ {TYPE_2__* sy_previous; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (symbolS *VAR_0, symbolS *VAR_1)
{
  symbolS *VAR_2 = VAR_0;

  if (VAR_2 == ((void*)0))
    return;

  for (; FUNC_1 (VAR_2) != ((void*)0); VAR_2 = FUNC_1 (VAR_2))
    {
      FUNC_0 (VAR_2->bsym != ((void*)0));
      FUNC_0 (VAR_2->sy_next->sy_previous == VAR_2);
    }

  FUNC_0 (VAR_1 == VAR_2);
}
