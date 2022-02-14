
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {int * ssl; } ;
struct bufferevent {int dummy; } ;
typedef int SSL ;


 struct bufferevent_openssl* FUNC_0 (struct bufferevent*) ;

SSL *
FUNC_1(struct bufferevent *VAR_0)
{
 struct bufferevent_openssl *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 return VAR_1->ssl;
}
