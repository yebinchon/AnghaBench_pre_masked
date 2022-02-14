
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 size_t FUNC_2 (int *,char*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 size_t VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char*,size_t*) ;
 int FUNC_10 (int *,unsigned char*,unsigned int) ;
 int * VAR_1 ;

int FUNC_11(BIO *VAR_2, unsigned char *VAR_3, BIO *VAR_4, int VAR_5, int VAR_6,
          EVP_PKEY *VAR_7, unsigned char *VAR_8, int VAR_9,
          const char *VAR_10, const char *VAR_11,
          const char *VAR_12)
{
    size_t VAR_13;
    int VAR_14;

    while (FUNC_3(VAR_4) || !FUNC_0(VAR_4)) {
        VAR_14 = FUNC_6(VAR_4, (char *)VAR_3, VAR_0);
        if (VAR_14 < 0) {
            FUNC_4(VAR_1, "Read Error in %s\n", VAR_12);
            FUNC_8(VAR_1);
            return 1;
        }
        if (VAR_14 == 0)
            break;
    }
    if (VAR_8 != ((void*)0)) {
        EVP_MD_CTX *VAR_15;
        FUNC_1(VAR_4, &VAR_15);
        VAR_14 = FUNC_10(VAR_15, VAR_8, (unsigned int)VAR_9);
        if (VAR_14 > 0) {
            FUNC_4(VAR_2, "Verified OK\n");
        } else if (VAR_14 == 0) {
            FUNC_4(VAR_2, "Verification Failure\n");
            return 1;
        } else {
            FUNC_4(VAR_1, "Error Verifying Data\n");
            FUNC_8(VAR_1);
            return 1;
        }
        return 0;
    }
    if (VAR_7 != ((void*)0)) {
        EVP_MD_CTX *VAR_16;
        FUNC_1(VAR_4, &VAR_16);
        VAR_13 = VAR_0;
        if (!FUNC_9(VAR_16, VAR_3, &VAR_13)) {
            FUNC_4(VAR_1, "Error Signing Data\n");
            FUNC_8(VAR_1);
            return 1;
        }
    } else {
        VAR_13 = FUNC_2(VAR_4, (char *)VAR_3, VAR_0);
        if ((int)VAR_13 < 0) {
            FUNC_8(VAR_1);
            return 1;
        }
    }

    if (VAR_6) {
        FUNC_7(VAR_2, VAR_3, VAR_13);
    } else if (VAR_5 == 2) {
        for (VAR_14 = 0; VAR_14 < (int)VAR_13; VAR_14++)
            FUNC_4(VAR_2, "%02x", VAR_3[VAR_14]);
        FUNC_4(VAR_2, " *%s\n", VAR_12);
    } else {
        if (VAR_10 != ((void*)0)) {
            FUNC_5(VAR_2, VAR_10);
            if (VAR_11 != ((void*)0))
                FUNC_4(VAR_2, "-%s", VAR_11);
            FUNC_4(VAR_2, "(%s)= ", VAR_12);
        } else if (VAR_11 != ((void*)0)) {
            FUNC_4(VAR_2, "%s(%s)= ", VAR_11, VAR_12);
        } else {
            FUNC_4(VAR_2, "(%s)= ", VAR_12);
        }
        for (VAR_14 = 0; VAR_14 < (int)VAR_13; VAR_14++) {
            if (VAR_5 && (VAR_14 != 0))
                FUNC_4(VAR_2, ":");
            FUNC_4(VAR_2, "%02x", VAR_3[VAR_14]);
        }
        FUNC_4(VAR_2, "\n");
    }
    return 0;
}
