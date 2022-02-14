
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sub; int formal_hash; TYPE_2__* formals; } ;
typedef TYPE_1__ macro_entry ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ formal_entry ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(macro_entry *VAR_0)
{
  formal_entry *VAR_1;

  for (VAR_1 = VAR_0->formals; VAR_1; )
    {
      formal_entry *VAR_2;

      VAR_2 = VAR_1;
      VAR_1 = VAR_1->next;
      FUNC_0 (VAR_2);
    }
  FUNC_2 (VAR_0->formal_hash);
  FUNC_3 (&VAR_0->sub);
  FUNC_1 (VAR_0);
}
