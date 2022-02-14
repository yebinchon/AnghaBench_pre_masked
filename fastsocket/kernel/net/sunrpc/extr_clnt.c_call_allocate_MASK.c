
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_xprt {TYPE_4__* ops; } ;
struct TYPE_7__ {struct rpc_procinfo* rpc_proc; } ;
struct rpc_task {void (* tk_action ) (struct rpc_task*) ;int tk_pid; scalar_t__ tk_status; TYPE_3__ tk_msg; struct rpc_xprt* tk_xprt; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {scalar_t__ rq_callsize; scalar_t__ rq_rcvsize; int * rq_buffer; TYPE_2__* rq_cred; } ;
struct rpc_procinfo {scalar_t__ p_proc; scalar_t__ p_arglen; scalar_t__ p_replen; int * p_decode; } ;
struct TYPE_8__ {int * (* buf_alloc ) (struct rpc_task*,int) ;} ;
struct TYPE_6__ {TYPE_1__* cr_auth; } ;
struct TYPE_5__ {unsigned int au_cslack; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct rpc_task*) ;
 scalar_t__ VAR_3 ;
 void FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct rpc_task*,int) ;
 int FUNC_6 (struct rpc_task*,int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (struct rpc_task*,int) ;

__attribute__((used)) static void
FUNC_9(struct rpc_task *VAR_4)
{
 unsigned int VAR_5 = VAR_4->tk_rqstp->rq_cred->cr_auth->au_cslack;
 struct rpc_rqst *VAR_6 = VAR_4->tk_rqstp;
 struct rpc_xprt *VAR_7 = VAR_4->tk_xprt;
 struct rpc_procinfo *VAR_8 = VAR_4->tk_msg.rpc_proc;

 FUNC_3(VAR_4);

 VAR_4->tk_status = 0;
 VAR_4->tk_action = FUNC_2;

 if (VAR_6->rq_buffer)
  return;

 if (VAR_8->p_proc != 0) {
  FUNC_0(VAR_8->p_arglen == 0);
  if (VAR_8->p_decode != ((void*)0))
   FUNC_0(VAR_8->p_replen == 0);
 }






 VAR_6->rq_callsize = VAR_2 + (VAR_5 << 1) + VAR_8->p_arglen;
 VAR_6->rq_callsize <<= 2;
 VAR_6->rq_rcvsize = VAR_3 + VAR_5 + VAR_8->p_replen;
 VAR_6->rq_rcvsize <<= 2;

 VAR_6->rq_buffer = VAR_7->ops->buf_alloc(VAR_4,
     VAR_6->rq_callsize + VAR_6->rq_rcvsize);
 if (VAR_6->rq_buffer != ((void*)0))
  return;

 FUNC_4("RPC: %5u rpc_buffer allocation failed\n", VAR_4->tk_pid);

 if (FUNC_1(VAR_4) || !FUNC_7()) {
  VAR_4->tk_action = FUNC_9;
  FUNC_5(VAR_4, VAR_1>>4);
  return;
 }

 FUNC_6(VAR_4, -VAR_0);
}
