
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {struct rpc_task* snd_task; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_ntrans; scalar_t__ rq_bytes_sent; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*,struct rpc_task*) ;

__attribute__((used)) static bool FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_1;
 struct rpc_rqst *VAR_3;

 VAR_3 = VAR_0->tk_rqstp;
 if (VAR_3 == ((void*)0)) {
  VAR_2->snd_task = VAR_0;
  return 1;
 }
 if (FUNC_0(VAR_2, VAR_0)) {
  VAR_2->snd_task = VAR_0;
  VAR_3->rq_bytes_sent = 0;
  VAR_3->rq_ntrans++;
  return 1;
 }
 return 0;
}
