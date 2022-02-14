
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evconnlistener {int errorcb; } ;
typedef int evconnlistener_errorcb ;


 int FUNC_0 (struct evconnlistener*) ;
 int FUNC_1 (struct evconnlistener*) ;

void
FUNC_2(struct evconnlistener *VAR_0,
    evconnlistener_errorcb VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->errorcb = VAR_1;
 FUNC_1(VAR_0);
}
