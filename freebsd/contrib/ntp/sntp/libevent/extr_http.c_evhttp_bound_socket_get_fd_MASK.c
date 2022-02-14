
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int listener; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ) ;

evutil_socket_t
FUNC_1(struct evhttp_bound_socket *VAR_0)
{
 return FUNC_0(VAR_0->listener);
}
