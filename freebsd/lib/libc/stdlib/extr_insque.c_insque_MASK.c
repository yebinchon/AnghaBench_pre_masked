
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct que_elem {struct que_elem* next; struct que_elem* prev; } ;


 int FUNC_0 (int ,char*,struct que_elem*,struct que_elem*,struct que_elem*) ;
 int VAR_0 ;

void
FUNC_1(void *VAR_1, void *VAR_2)
{
 struct que_elem *VAR_3, *VAR_4, *VAR_5;

 VAR_5 = (struct que_elem *)VAR_1;
 VAR_3 = (struct que_elem *)VAR_2;

 if (VAR_3 == ((void*)0)) {
  VAR_5->prev = VAR_5->next = ((void*)0);
  return;
 }

 VAR_4 = VAR_3->next;
 if (VAR_4 != ((void*)0)) {







  VAR_4->prev = VAR_5;
 }
 VAR_3->next = VAR_5;
 VAR_5->prev = VAR_3;
 VAR_5->next = VAR_4;
}
