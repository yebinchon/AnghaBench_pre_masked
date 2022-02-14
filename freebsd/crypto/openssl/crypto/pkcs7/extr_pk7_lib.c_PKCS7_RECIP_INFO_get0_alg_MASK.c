
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int * key_enc_algor; } ;
typedef TYPE_1__ PKCS7_RECIP_INFO ;



void FUNC_0(PKCS7_RECIP_INFO *VAR_0, X509_ALGOR **VAR_1)
{
    if (VAR_1)
        *VAR_1 = VAR_0->key_enc_algor;
}
