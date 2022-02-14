
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rep_connected; } ;
struct rpcrdma_xprt {int rdma_connect; TYPE_1__ rx_ep; } ;
struct rpc_xprt {int reestablish_timeout; } ;
struct rpc_task {scalar_t__ tk_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 () ;
 struct rpcrdma_xprt* FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct rpc_task *VAR_1)
{
 struct rpc_xprt *VAR_2 = (struct rpc_xprt *)VAR_1->tk_xprt;
 struct rpcrdma_xprt *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->rx_ep.rep_connected != 0) {

  FUNC_3(&VAR_3->rdma_connect,
   VAR_2->reestablish_timeout);
  VAR_2->reestablish_timeout <<= 1;
  if (VAR_2->reestablish_timeout > (30 * VAR_0))
   VAR_2->reestablish_timeout = (30 * VAR_0);
  else if (VAR_2->reestablish_timeout < (5 * VAR_0))
   VAR_2->reestablish_timeout = (5 * VAR_0);
 } else {
  FUNC_3(&VAR_3->rdma_connect, 0);
  if (!FUNC_0(VAR_1))
   FUNC_1();
 }
}
