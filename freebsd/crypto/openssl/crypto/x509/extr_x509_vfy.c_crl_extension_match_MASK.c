
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_CRL ;
typedef int ASN1_OCTET_STRING ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(X509_CRL *VAR_0, X509_CRL *VAR_1, int VAR_2)
{
    ASN1_OCTET_STRING *VAR_3, *VAR_4;
    int VAR_5;
    VAR_5 = FUNC_2(VAR_0, VAR_2, -1);
    if (VAR_5 >= 0) {

        if (FUNC_2(VAR_0, VAR_2, VAR_5) != -1)
            return 0;
        VAR_3 = FUNC_3(FUNC_1(VAR_0, VAR_5));
    } else
        VAR_3 = ((void*)0);

    VAR_5 = FUNC_2(VAR_1, VAR_2, -1);

    if (VAR_5 >= 0) {

        if (FUNC_2(VAR_1, VAR_2, VAR_5) != -1)
            return 0;
        VAR_4 = FUNC_3(FUNC_1(VAR_1, VAR_5));
    } else
        VAR_4 = ((void*)0);

    if (!VAR_3 && !VAR_4)
        return 1;

    if (!VAR_3 || !VAR_4)
        return 0;

    if (FUNC_0(VAR_3, VAR_4))
        return 0;

    return 1;
}
