
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int *) ;

int FUNC_2(ASN1_OCTET_STRING *VAR_0, X509 *VAR_1)
{
    const ASN1_OCTET_STRING *VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 == ((void*)0))
        return -1;
    return FUNC_0(VAR_0, VAR_2);
}
