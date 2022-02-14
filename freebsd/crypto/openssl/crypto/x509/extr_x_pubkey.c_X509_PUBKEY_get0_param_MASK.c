
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* algor; TYPE_1__* public_key; } ;
typedef TYPE_2__ X509_PUBKEY ;
struct TYPE_8__ {int * algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_6__ {unsigned char* data; int length; } ;
typedef int ASN1_OBJECT ;



int FUNC_0(ASN1_OBJECT **VAR_0,
                           const unsigned char **VAR_1, int *VAR_2,
                           X509_ALGOR **VAR_3, X509_PUBKEY *VAR_4)
{
    if (VAR_0)
        *VAR_0 = VAR_4->algor->algorithm;
    if (VAR_1) {
        *VAR_1 = VAR_4->public_key->data;
        *VAR_2 = VAR_4->public_key->length;
    }
    if (VAR_3)
        *VAR_3 = VAR_4->algor;
    return 1;
}
