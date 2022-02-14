
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int (* cert_cb ) (void*,struct http_cert*) ;void* cert_cb_ctx; } ;



void FUNC_0(struct http_ctx *VAR_0,
        int (*VAR_1)(void *VAR_2, struct http_cert *VAR_3),
        void *VAR_4)
{
 VAR_0->cert_cb = VAR_1;
 VAR_0->cert_cb_ctx = VAR_4;
}
