
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_action; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_0 ;

int
FUNC_1(struct rpc_task *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 0;
 VAR_1->tk_action = VAR_0;
 return 1;
}
