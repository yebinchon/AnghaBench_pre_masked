
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeout {void (* func ) (void*) ;void* what; scalar_t__ when; struct timeout* next; } ;


 int FUNC_0 (char*) ;
 struct timeout* VAR_0 ;
 struct timeout* FUNC_1 (int) ;
 struct timeout* VAR_1 ;

void
FUNC_2(time_t VAR_2, void (*VAR_3)(void *), void *VAR_4)
{
 struct timeout *VAR_5, *VAR_6;


 VAR_5 = ((void*)0);
 for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->func == VAR_3 && VAR_6->what == VAR_4) {
   if (VAR_5)
    VAR_5->next = VAR_6->next;
   else
    VAR_1 = VAR_6->next;
   break;
  }
  VAR_5 = VAR_6;
 }



 if (!VAR_6) {
  if (VAR_0) {
   VAR_6 = VAR_0;
   VAR_0 = VAR_6->next;
   VAR_6->func = VAR_3;
   VAR_6->what = VAR_4;
  } else {
   VAR_6 = FUNC_1(sizeof(struct timeout));
   if (!VAR_6)
    FUNC_0("Can't allocate timeout structure!");
   VAR_6->func = VAR_3;
   VAR_6->what = VAR_4;
  }
 }

 VAR_6->when = VAR_2;




 if (!VAR_1 || VAR_1->when > VAR_6->when) {
  VAR_6->next = VAR_1;
  VAR_1 = VAR_6;
  return;
 }


 for (VAR_5 = VAR_1; VAR_5->next; VAR_5 = VAR_5->next) {
  if (VAR_5->next->when > VAR_6->when) {
   VAR_6->next = VAR_5->next;
   VAR_5->next = VAR_6;
   return;
  }
 }


 VAR_5->next = VAR_6;
 VAR_6->next = ((void*)0);
}
