
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_uri {int port; } ;


 struct evhttp_uri* FUNC_0 (int,int) ;

struct evhttp_uri *
FUNC_1(void)
{
 struct evhttp_uri *VAR_0 = FUNC_0(sizeof(struct evhttp_uri), 1);
 if (VAR_0)
  VAR_0->port = -1;
 return VAR_0;
}
