
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_runstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int (*) (void*),int ) ;
 int FUNC_1 (void*) ;

int FUNC_2(struct rpc_task *VAR_2, int (*VAR_3)(void *))
{
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_1;
 return FUNC_0(&VAR_2->tk_runstate, VAR_0,
   VAR_3, VAR_1);
}
