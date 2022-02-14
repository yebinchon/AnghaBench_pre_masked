
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int (* header_cb ) (struct evhttp_request*,void*) ;} ;



void
FUNC_0(struct evhttp_request *VAR_0,
    int (*VAR_1)(struct evhttp_request *, void *))
{
 VAR_0->header_cb = VAR_1;
}
