
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_server {void (* log_cb ) (void*,char const*) ;void* log_cb_ctx; } ;



void FUNC_0(struct tlsv1_server *VAR_0,
        void (*VAR_1)(void *VAR_2, const char *VAR_3), void *VAR_4)
{
 VAR_0->log_cb = VAR_1;
 VAR_0->log_cb_ctx = VAR_4;
}
