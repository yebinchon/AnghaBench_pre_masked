
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {struct rpc_task* snd_task; } ;
struct rpc_task {int dummy; } ;


 int FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;

void FUNC_2(struct rpc_xprt *VAR_0, struct rpc_task *VAR_1)
{
 if (VAR_0->snd_task == VAR_1) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
 }
}
