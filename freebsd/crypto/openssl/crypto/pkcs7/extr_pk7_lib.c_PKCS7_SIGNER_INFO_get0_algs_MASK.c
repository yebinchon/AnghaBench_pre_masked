
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int * digest_enc_alg; int * digest_alg; int * pkey; } ;
typedef TYPE_1__ PKCS7_SIGNER_INFO ;
typedef int EVP_PKEY ;



void FUNC_0(PKCS7_SIGNER_INFO *VAR_0, EVP_PKEY **VAR_1,
                                 X509_ALGOR **VAR_2, X509_ALGOR **VAR_3)
{
    if (VAR_1)
        *VAR_1 = VAR_0->pkey;
    if (VAR_2)
        *VAR_2 = VAR_0->digest_alg;
    if (VAR_3)
        *VAR_3 = VAR_0->digest_enc_alg;
}
