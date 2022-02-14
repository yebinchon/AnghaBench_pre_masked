
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int reserve_lock; } ;
struct rpc_task {int tk_status; scalar_t__ tk_timeout; int * tk_rqstp; struct rpc_xprt* tk_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_4 (struct rpc_xprt*,struct rpc_task*) ;

void FUNC_5(struct rpc_task *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1->tk_xprt;

 VAR_1->tk_status = 0;
 if (VAR_1->tk_rqstp != ((void*)0))
  return;






 VAR_1->tk_timeout = 0;
 VAR_1->tk_status = -VAR_0;
 if (!FUNC_3(VAR_2, VAR_1))
  return;

 FUNC_0(&VAR_2->reserve_lock);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_2->reserve_lock);
 FUNC_4(VAR_2, VAR_1);
}
