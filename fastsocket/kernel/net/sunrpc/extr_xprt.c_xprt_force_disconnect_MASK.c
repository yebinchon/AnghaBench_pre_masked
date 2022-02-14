
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; int task_cleanup; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct rpc_xprt*,int ) ;

void FUNC_6(struct rpc_xprt *VAR_4)
{

 FUNC_2(&VAR_4->transport_lock);
 FUNC_1(VAR_1, &VAR_4->state);

 if (FUNC_4(VAR_2, &VAR_4->state) == 0)
  FUNC_0(VAR_3, &VAR_4->task_cleanup);
 FUNC_5(VAR_4, -VAR_0);
 FUNC_3(&VAR_4->transport_lock);
}
