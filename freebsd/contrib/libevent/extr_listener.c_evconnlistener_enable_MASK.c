
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evconnlistener {int enabled; TYPE_1__* ops; scalar_t__ cb; } ;
struct TYPE_2__ {int (* enable ) (struct evconnlistener*) ;} ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (struct evconnlistener*) ;

int
FUNC_3(struct evconnlistener *VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0);
 VAR_0->enabled = 1;
 if (VAR_0->cb)
  VAR_1 = VAR_0->ops->enable(VAR_0);
 else
  VAR_1 = 0;
 FUNC_1(VAR_0);
 return VAR_1;
}
