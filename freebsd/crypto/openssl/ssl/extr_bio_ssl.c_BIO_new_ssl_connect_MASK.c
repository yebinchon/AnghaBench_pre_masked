
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 () ;

BIO *FUNC_5(SSL_CTX *VAR_0)
{

    BIO *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

    if ((VAR_2 = FUNC_1(FUNC_4())) == ((void*)0))
        return ((void*)0);
    if ((VAR_3 = FUNC_2(VAR_0, 1)) == ((void*)0))
        goto err;
    if ((VAR_1 = FUNC_3(VAR_3, VAR_2)) == ((void*)0))
        goto err;
    return VAR_1;
 err:
    FUNC_0(VAR_2);

    return ((void*)0);
}
