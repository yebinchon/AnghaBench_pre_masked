
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_xprt; scalar_t__ cl_autobind; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct rpc_clnt *VAR_0)
{
 if (VAR_0->cl_autobind)
  FUNC_0(VAR_0->cl_xprt);
}
