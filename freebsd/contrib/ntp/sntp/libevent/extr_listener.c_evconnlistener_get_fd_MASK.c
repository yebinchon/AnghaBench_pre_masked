
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evconnlistener {TYPE_1__* ops; } ;
typedef int evutil_socket_t ;
struct TYPE_2__ {int (* getfd ) (struct evconnlistener*) ;} ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (struct evconnlistener*) ;

evutil_socket_t
FUNC_3(struct evconnlistener *VAR_0)
{
 evutil_socket_t VAR_1;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->ops->getfd(VAR_0);
 FUNC_1(VAR_0);
 return VAR_1;
}
