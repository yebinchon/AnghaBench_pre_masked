
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_list {struct section_list* next; TYPE_1__* prev; } ;
typedef int asection ;
struct TYPE_2__ {struct section_list* next; } ;


 struct section_list* FUNC_0 (int *) ;
 int FUNC_1 (struct section_list*) ;
 struct section_list* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (asection * VAR_1)
{
  struct section_list * VAR_2;

  VAR_2 = FUNC_0 (VAR_1);

  if (VAR_2)
    {
      if (VAR_2->prev != ((void*)0))
 VAR_2->prev->next = VAR_2->next;
      if (VAR_2->next != ((void*)0))
 VAR_2->next->prev = VAR_2->prev;
      if (VAR_2 == VAR_0)
 VAR_0 = VAR_2->next;
      FUNC_1 (VAR_2);
    }
}
