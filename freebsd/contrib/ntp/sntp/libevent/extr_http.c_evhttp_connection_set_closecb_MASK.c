
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {void (* closecb ) (struct evhttp_connection*,void*) ;void* closecb_arg; } ;



void
FUNC_0(struct evhttp_connection *VAR_0,
    void (*VAR_1)(struct evhttp_connection *, void *), void *VAR_2)
{
 VAR_0->closecb = VAR_1;
 VAR_0->closecb_arg = VAR_2;
}
