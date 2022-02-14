
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_list_entry {struct inferior_list_entry* next; } ;
struct inferior_list {struct inferior_list_entry* tail; struct inferior_list_entry* head; } ;



void
FUNC_0 (struct inferior_list *VAR_0,
   struct inferior_list_entry *VAR_1)
{
  struct inferior_list_entry **VAR_2;

  if (VAR_0->head == VAR_1)
    {
      VAR_0->head = VAR_1->next;
      if (VAR_0->tail == VAR_1)
 VAR_0->tail = VAR_0->head;
      return;
    }

  VAR_2 = &VAR_0->head;
  while (*VAR_2 && (*VAR_2)->next != VAR_1)
    VAR_2 = &(*VAR_2)->next;

  if (*VAR_2 == ((void*)0))
    return;

  (*VAR_2)->next = VAR_1->next;

  if (VAR_0->tail == VAR_1)
    VAR_0->tail = *VAR_2;
}
