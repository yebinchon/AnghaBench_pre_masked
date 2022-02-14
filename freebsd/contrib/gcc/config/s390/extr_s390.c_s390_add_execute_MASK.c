
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int size; struct constant* execute; } ;
struct constant {struct constant* next; int label; int value; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct constant_pool *VAR_0, rtx VAR_1)
{
  struct constant *VAR_2;

  for (VAR_2 = VAR_0->execute; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    if (FUNC_0 (VAR_1) == FUNC_0 (VAR_2->value))
      break;

  if (VAR_2 == ((void*)0))
    {
      VAR_2 = (struct constant *) FUNC_2 (sizeof *VAR_2);
      VAR_2->value = VAR_1;
      VAR_2->label = FUNC_1 ();
      VAR_2->next = VAR_0->execute;
      VAR_0->execute = VAR_2;
      VAR_0->size += 6;
    }
}
