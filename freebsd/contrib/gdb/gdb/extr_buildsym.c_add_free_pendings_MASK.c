
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {struct pending* next; } ;


 struct pending* VAR_0 ;

void
FUNC_0 (struct pending *VAR_1)
{
  struct pending *VAR_2 = VAR_1;

  if (VAR_1)
    {
      while (VAR_2->next) VAR_2 = VAR_2->next;
      VAR_2->next = VAR_0;
      VAR_0 = VAR_1;
    }
}
