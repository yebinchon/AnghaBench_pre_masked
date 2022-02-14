
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int tk_action; TYPE_1__* tk_ops; } ;
struct TYPE_2__ {int * rpc_call_prepare; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(struct rpc_task *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 0;
 VAR_2->tk_action = VAR_0;
 if (VAR_2->tk_ops->rpc_call_prepare != ((void*)0))
  VAR_2->tk_action = VAR_1;
 return 1;
}
