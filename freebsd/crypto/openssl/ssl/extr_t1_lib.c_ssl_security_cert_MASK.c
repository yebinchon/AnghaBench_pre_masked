
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (int *,int *,int *,int) ;

int FUNC_2(SSL *VAR_7, SSL_CTX *VAR_8, X509 *VAR_9, int VAR_10, int VAR_11)
{
    if (VAR_10)
        VAR_10 = VAR_6;
    if (VAR_11) {
        if (!FUNC_0(VAR_7, VAR_8, VAR_9, VAR_5 | VAR_10))
            return VAR_2;
    } else {
        if (!FUNC_0(VAR_7, VAR_8, VAR_9, VAR_3 | VAR_10))
            return VAR_0;
    }
    if (!FUNC_1(VAR_7, VAR_8, VAR_9, VAR_4 | VAR_10))
        return VAR_1;
    return 1;
}
