
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partial_symtab {TYPE_1__* objfile; struct partial_symtab* next; } ;
struct TYPE_2__ {struct partial_symtab* free_psymtabs; struct partial_symtab* psymtabs; } ;



void
FUNC_0 (struct partial_symtab *VAR_0)
{
  struct partial_symtab **VAR_1;
  VAR_1 = &(VAR_0->objfile->psymtabs);
  while ((*VAR_1) != VAR_0)
    VAR_1 = &((*VAR_1)->next);
  (*VAR_1) = VAR_0->next;



  VAR_0->next = VAR_0->objfile->free_psymtabs;
  VAR_0->objfile->free_psymtabs = VAR_0;
}
