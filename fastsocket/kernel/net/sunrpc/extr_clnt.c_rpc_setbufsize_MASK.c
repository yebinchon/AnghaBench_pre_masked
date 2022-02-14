
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_xprt {TYPE_1__* ops; } ;
struct rpc_clnt {struct rpc_xprt* cl_xprt; } ;
struct TYPE_2__ {int (* set_buffer_size ) (struct rpc_xprt*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct rpc_xprt*,unsigned int,unsigned int) ;

void
FUNC_1(struct rpc_clnt *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_0->cl_xprt;
 if (VAR_3->ops->set_buffer_size)
  VAR_3->ops->set_buffer_size(VAR_3, VAR_1, VAR_2);
}
