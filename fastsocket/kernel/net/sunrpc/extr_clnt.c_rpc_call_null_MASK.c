
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; int * callback_ops; struct rpc_message* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {struct rpc_cred* rpc_cred; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (struct rpc_task_setup*) ;
 int VAR_1 ;

struct rpc_task *FUNC_1(struct rpc_clnt *VAR_2, struct rpc_cred *VAR_3, int VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_1,
  .rpc_cred = VAR_3,
 };
 struct rpc_task_setup VAR_6 = {
  .rpc_client = VAR_2,
  .rpc_message = &VAR_5,
  .callback_ops = &VAR_0,
  .flags = VAR_4,
 };
 return FUNC_0(&VAR_6);
}
