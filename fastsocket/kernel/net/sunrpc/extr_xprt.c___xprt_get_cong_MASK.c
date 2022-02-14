
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int cong; int cwnd; } ;
struct rpc_task {int tk_pid; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int rq_cong; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct rpc_xprt *VAR_1, struct rpc_task *VAR_2)
{
 struct rpc_rqst *VAR_3 = VAR_2->tk_rqstp;

 if (VAR_3->rq_cong)
  return 1;
 FUNC_1("RPC: %5u xprt_cwnd_limited cong = %lu cwnd = %lu\n",
   VAR_2->tk_pid, VAR_1->cong, VAR_1->cwnd);
 if (FUNC_0(VAR_1))
  return 0;
 VAR_3->rq_cong = 1;
 VAR_1->cong += VAR_0;
 return 1;
}
