
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ serf_ssl_context_t ;
typedef int apr_status_t ;
typedef int X509_STORE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

apr_status_t FUNC_2(serf_ssl_context_t *VAR_2)
{
    X509_STORE *VAR_3 = FUNC_0(VAR_2->ctx);

    int VAR_4 = FUNC_1(VAR_3);

    return VAR_4 ? VAR_0 : VAR_1;
}
