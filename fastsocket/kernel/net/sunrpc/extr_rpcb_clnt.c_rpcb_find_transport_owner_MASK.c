
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {scalar_t__ cl_xprt; struct rpc_clnt* cl_parent; scalar_t__ cl_autobind; } ;



__attribute__((used)) static struct rpc_clnt *FUNC_0(struct rpc_clnt *VAR_0)
{
 struct rpc_clnt *VAR_1 = VAR_0->cl_parent;

 while (VAR_1 != VAR_0) {
  if (VAR_1->cl_xprt != VAR_0->cl_xprt)
   break;
  if (VAR_0->cl_autobind)
   break;
  VAR_0 = VAR_1;
  VAR_1 = VAR_1->cl_parent;
 }
 return VAR_0;
}
