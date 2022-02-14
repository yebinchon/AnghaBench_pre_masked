
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int rpc_message; int rpc_client; } ;
struct rpc_task {int tk_count; int * tk_action; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*) ;
 struct rpc_task* FUNC_4 (struct rpc_task_setup const*) ;
 int FUNC_5 (struct rpc_task*,int ) ;
 int FUNC_6 (struct rpc_task*,int ) ;

struct rpc_task *FUNC_7(const struct rpc_task_setup *VAR_0)
{
 struct rpc_task *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_1))
  goto out;

 FUNC_5(VAR_1, VAR_0->rpc_client);
 FUNC_6(VAR_1, VAR_0->rpc_message);

 if (VAR_1->tk_action == ((void*)0))
  FUNC_2(VAR_1);

 FUNC_1(&VAR_1->tk_count);
 FUNC_3(VAR_1);
out:
 return VAR_1;
}
