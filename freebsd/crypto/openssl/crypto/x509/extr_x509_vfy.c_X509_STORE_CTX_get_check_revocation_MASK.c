
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_STORE_CTX_check_revocation_fn ;
struct TYPE_3__ {int check_revocation; } ;
typedef TYPE_1__ X509_STORE_CTX ;



X509_STORE_CTX_check_revocation_fn FUNC_0(X509_STORE_CTX *VAR_0)
{
    return VAR_0->check_revocation;
}
