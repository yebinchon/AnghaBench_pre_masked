
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {void (* error_cb ) (int,void*) ;} ;



void
FUNC_0(struct evhttp_request *VAR_0,
    void (*VAR_1)(enum evhttp_request_error, void *))
{
 VAR_0->error_cb = VAR_1;
}
