
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {void (* cb ) (struct evrpc_status*,void*,void*,void*) ;void* cb_arg; } ;



void
FUNC_0(struct evrpc_request_wrapper *VAR_0,
    void (*VAR_1)(struct evrpc_status*, void *VAR_2, void *VAR_3, void *VAR_4),
    void *VAR_5)
{
 VAR_0->cb = VAR_1;
 VAR_0->cb_arg = VAR_5;
}
