
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; int tk_pid; } ;
struct rpc_rqst {int rq_rcv_buf; struct rpc_task* rq_task; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int p_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xdr_stream*,int *,scalar_t__*) ;
 scalar_t__* FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_1, __be32 *VAR_2,
   unsigned int *VAR_3)
{
 struct rpc_task *VAR_4 = VAR_1->rq_task;
 struct xdr_stream VAR_5;

 FUNC_2(&VAR_5, &VAR_1->rq_rcv_buf, VAR_2);

 VAR_2 = FUNC_3(&VAR_5, sizeof(__be32));
 if (FUNC_1(VAR_2 == ((void*)0)))
  return -VAR_0;

 *VAR_3 = 0;
 if (*VAR_2)
  *VAR_3 = 1;

 FUNC_0("RPC: %5u RPCB_%s call %s\n",
   VAR_4->tk_pid, VAR_4->tk_msg.rpc_proc->p_name,
   (*VAR_3 ? "succeeded" : "failed"));
 return 0;
}
