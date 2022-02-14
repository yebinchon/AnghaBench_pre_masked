
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct evconnlistener {TYPE_1__* ops; } ;
struct TYPE_2__ {struct event_base* (* getbase ) (struct evconnlistener*) ;} ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;
 struct event_base* FUNC_2 (struct evconnlistener*) ;

struct event_base *
FUNC_3(struct evconnlistener *VAR_0)
{
 struct event_base *VAR_1;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->ops->getbase(VAR_0);
 FUNC_1(VAR_0);
 return VAR_1;
}
