
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {unsigned long cwnd; unsigned long cong; } ;
struct rpc_task {struct rpc_xprt* tk_xprt; struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (struct rpc_xprt*) ;
 int FUNC_2 (struct rpc_xprt*,struct rpc_rqst*) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long) ;

void FUNC_4(struct rpc_task *VAR_2, int VAR_3)
{
 struct rpc_rqst *VAR_4 = VAR_2->tk_rqstp;
 struct rpc_xprt *VAR_5 = VAR_2->tk_xprt;
 unsigned long VAR_6 = VAR_5->cwnd;

 if (VAR_3 >= 0 && VAR_6 <= VAR_5->cong) {


  VAR_6 += (VAR_1 * VAR_1 + (VAR_6 >> 1)) / VAR_6;
  if (VAR_6 > FUNC_0(VAR_5))
   VAR_6 = FUNC_0(VAR_5);
  FUNC_1(VAR_5);
 } else if (VAR_3 == -VAR_0) {
  VAR_6 >>= 1;
  if (VAR_6 < VAR_1)
   VAR_6 = VAR_1;
 }
 FUNC_3("RPC:       cong %ld, cwnd was %ld, now %ld\n",
   VAR_5->cong, VAR_5->cwnd, VAR_6);
 VAR_5->cwnd = VAR_6;
 FUNC_2(VAR_5, VAR_4);
}
