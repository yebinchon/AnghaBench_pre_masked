
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

X509_EXTENSION *FUNC_6(X509_EXTENSION **VAR_2,
                                             const ASN1_OBJECT *VAR_3, int VAR_4,
                                             ASN1_OCTET_STRING *VAR_5)
{
    X509_EXTENSION *VAR_6;

    if ((VAR_2 == ((void*)0)) || (*VAR_2 == ((void*)0))) {
        if ((VAR_6 = FUNC_1()) == ((void*)0)) {
            FUNC_5(VAR_1,
                    VAR_0);
            return ((void*)0);
        }
    } else
        VAR_6 = *VAR_2;

    if (!FUNC_4(VAR_6, VAR_3))
        goto err;
    if (!FUNC_2(VAR_6, VAR_4))
        goto err;
    if (!FUNC_3(VAR_6, VAR_5))
        goto err;

    if ((VAR_2 != ((void*)0)) && (*VAR_2 == ((void*)0)))
        *VAR_2 = VAR_6;
    return VAR_6;
 err:
    if ((VAR_2 == ((void*)0)) || (VAR_6 != *VAR_2))
        FUNC_0(VAR_6);
    return ((void*)0);
}
