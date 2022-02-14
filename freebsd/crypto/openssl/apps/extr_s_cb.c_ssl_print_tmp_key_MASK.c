
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int BIO ;


 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int) ;



 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char const* FUNC_10 (int) ;
 int FUNC_11 (int *,int **) ;

int FUNC_12(BIO *VAR_0, SSL *VAR_1)
{
    EVP_PKEY *VAR_2;

    if (!FUNC_11(VAR_1, &VAR_2))
        return 1;
    FUNC_1(VAR_0, "Server Temp Key: ");
    switch (FUNC_9(VAR_2)) {
    case 128:
        FUNC_0(VAR_0, "RSA, %d bits\n", FUNC_6(VAR_2));
        break;

    case 130:
        FUNC_0(VAR_0, "DH, %d bits\n", FUNC_6(VAR_2));
        break;

    case 129:
        {
            EC_KEY *VAR_3 = FUNC_8(VAR_2);
            int VAR_4;
            const char *VAR_5;
            VAR_4 = FUNC_2(FUNC_4(VAR_3));
            FUNC_3(VAR_3);
            VAR_5 = FUNC_5(VAR_4);
            if (VAR_5 == ((void*)0))
                VAR_5 = FUNC_10(VAR_4);
            FUNC_0(VAR_0, "ECDH, %s, %d bits\n", VAR_5, FUNC_6(VAR_2));
        }
    break;

    default:
        FUNC_0(VAR_0, "%s, %d bits\n", FUNC_10(FUNC_9(VAR_2)),
                   FUNC_6(VAR_2));
    }
    FUNC_7(VAR_2);
    return 1;
}
