
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence_stack {int last; int first; struct sequence_stack* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sequence_stack* VAR_2 ;
 int FUNC_0 () ;

void
FUNC_1 (void)
{
  struct sequence_stack *VAR_3, *VAR_4 = ((void*)0);

  FUNC_0 ();

  for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next)
    VAR_4 = VAR_3;

  VAR_0 = VAR_4->first;
  VAR_1 = VAR_4->last;
}
