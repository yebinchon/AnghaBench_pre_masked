
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {struct rpc_clnt* tk_client; int tk_task; } ;
struct rpc_clnt {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_clnt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rpc_task *VAR_0)
{
 struct rpc_clnt *VAR_1 = VAR_0->tk_client;

 if (VAR_1 != ((void*)0)) {

  FUNC_2(&VAR_1->cl_lock);
  FUNC_0(&VAR_0->tk_task);
  FUNC_3(&VAR_1->cl_lock);
  VAR_0->tk_client = ((void*)0);

  FUNC_1(VAR_1);
 }
}
