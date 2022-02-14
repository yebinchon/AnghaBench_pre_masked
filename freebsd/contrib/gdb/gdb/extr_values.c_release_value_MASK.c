
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {struct value* next; } ;


 struct value* VAR_0 ;

void
FUNC_0 (struct value *VAR_1)
{
  struct value *VAR_2;

  if (VAR_0 == VAR_1)
    {
      VAR_0 = VAR_1->next;
      return;
    }

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
      if (VAR_2->next == VAR_1)
 {
   VAR_2->next = VAR_1->next;
   break;
 }
    }
}
