
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {unsigned long tk_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct rpc_task*,int ) ;

void FUNC_1(struct rpc_task *VAR_2, unsigned long VAR_3)
{
 VAR_2->tk_timeout = VAR_3;
 FUNC_0(&VAR_1, VAR_2, VAR_0);
}
