
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int **,char const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int ,char const*) ;
 int FUNC_3 (int *,unsigned char*,long) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (char const*,long*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char const*,char*) ;

__attribute__((used)) static int FUNC_16(EVP_PKEY_CTX *VAR_18,
                             const char *VAR_19, const char *VAR_20)
{
    if (VAR_20 == ((void*)0)) {
        FUNC_12(VAR_6, VAR_15);
        return 0;
    }
    if (FUNC_15(VAR_19, "rsa_padding_mode") == 0) {
        int VAR_21;

        if (FUNC_15(VAR_20, "pkcs1") == 0) {
            VAR_21 = VAR_9;
        } else if (FUNC_15(VAR_20, "sslv23") == 0) {
            VAR_21 = VAR_16;
        } else if (FUNC_15(VAR_20, "none") == 0) {
            VAR_21 = VAR_7;
        } else if (FUNC_15(VAR_20, "oeap") == 0) {
            VAR_21 = VAR_8;
        } else if (FUNC_15(VAR_20, "oaep") == 0) {
            VAR_21 = VAR_8;
        } else if (FUNC_15(VAR_20, "x931") == 0) {
            VAR_21 = VAR_17;
        } else if (FUNC_15(VAR_20, "pss") == 0) {
            VAR_21 = VAR_10;
        } else {
            FUNC_12(VAR_6, VAR_14);
            return -2;
        }
        return FUNC_7(VAR_18, VAR_21);
    }

    if (FUNC_15(VAR_19, "rsa_pss_saltlen") == 0) {
        int VAR_22;

        if (!FUNC_15(VAR_20, "digest"))
            VAR_22 = VAR_12;
        else if (!FUNC_15(VAR_20, "max"))
            VAR_22 = VAR_13;
        else if (!FUNC_15(VAR_20, "auto"))
            VAR_22 = VAR_11;
        else
            VAR_22 = FUNC_13(VAR_20);
        return FUNC_9(VAR_18, VAR_22);
    }

    if (FUNC_15(VAR_19, "rsa_keygen_bits") == 0) {
        int VAR_23 = FUNC_13(VAR_20);

        return FUNC_4(VAR_18, VAR_23);
    }

    if (FUNC_15(VAR_19, "rsa_keygen_pubexp") == 0) {
        int VAR_24;

        BIGNUM *VAR_25 = ((void*)0);
        if (!FUNC_0(&VAR_25, VAR_20))
            return 0;
        VAR_24 = FUNC_6(VAR_18, VAR_25);
        if (VAR_24 <= 0)
            FUNC_1(VAR_25);
        return VAR_24;
    }

    if (FUNC_15(VAR_19, "rsa_keygen_primes") == 0) {
        int VAR_26 = FUNC_13(VAR_20);

        return FUNC_5(VAR_18, VAR_26);
    }

    if (FUNC_15(VAR_19, "rsa_mgf1_md") == 0)
        return FUNC_2(VAR_18,
                               VAR_5 | VAR_4,
                               VAR_1, VAR_20);

    if (FUNC_14(VAR_18)) {

        if (FUNC_15(VAR_19, "rsa_pss_keygen_mgf1_md") == 0)
            return FUNC_2(VAR_18, VAR_3,
                                   VAR_1, VAR_20);

        if (FUNC_15(VAR_19, "rsa_pss_keygen_md") == 0)
            return FUNC_2(VAR_18, VAR_3,
                                   VAR_0, VAR_20);

        if (FUNC_15(VAR_19, "rsa_pss_keygen_saltlen") == 0) {
            int VAR_27 = FUNC_13(VAR_20);

            return FUNC_8(VAR_18, VAR_27);
        }
    }

    if (FUNC_15(VAR_19, "rsa_oaep_md") == 0)
        return FUNC_2(VAR_18, VAR_4,
                               VAR_2, VAR_20);

    if (FUNC_15(VAR_19, "rsa_oaep_label") == 0) {
        unsigned char *VAR_28;
        long VAR_29;
        int VAR_30;

        VAR_28 = FUNC_11(VAR_20, &VAR_29);
        if (!VAR_28)
            return 0;
        VAR_30 = FUNC_3(VAR_18, VAR_28, VAR_29);
        if (VAR_30 <= 0)
            FUNC_10(VAR_28);
        return VAR_30;
    }

    return -2;
}
