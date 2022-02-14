
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sig_handler_func ;
typedef int gdb_client_data ;
struct TYPE_4__ {struct TYPE_4__* next_handler; int client_data; int * proc; scalar_t__ ready; } ;
typedef TYPE_1__ async_signal_handler ;
struct TYPE_5__ {TYPE_1__* last_handler; TYPE_1__* first_handler; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

async_signal_handler *
FUNC_1 (sig_handler_func * VAR_1, gdb_client_data VAR_2)
{
  async_signal_handler *VAR_3;

  VAR_3 =
    (async_signal_handler *) FUNC_0 (sizeof (async_signal_handler));
  VAR_3->ready = 0;
  VAR_3->next_handler = ((void*)0);
  VAR_3->proc = VAR_1;
  VAR_3->client_data = VAR_2;
  if (VAR_0.first_handler == ((void*)0))
    VAR_0.first_handler = VAR_3;
  else
    VAR_0.last_handler->next_handler = VAR_3;
  VAR_0.last_handler = VAR_3;
  return VAR_3;
}
