
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_rqstp; int tk_timeout; } ;
struct TYPE_2__ {int rq_timeout; } ;



void FUNC_0(struct rpc_task *VAR_0)
{
 VAR_0->tk_timeout = VAR_0->tk_rqstp->rq_timeout;
}
