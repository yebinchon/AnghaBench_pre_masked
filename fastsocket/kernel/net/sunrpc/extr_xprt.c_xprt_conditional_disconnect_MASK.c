
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {unsigned int connect_cookie; int transport_lock; int task_cleanup; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rpc_xprt*) ;
 int FUNC_7 (struct rpc_xprt*,int ) ;

void FUNC_8(struct rpc_xprt *VAR_5, unsigned int VAR_6)
{

 FUNC_2(&VAR_5->transport_lock);
 if (VAR_6 != VAR_5->connect_cookie)
  goto out;
 if (FUNC_5(VAR_2, &VAR_5->state) || !FUNC_6(VAR_5))
  goto out;
 FUNC_1(VAR_1, &VAR_5->state);

 if (FUNC_4(VAR_3, &VAR_5->state) == 0)
  FUNC_0(VAR_4, &VAR_5->task_cleanup);
 FUNC_7(VAR_5, -VAR_0);
out:
 FUNC_3(&VAR_5->transport_lock);
}
