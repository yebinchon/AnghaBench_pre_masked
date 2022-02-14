
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_list {struct section_list* prev; struct section_list* next; int * sec; } ;
typedef int asection ;


 struct section_list* FUNC_0 (int) ;
 struct section_list* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (asection * VAR_1)
{
  struct section_list * VAR_2;

  VAR_2 = FUNC_0 (sizeof (* VAR_2));
  if (VAR_2 == ((void*)0))
    return;
  VAR_2->sec = VAR_1;
  VAR_2->next = VAR_0;
  VAR_2->prev = ((void*)0);
  if (VAR_2->next != ((void*)0))
    VAR_2->next->prev = VAR_2;
  VAR_0 = VAR_2;
}
