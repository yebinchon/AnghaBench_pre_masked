
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_ep {scalar_t__ rep_connected; struct rpc_xprt* rep_xprt; } ;
struct rpc_xprt {scalar_t__ connect_cookie; int transport_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct rpc_xprt*) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_xprt*,int ) ;

void
FUNC_5(struct rpcrdma_ep *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1->rep_xprt;

 FUNC_0(&VAR_2->transport_lock);
 if (++VAR_2->connect_cookie == 0)
  ++VAR_2->connect_cookie;
 if (VAR_1->rep_connected > 0) {
  if (!FUNC_3(VAR_2))
   FUNC_4(VAR_2, 0);
 } else {
  if (FUNC_2(VAR_2))
   FUNC_4(VAR_2, -VAR_0);
 }
 FUNC_1(&VAR_2->transport_lock);
}
