
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int cong; } ;
struct rpc_rqst {scalar_t__ rq_cong; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_1(struct rpc_xprt *VAR_1, struct rpc_rqst *VAR_2)
{
 if (!VAR_2->rq_cong)
  return;
 VAR_2->rq_cong = 0;
 VAR_1->cong -= VAR_0;
 FUNC_0(VAR_1);
}
