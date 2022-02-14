
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_ssl_server_cert_chain_cb_t ;
typedef int serf_ssl_need_server_cert_t ;
struct TYPE_3__ {void* server_cert_userdata; int server_cert_chain_callback; int server_cert_callback; } ;
typedef TYPE_1__ serf_ssl_context_t ;



void FUNC_0(
    serf_ssl_context_t *VAR_0,
    serf_ssl_need_server_cert_t VAR_1,
    serf_ssl_server_cert_chain_cb_t VAR_2,
    void *VAR_3)
{
    VAR_0->server_cert_callback = VAR_1;
    VAR_0->server_cert_chain_callback = VAR_2;
    VAR_0->server_cert_userdata = VAR_3;
}
