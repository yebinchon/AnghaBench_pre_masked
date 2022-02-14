
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {struct evhttp* http_server; } ;
struct evhttp {int dummy; } ;



struct evhttp *
FUNC_0(struct evhttp_connection *VAR_0)
{
 return VAR_0->http_server;
}
