
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {struct evhttp_connection* evcon; } ;
struct evhttp_connection {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct evhttp_connection*,int ) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct evrpc_request_wrapper *VAR_4 = VAR_3;
 struct evhttp_connection *VAR_5 = VAR_4->evcon;
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_1(VAR_5, VAR_0);
}
