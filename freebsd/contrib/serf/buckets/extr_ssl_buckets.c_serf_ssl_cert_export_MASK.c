
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_cert; } ;
typedef TYPE_1__ serf_ssl_certificate_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,unsigned char**) ;

const char *FUNC_4(
    const serf_ssl_certificate_t *VAR_0,
    apr_pool_t *VAR_1)
{
    char *VAR_2;
    char *VAR_3;
    int VAR_4;
    unsigned char *VAR_5;


    VAR_4 = FUNC_3(VAR_0->ssl_cert, ((void*)0));
    if (VAR_4 < 0) {
        return ((void*)0);
    }

    VAR_2 = FUNC_2(VAR_1, VAR_4);
    VAR_5 = (unsigned char *)VAR_2;
    VAR_4 = FUNC_3(VAR_0->ssl_cert, &VAR_5);
    if (VAR_4 < 0) {
        return ((void*)0);
    }

    VAR_3 = FUNC_2(VAR_1, FUNC_1(VAR_4));
    FUNC_0(VAR_3, VAR_2, VAR_4);

    return VAR_3;
}
