
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_timeout {scalar_t__ to_retries; int to_increment; scalar_t__ to_maxval; scalar_t__ to_exponential; } ;
struct rpc_rqst {scalar_t__ rq_majortimeo; scalar_t__ rq_timeout; TYPE_2__* rq_task; } ;
struct TYPE_4__ {TYPE_1__* tk_client; } ;
struct TYPE_3__ {struct rpc_timeout* cl_timeout; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rpc_rqst *VAR_1)
{
 const struct rpc_timeout *VAR_2 = VAR_1->rq_task->tk_client->cl_timeout;

 VAR_1->rq_majortimeo = VAR_1->rq_timeout;
 if (VAR_2->to_exponential)
  VAR_1->rq_majortimeo <<= VAR_2->to_retries;
 else
  VAR_1->rq_majortimeo += VAR_2->to_increment * VAR_2->to_retries;
 if (VAR_1->rq_majortimeo > VAR_2->to_maxval || VAR_1->rq_majortimeo == 0)
  VAR_1->rq_majortimeo = VAR_2->to_maxval;
 VAR_1->rq_majortimeo += VAR_0;
}
