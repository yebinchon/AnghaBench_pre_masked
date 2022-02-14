
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_pool {int timeout; struct event_base* base; int output_hooks; int input_hooks; int paused_requests; int requests; int connections; } ;
struct event_base {int dummy; } ;


 int FUNC_0 (int *) ;
 struct evrpc_pool* FUNC_1 (int,int) ;

struct evrpc_pool *
FUNC_2(struct event_base *VAR_0)
{
 struct evrpc_pool *VAR_1 = FUNC_1(1, sizeof(struct evrpc_pool));
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_1->connections);
 FUNC_0(&VAR_1->requests);

 FUNC_0(&VAR_1->paused_requests);

 FUNC_0(&VAR_1->input_hooks);
 FUNC_0(&VAR_1->output_hooks);

 VAR_1->base = VAR_0;
 VAR_1->timeout = -1;

 return (VAR_1);
}
