
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct que_elem {struct que_elem* prev; struct que_elem* next; } ;



void
FUNC_0(void *VAR_0)
{
 struct que_elem *VAR_1, *VAR_2, *VAR_3;

 VAR_3 = (struct que_elem *)VAR_0;

 VAR_1 = VAR_3->prev;
 VAR_2 = VAR_3->next;

 if (VAR_1 != ((void*)0))
  VAR_1->next = VAR_2;
 if (VAR_2 != ((void*)0))
  VAR_2->prev = VAR_1;
}
