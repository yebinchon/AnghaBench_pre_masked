
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* bpstat ;
struct TYPE_4__ {int commands; int * old_val; struct TYPE_4__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3 (bpstat *VAR_0)
{
  bpstat VAR_1;
  bpstat VAR_2;

  if (VAR_0 == 0)
    return;
  VAR_1 = *VAR_0;
  while (VAR_1 != ((void*)0))
    {
      VAR_2 = VAR_1->next;
      if (VAR_1->old_val != ((void*)0))
 FUNC_1 (VAR_1->old_val);
      FUNC_0 (&VAR_1->commands);
      FUNC_2 (VAR_1);
      VAR_1 = VAR_2;
    }
  *VAR_0 = ((void*)0);
}
