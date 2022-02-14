
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; int task_cleanup; int backlog; int sending; int pending; int binding; int timer; } ;
struct TYPE_2__ {int (* destroy ) (struct rpc_xprt*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct rpc_xprt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_5(struct rpc_xprt *VAR_0)
{
 FUNC_2("RPC:       destroying transport %p\n", VAR_0);
 FUNC_1(&VAR_0->timer);

 FUNC_3(&VAR_0->binding);
 FUNC_3(&VAR_0->pending);
 FUNC_3(&VAR_0->sending);
 FUNC_3(&VAR_0->backlog);
 FUNC_0(&VAR_0->task_cleanup);



 VAR_0->ops->destroy(VAR_0);
}
