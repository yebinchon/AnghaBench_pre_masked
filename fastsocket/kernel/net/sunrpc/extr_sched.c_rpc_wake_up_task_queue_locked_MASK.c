
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int dummy; } ;
struct rpc_task {struct rpc_wait_queue* tk_waitqueue; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_wait_queue*,struct rpc_task*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct rpc_wait_queue *VAR_0, struct rpc_task *VAR_1)
{
 if (FUNC_0(VAR_1)) {
  FUNC_2();
  if (VAR_1->tk_waitqueue == VAR_0)
   FUNC_1(VAR_0, VAR_1);
 }
}
