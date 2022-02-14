
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ssl_cert; } ;
typedef TYPE_1__ serf_ssl_certificate_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int X509 ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int *,int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;

apr_status_t FUNC_4(
    serf_ssl_certificate_t **VAR_2,
    const char *VAR_3,
    apr_pool_t *VAR_4)
{
    FILE *VAR_5 = FUNC_3(VAR_3, "r");

    if (VAR_5) {
        X509 *VAR_6 = FUNC_0(VAR_5, ((void*)0), ((void*)0), ((void*)0));
        FUNC_2(VAR_5);

        if (VAR_6) {
            *VAR_2 = FUNC_1(VAR_4, sizeof(serf_ssl_certificate_t));
            (*VAR_2)->ssl_cert = VAR_6;

            return VAR_0;
        }
    }

    return VAR_1;
}
