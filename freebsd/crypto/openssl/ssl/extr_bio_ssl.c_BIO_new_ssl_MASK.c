
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

BIO *FUNC_7(SSL_CTX *VAR_1, int VAR_2)
{
    BIO *VAR_3;
    SSL *VAR_4;

    if ((VAR_3 = FUNC_2(FUNC_0())) == ((void*)0))
        return ((void*)0);
    if ((VAR_4 = FUNC_4(VAR_1)) == ((void*)0)) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }
    if (VAR_2)
        FUNC_6(VAR_4);
    else
        FUNC_5(VAR_4);

    FUNC_3(VAR_3, VAR_4, VAR_0);
    return VAR_3;
}
