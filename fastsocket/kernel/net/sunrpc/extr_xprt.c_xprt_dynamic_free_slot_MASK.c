
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int min_reqs; int num_reqs; } ;
struct rpc_rqst {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct rpc_rqst*) ;

__attribute__((used)) static bool FUNC_2(struct rpc_xprt *VAR_0, struct rpc_rqst *VAR_1)
{
 if (FUNC_0(&VAR_0->num_reqs, -1, VAR_0->min_reqs)) {
  FUNC_1(VAR_1);
  return 1;
 }
 return 0;
}
