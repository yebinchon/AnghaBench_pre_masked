
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_xprt {TYPE_3__* ops; int transport_lock; scalar_t__ idle_timeout; scalar_t__ last_used; int timer; int recv; struct rpc_task* snd_task; } ;
struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; TYPE_2__* tk_client; int tk_calldata; TYPE_1__* tk_ops; } ;
struct rpc_rqst {int (* rq_release_snd_buf ) (struct rpc_rqst*) ;int * rq_cred; scalar_t__ rq_buffer; int rq_list; struct rpc_xprt* rq_xprt; } ;
struct TYPE_6__ {int (* buf_free ) (scalar_t__) ;int (* release_request ) (struct rpc_task*) ;int (* release_xprt ) (struct rpc_xprt*,struct rpc_task*) ;} ;
struct TYPE_5__ {int cl_metrics; int cl_xprt; } ;
struct TYPE_4__ {int (* rpc_count_stats ) (struct rpc_task*,int ) ;} ;


 int FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (char*,int ,struct rpc_rqst*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 struct rpc_xprt* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct rpc_task*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rpc_task*,int ) ;
 int FUNC_14 (struct rpc_xprt*,struct rpc_task*) ;
 int FUNC_15 (struct rpc_task*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct rpc_rqst*) ;
 int FUNC_18 (struct rpc_rqst*) ;
 int FUNC_19 (struct rpc_xprt*,struct rpc_rqst*) ;
 scalar_t__ FUNC_20 (struct rpc_xprt*) ;
 int FUNC_21 (struct rpc_xprt*,struct rpc_task*) ;

void FUNC_22(struct rpc_task *VAR_1)
{
 struct rpc_xprt *VAR_2;
 struct rpc_rqst *VAR_3 = VAR_1->tk_rqstp;

 if (VAR_3 == ((void*)0)) {
  if (VAR_1->tk_client) {
   FUNC_8();
   VAR_2 = FUNC_7(VAR_1->tk_client->cl_xprt);
   if (VAR_2->snd_task == VAR_1)
    FUNC_21(VAR_2, VAR_1);
   FUNC_9();
  }
  return;
 }

 VAR_2 = VAR_3->rq_xprt;
 if (VAR_1->tk_ops->rpc_count_stats != ((void*)0))
  VAR_1->tk_ops->rpc_count_stats(VAR_1, VAR_1->tk_calldata);
 else if (VAR_1->tk_client)
  FUNC_10(VAR_1, VAR_1->tk_client->cl_metrics);
 FUNC_11(&VAR_2->transport_lock);
 VAR_2->ops->release_xprt(VAR_2, VAR_1);
 if (VAR_2->ops->release_request)
  VAR_2->ops->release_request(VAR_1);
 if (!FUNC_4(&VAR_3->rq_list))
  FUNC_3(&VAR_3->rq_list);
 VAR_2->last_used = VAR_0;
 if (FUNC_4(&VAR_2->recv) && FUNC_20(VAR_2))
  FUNC_5(&VAR_2->timer,
    VAR_2->last_used + VAR_2->idle_timeout);
 FUNC_12(&VAR_2->transport_lock);
 if (VAR_3->rq_buffer)
  VAR_2->ops->buf_free(VAR_3->rq_buffer);
 if (VAR_3->rq_cred != ((void*)0))
  FUNC_6(VAR_3->rq_cred);
 VAR_1->tk_rqstp = ((void*)0);
 if (VAR_3->rq_release_snd_buf)
  VAR_3->rq_release_snd_buf(VAR_3);

 FUNC_1("RPC: %5u release request %p\n", VAR_1->tk_pid, VAR_3);
 if (FUNC_2(!FUNC_0(VAR_3)))
  FUNC_19(VAR_2, VAR_3);
 else
  FUNC_18(VAR_3);
}
