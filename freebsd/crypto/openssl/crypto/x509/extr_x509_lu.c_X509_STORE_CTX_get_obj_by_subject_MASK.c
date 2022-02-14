
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509_OBJECT ;
typedef int X509_NAME ;
typedef int X509_LOOKUP_TYPE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int *,int *) ;

X509_OBJECT *FUNC_3(X509_STORE_CTX *VAR_0,
                                               X509_LOOKUP_TYPE VAR_1,
                                               X509_NAME *VAR_2)
{
    X509_OBJECT *VAR_3 = FUNC_1();

    if (VAR_3 == ((void*)0))
        return ((void*)0);
    if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
