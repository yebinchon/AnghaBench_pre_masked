
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_ssl_need_cert_password_t ;
struct TYPE_3__ {int cert_pw_success; void* cert_pw_cache_pool; void* cert_pw_userdata; int cert_pw_callback; } ;
typedef TYPE_1__ serf_ssl_context_t ;


 int FUNC_0 (void**,char*,void*) ;

void FUNC_1(
    serf_ssl_context_t *VAR_0,
    serf_ssl_need_cert_password_t VAR_1,
    void *VAR_2,
    void *VAR_3)
{
    VAR_0->cert_pw_callback = VAR_1;
    VAR_0->cert_pw_userdata = VAR_2;
    VAR_0->cert_pw_cache_pool = VAR_3;
    if (VAR_0->cert_pw_cache_pool) {
        FUNC_0((void**)&VAR_0->cert_pw_success,
                              "serf:ssl:certpw", VAR_3);
    }
}
