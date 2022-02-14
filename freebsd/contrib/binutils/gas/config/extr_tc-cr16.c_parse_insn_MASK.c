
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nargs; TYPE_1__* arg; } ;
typedef TYPE_2__ ins ;
struct TYPE_8__ {int mnemonic; } ;
struct TYPE_6__ {int X_op; int constant; int type; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (ins *VAR_4, char *VAR_5)
{
  int VAR_6;


  for (VAR_6 = 0; VAR_2[VAR_6] != ((void*)0); VAR_6++)
  {
    if (FUNC_3 (VAR_2[VAR_6], VAR_3->mnemonic))
    {
      VAR_4->nargs = 0;
      return;
    }
  }


  if (FUNC_0 ("excp"))
    {
      VAR_4->nargs = 1;
      VAR_4->arg[0].type = VAR_1;
      VAR_4->arg[0].constant = FUNC_1 (VAR_5);
      VAR_4->arg[0].X_op = VAR_0;
      return;
    }

  if (VAR_5 != ((void*)0))
    FUNC_2 (VAR_4, VAR_5);
}
