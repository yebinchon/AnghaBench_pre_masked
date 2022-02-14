
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * digest; int * algor; } ;
typedef TYPE_1__ X509_SIG ;
typedef int X509_ALGOR ;
typedef int ASN1_OCTET_STRING ;



void FUNC_0(const X509_SIG *VAR_0, const X509_ALGOR **VAR_1,
                   const ASN1_OCTET_STRING **VAR_2)
{
    if (VAR_1)
        *VAR_1 = VAR_0->algor;
    if (VAR_2)
        *VAR_2 = VAR_0->digest;
}
