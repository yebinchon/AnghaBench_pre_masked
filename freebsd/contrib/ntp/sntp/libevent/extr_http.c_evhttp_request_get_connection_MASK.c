
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {struct evhttp_connection* evcon; } ;
struct evhttp_connection {int dummy; } ;



struct evhttp_connection *
FUNC_0(struct evhttp_request *VAR_0)
{
 return VAR_0->evcon;
}
