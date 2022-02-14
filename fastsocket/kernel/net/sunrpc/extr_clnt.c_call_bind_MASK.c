
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; int bind_timeout; } ;
struct rpc_task {int tk_timeout; int tk_action; struct rpc_xprt* tk_xprt; } ;
struct TYPE_2__ {int (* rpcbind ) (struct rpc_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_3(struct rpc_task *VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_2->tk_xprt;

 FUNC_0(VAR_2);

 VAR_2->tk_action = VAR_1;
 if (!FUNC_2(VAR_3)) {
  VAR_2->tk_action = VAR_0;
  VAR_2->tk_timeout = VAR_3->bind_timeout;
  VAR_3->ops->rpcbind(VAR_2);
 }
}
