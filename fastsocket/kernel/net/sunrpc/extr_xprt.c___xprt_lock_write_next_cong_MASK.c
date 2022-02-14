
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int sending; int state; } ;


 scalar_t__ FUNC_0 (struct rpc_xprt*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,struct rpc_xprt*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_4(struct rpc_xprt *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->state))
  return;
 if (FUNC_0(VAR_2))
  goto out_unlock;
 if (FUNC_1(&VAR_2->sending, VAR_1, VAR_2))
  return;
out_unlock:
 FUNC_3(VAR_2);
}
