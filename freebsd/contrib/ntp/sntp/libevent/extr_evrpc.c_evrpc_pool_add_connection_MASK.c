
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int dummy; } ;
struct evrpc_pool {int requests; int timeout; int * base; int connections; } ;
struct evhttp_connection {int timeout; int * http_server; } ;


 int FUNC_0 (int ) ;
 struct evrpc_request_wrapper* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evhttp_connection*,int ) ;
 int FUNC_3 (int *,struct evrpc_request_wrapper*,int ) ;
 int FUNC_4 (struct evhttp_connection*,int *) ;
 int FUNC_5 (struct evhttp_connection*,int ) ;
 int FUNC_6 (struct evhttp_connection*,struct evrpc_request_wrapper*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

void
FUNC_8(struct evrpc_pool *VAR_1,
    struct evhttp_connection *VAR_2)
{
 FUNC_0(VAR_2->http_server == ((void*)0));
 FUNC_2(&VAR_1->connections, VAR_2, VAR_0);




 if (VAR_1->base != ((void*)0))
  FUNC_4(VAR_2, VAR_1->base);





 if (!FUNC_7(&VAR_2->timeout))
  FUNC_5(VAR_2, VAR_1->timeout);






 if (FUNC_1(&VAR_1->requests) != ((void*)0)) {
  struct evrpc_request_wrapper *VAR_3 =
      FUNC_1(&VAR_1->requests);
  FUNC_3(&VAR_1->requests, VAR_3, VAR_0);
  FUNC_6(VAR_2, VAR_3);
 }
}
