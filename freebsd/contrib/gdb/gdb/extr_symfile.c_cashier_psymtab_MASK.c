
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partial_symtab {int number_of_dependencies; struct partial_symtab** dependencies; struct partial_symtab* next; TYPE_1__* objfile; } ;
struct TYPE_2__ {struct partial_symtab* psymtabs; } ;



__attribute__((used)) static void
FUNC_0 (struct partial_symtab *VAR_0)
{
  struct partial_symtab *VAR_1, *VAR_2 = ((void*)0);
  int VAR_3;


  for (VAR_1 = VAR_0->objfile->psymtabs; VAR_1; VAR_1 = VAR_1->next)
    {
      if (VAR_1 == VAR_0)
 break;
      VAR_2 = VAR_1;
    }

  if (VAR_1)
    {

      if (VAR_1 == VAR_0->objfile->psymtabs)
 VAR_0->objfile->psymtabs = VAR_1->next;
      else
 VAR_2->next = VAR_1->next;
    again:
      for (VAR_1 = VAR_0->objfile->psymtabs; VAR_1; VAR_1 = VAR_1->next)
 {
   for (VAR_3 = 0; VAR_3 < VAR_1->number_of_dependencies; VAR_3++)
     {
       if (VAR_1->dependencies[VAR_3] == VAR_0)
  {
    FUNC_0 (VAR_1);
    goto again;
  }
     }
 }
    }
}
