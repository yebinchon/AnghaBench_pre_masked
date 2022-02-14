
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int task_cleanup; int state; int * snd_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct rpc_xprt *VAR_3)
{
 VAR_3->snd_task = ((void*)0);
 if (!FUNC_4(VAR_0, &VAR_3->state)) {
  FUNC_3();
  FUNC_0(VAR_1, &VAR_3->state);
  FUNC_2();
 } else
  FUNC_1(VAR_2, &VAR_3->task_cleanup);
}
