
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_handler; } ;
typedef TYPE_1__ async_signal_handler ;
struct TYPE_6__ {TYPE_1__* last_handler; TYPE_1__* first_handler; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (async_signal_handler ** VAR_1)
{
  async_signal_handler *VAR_2;

  if (VAR_0.first_handler == (*VAR_1))
    {
      VAR_0.first_handler = (*VAR_1)->next_handler;
      if (VAR_0.first_handler == ((void*)0))
 VAR_0.last_handler = ((void*)0);
    }
  else
    {
      VAR_2 = VAR_0.first_handler;
      while (VAR_2->next_handler != (*VAR_1) && VAR_2)
 VAR_2 = VAR_2->next_handler;
      VAR_2->next_handler = (*VAR_1)->next_handler;
      if (VAR_0.last_handler == (*VAR_1))
 VAR_0.last_handler = VAR_2;
    }
  FUNC_0 ((*VAR_1));
  (*VAR_1) = ((void*)0);
}
