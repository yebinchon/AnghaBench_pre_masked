
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_count; int cl_tasks; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct rpc_clnt*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct rpc_clnt *VAR_1)
{
 FUNC_1("RPC:       rpc_release_client(%p)\n", VAR_1);

 if (FUNC_2(&VAR_1->cl_tasks))
  FUNC_4(&VAR_0);
 if (FUNC_0(&VAR_1->cl_count))
  FUNC_3(VAR_1);
}
