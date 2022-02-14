
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_stack {struct parse_stack* next; struct parse_stack* prev; } ;


 struct parse_stack* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct parse_stack *VAR_1;


  if (VAR_0 && VAR_0->prev)
    VAR_1 = VAR_0->prev;
  else
    VAR_1 = (struct parse_stack *) FUNC_0 (sizeof (struct parse_stack));

  if (VAR_0)
    {
      struct parse_stack *VAR_2 = VAR_1->prev;

      *VAR_1 = *VAR_0;
      VAR_0->prev = VAR_1;
      VAR_1->prev = VAR_2;
      VAR_1->next = VAR_0;
    }
  VAR_0 = VAR_1;
}
