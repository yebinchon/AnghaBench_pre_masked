
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int cl_tasks; int cl_server; int cl_protname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct rpc_clnt *VAR_2)
{
 FUNC_0("RPC:       shutting down %s client for %s\n",
   VAR_2->cl_protname, VAR_2->cl_server);

 while (!FUNC_1(&VAR_2->cl_tasks)) {
  FUNC_2(VAR_2);
  FUNC_4(VAR_1,
   FUNC_1(&VAR_2->cl_tasks), 1*VAR_0);
 }

 FUNC_3(VAR_2);
}
