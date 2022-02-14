
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
typedef int X509 ;
struct TYPE_3__ {int * signatureAlgorithm; int * digestAlgorithm; int * signer; int * pkey; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ CMS_SignerInfo ;



void FUNC_0(CMS_SignerInfo *VAR_0, EVP_PKEY **VAR_1,
                              X509 **VAR_2, X509_ALGOR **VAR_3,
                              X509_ALGOR **VAR_4)
{
    if (VAR_1)
        *VAR_1 = VAR_0->pkey;
    if (VAR_2)
        *VAR_2 = VAR_0->signer;
    if (VAR_3)
        *VAR_3 = VAR_0->digestAlgorithm;
    if (VAR_4)
        *VAR_4 = VAR_0->signatureAlgorithm;
}
