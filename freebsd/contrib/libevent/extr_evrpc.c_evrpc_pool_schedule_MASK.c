
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int dummy; } ;
struct evrpc_pool {int requests; } ;
struct evhttp_connection {int dummy; } ;


 struct evrpc_request_wrapper* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evrpc_request_wrapper*,int ) ;
 struct evhttp_connection* FUNC_2 (struct evrpc_pool*) ;
 int FUNC_3 (struct evhttp_connection*,struct evrpc_request_wrapper*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct evrpc_pool *VAR_1)
{
 struct evrpc_request_wrapper *VAR_2 = FUNC_0(&VAR_1->requests);
 struct evhttp_connection *VAR_3;


 if (VAR_2 == ((void*)0))
  return;

 if ((VAR_3 = FUNC_2(VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1->requests, VAR_2, VAR_0);
  FUNC_3(VAR_3, VAR_2);
 }
}
