
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_SIG ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef int PKCS12_SAFEBAG ;
typedef int EVP_CIPHER ;


 int * FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int,int const*,char const*,int,unsigned char*,int,int,int *) ;
 int FUNC_3 (int *) ;

PKCS12_SAFEBAG *FUNC_4(int VAR_0,
                                                    const char *VAR_1,
                                                    int VAR_2,
                                                    unsigned char *VAR_3,
                                                    int VAR_4, int VAR_5,
                                                    PKCS8_PRIV_KEY_INFO *VAR_6)
{
    PKCS12_SAFEBAG *VAR_7;
    const EVP_CIPHER *VAR_8;
    X509_SIG *VAR_9;

    VAR_8 = FUNC_0(VAR_0);
    if (VAR_8)
        VAR_0 = -1;

    VAR_9 = FUNC_2(VAR_0, VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                       VAR_6);
    if (VAR_9 == ((void*)0))
        return ((void*)0);

    VAR_7 = FUNC_1(VAR_9);
    if (VAR_7 == ((void*)0))
        FUNC_3(VAR_9);

    return VAR_7;
}
