
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int*,int*,int *) ;
 int FUNC_2 (int *,int,int,int,int *) ;
 int FUNC_3 (int *,int,int,int,int *) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_2, SSL_CTX *VAR_3, X509 *VAR_4, int VAR_5)
{

    int VAR_6, VAR_7, VAR_8;

    if ((FUNC_0(VAR_4) & VAR_0) != 0)
        return 1;
    if (!FUNC_1(VAR_4, &VAR_7, &VAR_8, &VAR_6, ((void*)0)))
        VAR_6 = -1;

    if (VAR_7 == VAR_1)
        VAR_7 = VAR_8;
    if (VAR_2)
        return FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7, VAR_4);
    else
        return FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7, VAR_4);
}
