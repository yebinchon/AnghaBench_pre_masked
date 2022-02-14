
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpcbind_args {int r_owner; int r_addr; int r_netid; int r_vers; int r_prog; } ;
struct TYPE_4__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {TYPE_2__ tk_msg; int tk_pid; } ;
struct rpc_rqst {int rq_snd_buf; struct rpc_task* rq_task; } ;
typedef void* __be32 ;
struct TYPE_3__ {int p_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int ,int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xdr_stream*,int *,void**) ;
 void** FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct rpc_rqst *VAR_6, __be32 *VAR_7,
       const struct rpcbind_args *VAR_8)
{
 struct rpc_task *VAR_9 = VAR_6->rq_task;
 struct xdr_stream VAR_10;

 FUNC_0("RPC: %5u encoding RPCB_%s call (%u, %u, '%s', '%s')\n",
   VAR_9->tk_pid, VAR_9->tk_msg.rpc_proc->p_name,
   VAR_8->r_prog, VAR_8->r_vers,
   VAR_8->r_netid, VAR_8->r_addr);

 FUNC_4(&VAR_10, &VAR_6->rq_snd_buf, VAR_7);

 VAR_7 = FUNC_5(&VAR_10,
   sizeof(__be32) * (VAR_4 + VAR_5));
 if (FUNC_3(VAR_7 == ((void*)0)))
  return -VAR_0;
 *VAR_7++ = FUNC_2(VAR_8->r_prog);
 *VAR_7 = FUNC_2(VAR_8->r_vers);

 if (FUNC_1(&VAR_10, VAR_8->r_netid, VAR_1))
  return -VAR_0;
 if (FUNC_1(&VAR_10, VAR_8->r_addr, VAR_2))
  return -VAR_0;
 if (FUNC_1(&VAR_10, VAR_8->r_owner, VAR_3))
  return -VAR_0;

 return 0;
}
