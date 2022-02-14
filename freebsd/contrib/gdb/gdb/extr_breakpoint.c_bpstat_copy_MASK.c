
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* bpstat ;
struct TYPE_6__ {struct TYPE_6__* next; int * old_val; int * commands; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

bpstat
FUNC_4 (bpstat VAR_0)
{
  bpstat VAR_1 = ((void*)0);
  bpstat VAR_2;
  bpstat VAR_3 = ((void*)0);

  if (VAR_0 == ((void*)0))
    return VAR_0;

  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      VAR_2 = (bpstat) FUNC_3 (sizeof (*VAR_2));
      FUNC_1 (VAR_2, VAR_0, sizeof (*VAR_2));
      if (VAR_0->commands != ((void*)0))
 VAR_2->commands = FUNC_0 (VAR_0->commands);
      if (VAR_0->old_val != ((void*)0))
 VAR_2->old_val = FUNC_2 (VAR_0->old_val);

      if (VAR_1 == ((void*)0))

 VAR_3 = VAR_2;
      else
 VAR_1->next = VAR_2;
      VAR_1 = VAR_2;
    }
  VAR_1->next = ((void*)0);
  return VAR_3;
}
