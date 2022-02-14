
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int,int *,unsigned char const**,long) ;

int FUNC_4(int VAR_2, SSL_CTX *VAR_3,
                                const unsigned char *VAR_4, long VAR_5)
{
    int VAR_6;
    const unsigned char *VAR_7;
    EVP_PKEY *VAR_8;

    VAR_7 = VAR_4;
    if ((VAR_8 = FUNC_3(VAR_2, ((void*)0), &VAR_7, (long)VAR_5)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    VAR_6 = FUNC_1(VAR_3, VAR_8);
    FUNC_0(VAR_8);
    return VAR_6;
}
