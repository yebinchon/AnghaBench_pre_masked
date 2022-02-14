
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
  VAR_1->next = ((void*)0);
  if (VAR_0->tail != ((void*)0))
    VAR_0->tail->next = VAR_1;
  else
    VAR_0->head = VAR_1;
  VAR_0->tail = VAR_1;
}
