
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int sending; struct rpc_task* snd_task; int state; } ;
struct rpc_task {int tk_status; scalar_t__ tk_timeout; int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_ntrans; scalar_t__ rq_bytes_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,struct rpc_xprt*) ;
 int FUNC_1 (int *,struct rpc_task*,int *,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct rpc_xprt *VAR_5, struct rpc_task *VAR_6)
{
 struct rpc_rqst *VAR_7 = VAR_6->tk_rqstp;
 int VAR_8;

 if (FUNC_2(VAR_4, &VAR_5->state)) {
  if (VAR_6 == VAR_5->snd_task)
   return 1;
  goto out_sleep;
 }
 VAR_5->snd_task = VAR_6;
 if (VAR_7 != ((void*)0)) {
  VAR_7->rq_bytes_sent = 0;
  VAR_7->rq_ntrans++;
 }

 return 1;

out_sleep:
 FUNC_0("RPC: %5u failed to lock transport %p\n",
   VAR_6->tk_pid, VAR_5);
 VAR_6->tk_timeout = 0;
 VAR_6->tk_status = -VAR_0;
 if (VAR_7 == ((void*)0))
  VAR_8 = VAR_2;
 else if (!VAR_7->rq_ntrans)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_1;
 FUNC_1(&VAR_5->sending, VAR_6, ((void*)0), VAR_8);
 return 0;
}
