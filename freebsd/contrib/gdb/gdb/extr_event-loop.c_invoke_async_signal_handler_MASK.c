
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client_data; int (* proc ) (int ) ;scalar_t__ ready; struct TYPE_3__* next_handler; } ;
typedef TYPE_1__ async_signal_handler ;
struct TYPE_4__ {TYPE_1__* first_handler; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  async_signal_handler *VAR_2;

  if (VAR_0 == 0)
    return;
  VAR_0 = 0;



  while (1)
    {
      for (VAR_2 = VAR_1.first_handler;
    VAR_2 != ((void*)0);
    VAR_2 = VAR_2->next_handler)
 {
   if (VAR_2->ready)
     break;
 }
      if (VAR_2 == ((void*)0))
 break;
      VAR_2->ready = 0;
      (*VAR_2->proc) (VAR_2->client_data);
    }

  return;
}
