
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evconnlistener {TYPE_1__* ops; int * errorcb; int * cb; } ;
struct TYPE_2__ {int (* shutdown ) (struct evconnlistener*) ;} ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (struct evconnlistener*) ;

void
FUNC_3(struct evconnlistener *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->cb = ((void*)0);
 VAR_0->errorcb = ((void*)0);
 if (VAR_0->ops->shutdown)
  VAR_0->ops->shutdown(VAR_0);
 FUNC_1(VAR_0);
}
