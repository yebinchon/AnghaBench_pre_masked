
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_cert; } ;
typedef TYPE_1__ serf_ssl_certificate_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int X509_NAME ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;

apr_hash_t *FUNC_2(
    const serf_ssl_certificate_t *VAR_0,
    apr_pool_t *VAR_1)
{
    X509_NAME *VAR_2 = FUNC_0(VAR_0->ssl_cert);

    if (!VAR_2)
        return ((void*)0);

    return FUNC_1(VAR_2, VAR_1);
}
