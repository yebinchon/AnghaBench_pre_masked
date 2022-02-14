
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcbind_args {int dummy; } ;
struct rpc_task_setup {int flags; struct rpcbind_args* callback_data; int * callback_ops; struct rpc_message* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_procinfo {int dummy; } ;
struct rpc_message {struct rpcbind_args* rpc_resp; struct rpcbind_args* rpc_argp; struct rpc_procinfo* rpc_proc; } ;
struct rpc_clnt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_task* FUNC_0 (struct rpc_task_setup*) ;
 int VAR_2 ;

__attribute__((used)) static struct rpc_task *FUNC_1(struct rpc_clnt *VAR_3, struct rpcbind_args *VAR_4, struct rpc_procinfo *VAR_5)
{
 struct rpc_message VAR_6 = {
  .rpc_proc = VAR_5,
  .rpc_argp = VAR_4,
  .rpc_resp = VAR_4,
 };
 struct rpc_task_setup VAR_7 = {
  .rpc_client = VAR_3,
  .rpc_message = &VAR_6,
  .callback_ops = &VAR_2,
  .callback_data = VAR_4,
  .flags = VAR_0 | VAR_1,
 };

 return FUNC_0(&VAR_7);
}
