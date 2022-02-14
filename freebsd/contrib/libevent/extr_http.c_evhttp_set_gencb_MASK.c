
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {void (* gencb ) (struct evhttp_request*,void*) ;void* gencbarg; } ;



void
FUNC_0(struct evhttp *VAR_0,
    void (*VAR_1)(struct evhttp_request *, void *), void *VAR_2)
{
 VAR_0->gencb = VAR_1;
 VAR_0->gencbarg = VAR_2;
}
