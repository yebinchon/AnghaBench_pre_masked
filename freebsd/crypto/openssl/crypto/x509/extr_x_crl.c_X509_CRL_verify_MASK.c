
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
typedef TYPE_2__ X509_CRL ;
struct TYPE_5__ {int (* crl_verify ) (TYPE_2__*,int *) ;} ;
typedef int EVP_PKEY ;


 int FUNC_0 (TYPE_2__*,int *) ;

int FUNC_1(X509_CRL *VAR_0, EVP_PKEY *VAR_1)
{
    if (VAR_0->meth->crl_verify)
        return VAR_0->meth->crl_verify(VAR_0, VAR_1);
    return 0;
}
