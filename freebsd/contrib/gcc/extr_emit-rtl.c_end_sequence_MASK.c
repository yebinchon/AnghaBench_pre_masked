
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence_stack {struct sequence_stack* next; int last; int first; } ;


 int VAR_0 ;
 struct sequence_stack* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sequence_stack*,int ,int) ;
 struct sequence_stack* VAR_3 ;

void
FUNC_1 (void)
{
  struct sequence_stack *VAR_4 = VAR_3;

  VAR_0 = VAR_4->first;
  VAR_2 = VAR_4->last;
  VAR_3 = VAR_4->next;

  FUNC_0 (VAR_4, 0, sizeof (*VAR_4));
  VAR_4->next = VAR_1;
  VAR_1 = VAR_4;
}
