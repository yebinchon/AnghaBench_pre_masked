
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_list {struct section_list* prev; int * sec; struct section_list* next; } ;
typedef int asection ;


 struct section_list* VAR_0 ;

__attribute__((used)) static struct section_list *
FUNC_0 (asection * VAR_1)
{
  struct section_list * VAR_2;
  static struct section_list * VAR_3 = ((void*)0);





  VAR_2 = VAR_0;
  if (VAR_3 != ((void*)0))
    {
      if (VAR_3->sec == VAR_1)
 VAR_2 = VAR_3;
      else if (VAR_3->next != ((void*)0)
        && VAR_3->next->sec == VAR_1)
 VAR_2 = VAR_3->next;
    }

  for (; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->sec == VAR_1)
      break;

  if (VAR_2)




    VAR_3 = VAR_2->prev;

  return VAR_2;
}
