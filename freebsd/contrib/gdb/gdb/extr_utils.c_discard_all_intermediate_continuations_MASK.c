
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct continuation {struct continuation* next; } ;


 struct continuation* VAR_0 ;
 int FUNC_0 (struct continuation*) ;

void
FUNC_1 (void)
{
  struct continuation *VAR_1;

  while (VAR_0)
    {
      VAR_1 = VAR_0;
      VAR_0 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
}
