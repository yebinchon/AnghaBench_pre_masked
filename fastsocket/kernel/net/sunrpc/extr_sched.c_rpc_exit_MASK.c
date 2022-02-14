
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; int tk_waitqueue; int tk_action; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct rpc_task*) ;

void FUNC_2(struct rpc_task *VAR_1, int VAR_2)
{
 VAR_1->tk_status = VAR_2;
 VAR_1->tk_action = VAR_0;
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1->tk_waitqueue, VAR_1);
}
