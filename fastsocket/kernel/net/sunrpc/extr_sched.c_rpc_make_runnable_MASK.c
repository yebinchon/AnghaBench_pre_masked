
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tk_work; } ;
struct rpc_task {int tk_runstate; TYPE_1__ u; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct rpc_task*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (struct rpc_task*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct rpc_task *VAR_3)
{
 bool VAR_4 = !FUNC_4(VAR_3);

 FUNC_3(VAR_3);
 if (!VAR_4)
  return;
 if (FUNC_1(VAR_3)) {
  FUNC_0(&VAR_3->u.tk_work, VAR_1);
  FUNC_2(VAR_2, &VAR_3->u.tk_work);
 } else
  FUNC_5(&VAR_3->tk_runstate, VAR_0);
}
