
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence_stack {scalar_t__ last; struct sequence_stack* next; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 struct sequence_stack* VAR_1 ;

rtx
FUNC_0 (void)
{
  struct sequence_stack *VAR_2;
  if (VAR_0)
    return VAR_0;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->last != 0)
      return VAR_2->last;
  return 0;
}
