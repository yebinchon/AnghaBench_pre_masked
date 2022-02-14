
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int **,int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

X509_EXTENSION *FUNC_4(X509_EXTENSION **VAR_2, int VAR_3,
                                             int VAR_4,
                                             ASN1_OCTET_STRING *VAR_5)
{
    ASN1_OBJECT *VAR_6;
    X509_EXTENSION *VAR_7;

    VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_4, VAR_5);
    if (VAR_7 == ((void*)0))
        FUNC_0(VAR_6);
    return VAR_7;
}
