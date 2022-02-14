
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_task; int tk_flags; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {int cl_lock; int cl_tasks; scalar_t__ cl_softrtry; int cl_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
void FUNC_5(struct rpc_task *VAR_1, struct rpc_clnt *VAR_2)
{
 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_1);
  VAR_1->tk_client = VAR_2;
  FUNC_0(&VAR_2->cl_count);
  if (VAR_2->cl_softrtry)
   VAR_1->tk_flags |= VAR_0;

  FUNC_3(&VAR_2->cl_lock);
  FUNC_1(&VAR_1->tk_task, &VAR_2->cl_tasks);
  FUNC_4(&VAR_2->cl_lock);
 }
}
