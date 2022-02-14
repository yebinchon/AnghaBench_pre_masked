
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_action; scalar_t__ tk_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_2(struct rpc_task *VAR_1)
{
 FUNC_0(VAR_1);

 VAR_1->tk_status = 0;
 VAR_1->tk_action = VAR_0;
 FUNC_1(VAR_1);
}
