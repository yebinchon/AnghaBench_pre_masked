
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* subvar_t ;
struct TYPE_3__ {int var; struct TYPE_3__* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

void
FUNC_3 (FILE *VAR_1, tree VAR_2)
{
  subvar_t VAR_3 = FUNC_1 (VAR_2);

  if (!VAR_3)
    return;

  FUNC_0 (VAR_1, "{ ");

  for (; VAR_3; VAR_3 = VAR_3->next)
    {
      FUNC_2 (VAR_1, VAR_3->var, VAR_0);
      FUNC_0 (VAR_1, " ");
    }

  FUNC_0 (VAR_1, "}");
}
