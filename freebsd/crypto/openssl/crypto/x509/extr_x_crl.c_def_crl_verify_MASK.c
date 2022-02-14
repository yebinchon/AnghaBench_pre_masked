
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crl; int signature; int sig_alg; } ;
typedef TYPE_1__ X509_CRL ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(X509_CRL *VAR_1, EVP_PKEY *VAR_2)
{
    return (FUNC_1(FUNC_0(VAR_0),
                             &VAR_1->sig_alg, &VAR_1->signature, &VAR_1->crl, VAR_2));
}
