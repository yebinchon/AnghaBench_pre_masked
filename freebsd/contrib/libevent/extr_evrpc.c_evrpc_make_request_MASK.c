
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int ev_timeout; struct evrpc_pool* pool; } ;
struct evrpc_pool {int requests; int connections; int base; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evrpc_request_wrapper*,int ) ;
 int FUNC_3 (struct evrpc_pool*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int ,struct evrpc_request_wrapper*) ;
 int VAR_1 ;

int
FUNC_5(struct evrpc_request_wrapper *VAR_2)
{
 struct evrpc_pool *VAR_3 = VAR_2->pool;


 FUNC_4(&VAR_2->ev_timeout, VAR_3->base, VAR_0, VAR_2);


 FUNC_0(FUNC_1(&VAR_3->connections) != ((void*)0));





 FUNC_2(&VAR_3->requests, VAR_2, VAR_1);

 FUNC_3(VAR_3);

 return (0);
}
