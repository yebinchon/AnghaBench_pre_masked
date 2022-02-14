
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_xprt {struct rpc_task* snd_task; } ;
struct rpc_task {TYPE_2__* tk_xprt; struct rpc_rqst* tk_rqstp; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct rpc_rqst {scalar_t__ rq_bytes_sent; TYPE_1__ rq_snd_buf; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rpc_xprt*,struct rpc_task*) ;

__attribute__((used)) static void FUNC_2(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 struct rpc_rqst *VAR_3;

 if (VAR_2 != VAR_1->snd_task)
  return;
 if (VAR_2 == ((void*)0))
  goto out_release;
 VAR_3 = VAR_2->tk_rqstp;
 if (VAR_3 == ((void*)0))
  goto out_release;
 if (VAR_3->rq_bytes_sent == 0)
  goto out_release;
 if (VAR_3->rq_bytes_sent == VAR_3->rq_snd_buf.len)
  goto out_release;
 FUNC_0(VAR_0, &VAR_2->tk_xprt->state);
out_release:
 FUNC_1(VAR_1, VAR_2);
}
