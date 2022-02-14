
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {struct evconnlistener* listener; } ;
struct evconnlistener {int dummy; } ;



struct evconnlistener *
FUNC_0(struct evhttp_bound_socket *VAR_0)
{
 return VAR_0->listener;
}
