
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evconnlistener {void* user_data; scalar_t__ cb; scalar_t__ enabled; } ;
typedef scalar_t__ evconnlistener_cb ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (struct evconnlistener*) ;

void
FUNC_3(struct evconnlistener *VAR_0,
    evconnlistener_cb VAR_1, void *VAR_2)
{
 int VAR_3 = 0;
 FUNC_0(VAR_0);
 if (VAR_0->enabled && !VAR_0->cb)
  VAR_3 = 1;
 VAR_0->cb = VAR_1;
 VAR_0->user_data = VAR_2;
 if (VAR_3)
  FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
