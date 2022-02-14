
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_list_entry {struct inferior_list_entry* next; } ;
struct inferior_list {struct inferior_list_entry* head; } ;


 int FUNC_0 (struct inferior_list_entry*,void*) ;

struct inferior_list_entry *
FUNC_1 (struct inferior_list *VAR_0,
        int (*VAR_1) (struct inferior_list_entry *, void *), void *VAR_2)
{
  struct inferior_list_entry *VAR_3 = VAR_0->head;

  while (VAR_3 != ((void*)0))
    {
      if ((*VAR_1) (VAR_3, VAR_2))
 return VAR_3;
      VAR_3 = VAR_3->next;
    }

  return ((void*)0);
}
