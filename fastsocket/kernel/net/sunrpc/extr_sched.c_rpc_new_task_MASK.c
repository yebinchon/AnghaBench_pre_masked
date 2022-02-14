
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int callback_data; int callback_ops; struct rpc_task* task; } ;
struct rpc_task {unsigned short tk_flags; } ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 unsigned short VAR_1 ;
 int FUNC_1 (char*,struct rpc_task*) ;
 struct rpc_task* FUNC_2 () ;
 int FUNC_3 (struct rpc_task*,struct rpc_task_setup const*) ;
 int FUNC_4 (int ,int ) ;

struct rpc_task *FUNC_5(const struct rpc_task_setup *VAR_2)
{
 struct rpc_task *VAR_3 = VAR_2->task;
 unsigned short VAR_4 = 0;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_2();
  if (VAR_3 == ((void*)0)) {
   FUNC_4(VAR_2->callback_ops,
     VAR_2->callback_data);
   return FUNC_0(-VAR_0);
  }
  VAR_4 = VAR_1;
 }

 FUNC_3(VAR_3, VAR_2);
 VAR_3->tk_flags |= VAR_4;
 FUNC_1("RPC:       allocated task %p\n", VAR_3);
 return VAR_3;
}
