
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psymbol_allocation_list {int size; struct partial_symbol** list; struct partial_symbol** next; } ;
struct partial_symbol {int dummy; } ;
struct objfile {int md; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

void
FUNC_2 (struct psymbol_allocation_list *VAR_0,
       struct objfile *VAR_1)
{
  int VAR_2;
  if (VAR_0->size == 0)
    {
      VAR_2 = 255;
      VAR_0->list = (struct partial_symbol **)
 FUNC_0 (VAR_1->md, VAR_2 * sizeof (struct partial_symbol *));
    }
  else
    {
      VAR_2 = VAR_0->size * 2;
      VAR_0->list = (struct partial_symbol **)
 FUNC_1 (VAR_1->md, (char *) VAR_0->list,
     VAR_2 * sizeof (struct partial_symbol *));
    }


  VAR_0->next = VAR_0->list + VAR_0->size;
  VAR_0->size = VAR_2;
}
