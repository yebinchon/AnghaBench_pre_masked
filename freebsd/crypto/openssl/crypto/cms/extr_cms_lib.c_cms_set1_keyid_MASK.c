
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int * FUNC_3 (int *) ;

int FUNC_4(ASN1_OCTET_STRING **VAR_3, X509 *VAR_4)
{
    ASN1_OCTET_STRING *VAR_5 = ((void*)0);
    const ASN1_OCTET_STRING *VAR_6;
    VAR_6 = FUNC_3(VAR_4);
    if (VAR_6 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    VAR_5 = FUNC_1(VAR_6);
    if (!VAR_5) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    FUNC_0(*VAR_3);
    *VAR_3 = VAR_5;
    return 1;
}
