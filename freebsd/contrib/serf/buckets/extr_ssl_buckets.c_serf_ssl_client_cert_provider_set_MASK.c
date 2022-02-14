
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_ssl_need_client_cert_t ;
struct TYPE_3__ {int cert_file_success; void* cert_cache_pool; void* cert_userdata; int cert_callback; } ;
typedef TYPE_1__ serf_ssl_context_t ;


 int FUNC_0 (void**,char*,void*) ;

void FUNC_1(
    serf_ssl_context_t *VAR_0,
    serf_ssl_need_client_cert_t VAR_1,
    void *VAR_2,
    void *VAR_3)
{
    VAR_0->cert_callback = VAR_1;
    VAR_0->cert_userdata = VAR_2;
    VAR_0->cert_cache_pool = VAR_3;
    if (VAR_0->cert_cache_pool) {
        FUNC_0((void**)&VAR_0->cert_file_success,
                              "serf:ssl:cert", VAR_3);
    }
}
