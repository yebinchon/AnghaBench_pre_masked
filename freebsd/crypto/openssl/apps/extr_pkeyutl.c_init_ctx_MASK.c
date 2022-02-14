
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int,int *) ;






 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;




 int VAR_0 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (char*,int *,char**,int *) ;
 int VAR_1 ;
 int * FUNC_18 (char const*,int,char*) ;
 int * FUNC_19 (char const*,int,int ,char*,int *,char*) ;
 int * FUNC_20 (char const*,int,int ,int *,int *,char*) ;

__attribute__((used)) static EVP_PKEY_CTX *FUNC_21(const char *VAR_2, int *VAR_3,
                              const char *VAR_4, int VAR_5, int VAR_6,
                              char *VAR_7, int VAR_8, ENGINE *VAR_9,
                              const int VAR_10)
{
    EVP_PKEY *VAR_11 = ((void*)0);
    EVP_PKEY_CTX *VAR_12 = ((void*)0);
    ENGINE *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0);
    int VAR_15 = -1;
    X509 *VAR_16;
    if (((VAR_8 == 134) || (VAR_8 == 137)
         || (VAR_8 == 136))
        && (VAR_6 != 129 && VAR_2 == ((void*)0))) {
        FUNC_0(VAR_1, "A private key is needed for this operation\n");
        goto end;
    }
    if (!FUNC_17(VAR_7, ((void*)0), &VAR_14, ((void*)0))) {
        FUNC_0(VAR_1, "Error getting password\n");
        goto end;
    }
    switch (VAR_6) {
    case 129:
        VAR_11 = FUNC_19(VAR_4, VAR_5, 0, VAR_14, VAR_9, "Private Key");
        break;

    case 128:
        VAR_11 = FUNC_20(VAR_4, VAR_5, 0, ((void*)0), VAR_9, "Public Key");
        break;

    case 131:
        VAR_16 = FUNC_18(VAR_4, VAR_5, "Certificate");
        if (VAR_16) {
            VAR_11 = FUNC_16(VAR_16);
            FUNC_15(VAR_16);
        }
        break;

    case 130:
        break;

    }


    if (VAR_10)
        VAR_13 = VAR_9;


    if (VAR_2 != ((void*)0)) {
        int VAR_17 = FUNC_13(VAR_2);

        if (VAR_17 == VAR_0) {
            VAR_17 = FUNC_12(VAR_2);
            if (VAR_17 == VAR_0) {
                FUNC_0(VAR_1, "The given KDF \"%s\" is unknown.\n",
                           VAR_2);
                goto end;
            }
        }
        VAR_12 = FUNC_3(VAR_17, VAR_13);
    } else {
        if (VAR_11 == ((void*)0))
            goto end;
        *VAR_3 = FUNC_9(VAR_11);
        VAR_12 = FUNC_2(VAR_11, VAR_13);
        FUNC_7(VAR_11);
    }

    if (VAR_12 == ((void*)0))
        goto end;

    switch (VAR_8) {
    case 134:
        VAR_15 = FUNC_8(VAR_12);
        break;

    case 133:
        VAR_15 = FUNC_10(VAR_12);
        break;

    case 132:
        VAR_15 = FUNC_11(VAR_12);
        break;

    case 135:
        VAR_15 = FUNC_6(VAR_12);
        break;

    case 137:
        VAR_15 = FUNC_4(VAR_12);
        break;

    case 136:
        VAR_15 = FUNC_5(VAR_12);
        break;
    }

    if (VAR_15 <= 0) {
        FUNC_1(VAR_12);
        VAR_12 = ((void*)0);
    }

 end:
    FUNC_14(VAR_14);
    return VAR_12;

}
