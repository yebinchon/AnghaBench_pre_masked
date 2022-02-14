
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_rqstp; int tk_xprt; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct rpc_task *VAR_0)
{
 FUNC_0(VAR_0->tk_xprt, VAR_0->tk_rqstp);
}
