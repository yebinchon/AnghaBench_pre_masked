
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence_stack {scalar_t__ last; scalar_t__ first; struct sequence_stack* next; } ;


 scalar_t__ VAR_0 ;
 struct sequence_stack* VAR_1 ;
 struct sequence_stack* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 struct sequence_stack* VAR_3 ;

void
FUNC_1 (void)
{
  struct sequence_stack *VAR_4;

  if (VAR_1 != ((void*)0))
    {
      VAR_4 = VAR_1;
      VAR_1 = VAR_4->next;
    }
  else
    VAR_4 = FUNC_0 (sizeof (struct sequence_stack));

  VAR_4->next = VAR_3;
  VAR_4->first = VAR_0;
  VAR_4->last = VAR_2;

  VAR_3 = VAR_4;

  VAR_0 = 0;
  VAR_2 = 0;
}
