
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpcbind_args {int r_port; int r_prot; int r_vers; int r_prog; } ;
struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; int tk_pid; } ;
struct rpc_rqst {int rq_snd_buf; struct rpc_task* rq_task; } ;
typedef void* __be32 ;
struct TYPE_3__ {int p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xdr_stream*,int *,void**) ;
 void** FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct rpc_rqst *VAR_2, __be32 *VAR_3,
       const struct rpcbind_args *VAR_4)
{
 struct rpc_task *VAR_5 = VAR_2->rq_task;
 struct xdr_stream VAR_6;

 FUNC_0("RPC: %5u encoding PMAP_%s call (%u, %u, %d, %u)\n",
   VAR_5->tk_pid, VAR_5->tk_msg.rpc_proc->p_name,
   VAR_4->r_prog, VAR_4->r_vers, VAR_4->r_prot, VAR_4->r_port);

 FUNC_3(&VAR_6, &VAR_2->rq_snd_buf, VAR_3);

 VAR_3 = FUNC_4(&VAR_6, sizeof(__be32) * VAR_1);
 if (FUNC_2(VAR_3 == ((void*)0)))
  return -VAR_0;

 *VAR_3++ = FUNC_1(VAR_4->r_prog);
 *VAR_3++ = FUNC_1(VAR_4->r_vers);
 *VAR_3++ = FUNC_1(VAR_4->r_prot);
 *VAR_3 = FUNC_1(VAR_4->r_port);

 return 0;
}
