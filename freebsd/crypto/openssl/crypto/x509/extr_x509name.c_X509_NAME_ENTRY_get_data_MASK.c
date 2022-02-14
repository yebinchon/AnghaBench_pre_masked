
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; } ;
typedef TYPE_1__ X509_NAME_ENTRY ;
typedef int ASN1_STRING ;



ASN1_STRING *FUNC_0(const X509_NAME_ENTRY *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return VAR_0->value;
}
