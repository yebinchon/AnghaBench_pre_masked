
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int * tk_action; int tk_calldata; TYPE_1__* tk_ops; } ;
struct TYPE_2__ {int (* rpc_call_done ) (struct rpc_task*,int ) ;} ;


 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task*,int ) ;
 int FUNC_3 (struct rpc_task*) ;

void FUNC_4(struct rpc_task *VAR_0)
{
 VAR_0->tk_action = ((void*)0);
 if (VAR_0->tk_ops->rpc_call_done != ((void*)0)) {
  VAR_0->tk_ops->rpc_call_done(VAR_0, VAR_0->tk_calldata);
  if (VAR_0->tk_action != ((void*)0)) {
   FUNC_1(FUNC_0(VAR_0));

   FUNC_3(VAR_0);
  }
 }
}
