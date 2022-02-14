
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; int * callback_ops; struct rpc_message const* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int tk_status; } ;
struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct rpc_task*) ;
 struct rpc_task* FUNC_4 (struct rpc_task_setup*) ;

int FUNC_5(struct rpc_clnt *VAR_2, const struct rpc_message *VAR_3, int VAR_4)
{
 struct rpc_task *VAR_5;
 struct rpc_task_setup VAR_6 = {
  .rpc_client = VAR_2,
  .rpc_message = VAR_3,
  .callback_ops = &VAR_1,
  .flags = VAR_4,
 };
 int VAR_7;

 FUNC_0(VAR_4 & VAR_0);

 VAR_5 = FUNC_4(&VAR_6);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);
 VAR_7 = VAR_5->tk_status;
 FUNC_3(VAR_5);
 return VAR_7;
}
