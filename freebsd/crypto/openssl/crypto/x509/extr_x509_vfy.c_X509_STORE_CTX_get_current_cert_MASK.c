
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * current_cert; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;



X509 *FUNC_0(X509_STORE_CTX *VAR_0)
{
    return VAR_0->current_cert;
}
