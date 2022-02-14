
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {int transport_lock; TYPE_1__* ops; } ;
struct rpc_task {int dummy; } ;
struct TYPE_2__ {int (* release_xprt ) (struct rpc_xprt*,struct rpc_task*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_xprt*,struct rpc_task*) ;

__attribute__((used)) static inline void FUNC_3(struct rpc_xprt *VAR_0, struct rpc_task *VAR_1)
{
 FUNC_0(&VAR_0->transport_lock);
 VAR_0->ops->release_xprt(VAR_0, VAR_1);
 FUNC_1(&VAR_0->transport_lock);
}
