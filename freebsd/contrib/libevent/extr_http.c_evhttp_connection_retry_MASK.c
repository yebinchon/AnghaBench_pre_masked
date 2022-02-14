
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int state; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct evhttp_connection *VAR_4 = VAR_3;

 VAR_4->state = VAR_0;
 FUNC_0(VAR_4);
}
