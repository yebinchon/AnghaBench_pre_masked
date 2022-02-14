
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_5__ {TYPE_1__* mac; } ;
struct TYPE_4__ {int * iter; int * salt; int dinfo; } ;
typedef TYPE_2__ PKCS12 ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int ,int const**,int const**) ;

void FUNC_1(const ASN1_OCTET_STRING **VAR_0,
                     const X509_ALGOR **VAR_1,
                     const ASN1_OCTET_STRING **VAR_2,
                     const ASN1_INTEGER **VAR_3,
                     const PKCS12 *VAR_4)
{
    if (VAR_4->mac) {
        FUNC_0(VAR_4->mac->dinfo, VAR_1, VAR_0);
        if (VAR_2)
            *VAR_2 = VAR_4->mac->salt;
        if (VAR_3)
            *VAR_3 = VAR_4->mac->iter;
    } else {
        if (VAR_0)
            *VAR_0 = ((void*)0);
        if (VAR_1)
            *VAR_1 = ((void*)0);
        if (VAR_2)
            *VAR_2 = ((void*)0);
        if (VAR_3)
            *VAR_3 = ((void*)0);
    }
}
