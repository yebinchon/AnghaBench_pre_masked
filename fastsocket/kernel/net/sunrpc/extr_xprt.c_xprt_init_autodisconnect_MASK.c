
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; int task_cleanup; int state; int recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(unsigned long VAR_3)
{
 struct rpc_xprt *VAR_4 = (struct rpc_xprt *)VAR_3;

 FUNC_3(&VAR_4->transport_lock);
 if (!FUNC_0(&VAR_4->recv))
  goto out_abort;
 if (FUNC_5(VAR_1, &VAR_4->state))
  goto out_abort;
 FUNC_4(&VAR_4->transport_lock);
 FUNC_2(VAR_0, &VAR_4->state);
 FUNC_1(VAR_2, &VAR_4->task_cleanup);
 return;
out_abort:
 FUNC_4(&VAR_4->transport_lock);
}
