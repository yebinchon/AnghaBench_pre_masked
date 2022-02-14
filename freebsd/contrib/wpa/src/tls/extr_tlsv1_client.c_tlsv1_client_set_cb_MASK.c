
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_client {void (* event_cb ) (void*,int,union tls_event_data*) ;int cert_in_cb; void* cb_ctx; } ;



void FUNC_0(struct tlsv1_client *VAR_0,
    void (*VAR_1)(void *VAR_2, enum tls_event VAR_3,
       union tls_event_data *VAR_4),
    void *VAR_5,
    int VAR_6)
{
 VAR_0->event_cb = VAR_1;
 VAR_0->cb_ctx = VAR_5;
 VAR_0->cert_in_cb = !!VAR_6;
}
