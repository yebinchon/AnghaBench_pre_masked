
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_base {struct evhttp* http_server; int paused_requests; int output_hooks; int input_hooks; int registered_rpcs; } ;
struct evhttp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct evrpc_base* FUNC_2 (int,int) ;

struct evrpc_base *
FUNC_3(struct evhttp *VAR_0)
{
 struct evrpc_base* VAR_1 = FUNC_2(1, sizeof(struct evrpc_base));
 if (VAR_1 == ((void*)0))
  return (((void*)0));


 FUNC_1();

 FUNC_0(&VAR_1->registered_rpcs);
 FUNC_0(&VAR_1->input_hooks);
 FUNC_0(&VAR_1->output_hooks);

 FUNC_0(&VAR_1->paused_requests);

 VAR_1->http_server = VAR_0;

 return (VAR_1);
}
