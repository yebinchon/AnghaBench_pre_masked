
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {void (* cb ) (struct evbuffer*,size_t,size_t,void*) ;void* cbarg; } ;



void FUNC_0(struct evbuffer *VAR_0,
    void (*VAR_1)(struct evbuffer *, size_t, size_t, void *),
    void *VAR_2)
{
 VAR_0->cb = VAR_1;
 VAR_0->cbarg = VAR_2;
}
