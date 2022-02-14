
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* rpc_proc; } ;
struct rpc_task {unsigned long tk_timeout; struct rpc_rqst* tk_rqstp; struct rpc_clnt* tk_client; TYPE_3__ tk_msg; } ;
struct rpc_rtt {int dummy; } ;
struct rpc_rqst {unsigned long rq_retries; } ;
struct rpc_clnt {TYPE_1__* cl_timeout; struct rpc_rtt* cl_rtt; } ;
struct TYPE_5__ {int p_timer; } ;
struct TYPE_4__ {unsigned long to_maxval; } ;


 unsigned long FUNC_0 (struct rpc_rtt*,int) ;
 unsigned long FUNC_1 (struct rpc_rtt*,int) ;

void FUNC_2(struct rpc_task *VAR_0)
{
 int VAR_1 = VAR_0->tk_msg.rpc_proc->p_timer;
 struct rpc_clnt *VAR_2 = VAR_0->tk_client;
 struct rpc_rtt *VAR_3 = VAR_2->cl_rtt;
 struct rpc_rqst *VAR_4 = VAR_0->tk_rqstp;
 unsigned long VAR_5 = VAR_2->cl_timeout->to_maxval;

 VAR_0->tk_timeout = FUNC_0(VAR_3, VAR_1);
 VAR_0->tk_timeout <<= FUNC_1(VAR_3, VAR_1) + VAR_4->rq_retries;
 if (VAR_0->tk_timeout > VAR_5 || VAR_0->tk_timeout == 0)
  VAR_0->tk_timeout = VAR_5;
}
