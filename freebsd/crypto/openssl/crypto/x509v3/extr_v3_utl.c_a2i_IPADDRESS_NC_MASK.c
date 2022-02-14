
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (unsigned char*,char*) ;
 char* FUNC_6 (char const*,char) ;

ASN1_OCTET_STRING *FUNC_7(const char *VAR_0)
{
    ASN1_OCTET_STRING *VAR_1 = ((void*)0);
    unsigned char VAR_2[32];
    char *VAR_3 = ((void*)0), *VAR_4;
    int VAR_5, VAR_6;
    VAR_4 = FUNC_6(VAR_0, '/');
    if (!VAR_4)
        return ((void*)0);
    VAR_3 = FUNC_4(VAR_0);
    if (!VAR_3)
        return ((void*)0);
    VAR_4 = VAR_3 + (VAR_4 - VAR_0);
    *VAR_4++ = 0;

    VAR_5 = FUNC_5(VAR_2, VAR_3);

    if (!VAR_5)
        goto err;

    VAR_6 = FUNC_5(VAR_2 + VAR_5, VAR_4);

    FUNC_3(VAR_3);
    VAR_3 = ((void*)0);

    if (!VAR_6 || (VAR_5 != VAR_6))
        goto err;

    VAR_1 = FUNC_1();
    if (VAR_1 == ((void*)0))
        goto err;
    if (!FUNC_2(VAR_1, VAR_2, VAR_5 + VAR_6))
        goto err;

    return VAR_1;

 err:
    FUNC_3(VAR_3);
    FUNC_0(VAR_1);
    return ((void*)0);
}
