
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_list_entry {int id; struct inferior_list_entry* next; } ;
struct inferior_list {struct inferior_list_entry* head; } ;



struct inferior_list_entry *
FUNC_0 (struct inferior_list *VAR_0, int VAR_1)
{
  struct inferior_list_entry *VAR_2 = VAR_0->head;

  while (VAR_2 != ((void*)0))
    {
      if (VAR_2->id == VAR_1)
 return VAR_2;
      VAR_2 = VAR_2->next;
    }

  return ((void*)0);
}
