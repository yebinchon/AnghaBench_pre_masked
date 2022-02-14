
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int algorithm; } ;
struct TYPE_6__ {TYPE_1__ sig_alg; } ;
struct TYPE_7__ {TYPE_2__ crl; } ;
typedef TYPE_3__ X509_CRL ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,unsigned long*) ;

int FUNC_2(X509_CRL *VAR_2, EVP_PKEY *VAR_3, unsigned long VAR_4)
{
    int VAR_5;
    if (!(VAR_4 & VAR_0))
        return VAR_1;
    VAR_5 = FUNC_0(VAR_2->crl.sig_alg.algorithm);
    return FUNC_1(VAR_3, VAR_5, &VAR_4);
}
