
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_workqueue; int tk_count; int tk_pid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct rpc_task*) ;
 int FUNC_7 (struct rpc_task*,int ) ;
 int FUNC_8 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_9(struct rpc_task *VAR_0)
{
 FUNC_5("RPC: %5u release task\n", VAR_0->tk_pid);

 FUNC_0 (FUNC_2(VAR_0));

 FUNC_8(VAR_0);






 if (FUNC_4(&VAR_0->tk_count) != 1 + !FUNC_1(VAR_0)) {

  if (!FUNC_6(VAR_0))
   return;
 } else {
  if (!FUNC_3(&VAR_0->tk_count))
   return;
 }
 FUNC_7(VAR_0, VAR_0->tk_workqueue);
}
