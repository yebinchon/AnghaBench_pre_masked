
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout {void (* func ) (void*) ;void* what; struct timeout* next; } ;


 struct timeout* VAR_0 ;
 struct timeout* VAR_1 ;

void
FUNC_0(void (*VAR_2)(void *), void *VAR_3)
{
 struct timeout *VAR_4, *VAR_5;


 VAR_4 = ((void*)0);
 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->func == VAR_2 && VAR_5->what == VAR_3) {
   if (VAR_4)
    VAR_4->next = VAR_5->next;
   else
    VAR_1 = VAR_5->next;
   break;
  }
  VAR_4 = VAR_5;
 }


 if (VAR_5) {
  VAR_5->next = VAR_0;
  VAR_0 = VAR_5;
 }
}
