
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ point_conversion_form_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIO ;
typedef int const BIGNUM ;


 int FUNC_0 (int *,char const*,int const*,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int const*) ;
 int const* FUNC_6 () ;
 int VAR_0 ;
 int const* FUNC_7 (int const*) ;
 int * FUNC_8 (int const*) ;
 int const* FUNC_9 (int const*) ;
 unsigned char* FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 size_t FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int ) ;
 int const* FUNC_19 (int const*,int const*,scalar_t__,int *,int *) ;
 char* FUNC_20 (int) ;
 int FUNC_21 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* FUNC_22 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_23 (int *,char*,unsigned char const*,size_t,int) ;

int FUNC_24(BIO *VAR_8, const EC_GROUP *VAR_9, int VAR_10)
{
    int VAR_11 = 0, VAR_12 = VAR_1;
    BN_CTX *VAR_13 = ((void*)0);
    const EC_POINT *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    const BIGNUM *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    const unsigned char *VAR_21;
    size_t VAR_22 = 0;

    static const char *VAR_23 = "Generator (compressed):";
    static const char *VAR_24 = "Generator (uncompressed):";
    static const char *VAR_25 = "Generator (hybrid):";

    if (!VAR_9) {
        VAR_12 = VAR_4;
        goto err;
    }

    VAR_13 = FUNC_4();
    if (VAR_13 == ((void*)0)) {
        VAR_12 = VAR_3;
        goto err;
    }

    if (FUNC_11(VAR_9)) {

        int VAR_26;
        const char *VAR_27;

        if (!FUNC_1(VAR_8, VAR_10, 128))
            goto err;

        VAR_26 = FUNC_14(VAR_9);
        if (VAR_26 == 0)
            goto err;
        if (FUNC_2(VAR_8, "ASN1 OID: %s", FUNC_22(VAR_26)) <= 0)
            goto err;
        if (FUNC_2(VAR_8, "\n") <= 0)
            goto err;
        VAR_27 = FUNC_20(VAR_26);
        if (VAR_27) {
            if (!FUNC_1(VAR_8, VAR_10, 128))
                goto err;
            if (FUNC_2(VAR_8, "NIST CURVE: %s\n", VAR_27) <= 0)
                goto err;
        }
    } else {

        int VAR_28 = 0;
        point_conversion_form_t VAR_29;
        int VAR_30 = FUNC_18(FUNC_17(VAR_9));

        if (VAR_30 == VAR_5)
            VAR_28 = 1;

        if ((VAR_15 = FUNC_6()) == ((void*)0) || (VAR_16 = FUNC_6()) == ((void*)0) ||
            (VAR_17 = FUNC_6()) == ((void*)0)) {
            VAR_12 = VAR_3;
            goto err;
        }

        if (!FUNC_13(VAR_9, VAR_15, VAR_16, VAR_17, VAR_13)) {
            VAR_12 = VAR_2;
            goto err;
        }

        if ((VAR_14 = FUNC_8(VAR_9)) == ((void*)0)) {
            VAR_12 = VAR_2;
            goto err;
        }
        VAR_19 = FUNC_9(VAR_9);
        VAR_20 = FUNC_7(VAR_9);
        if (VAR_19 == ((void*)0)) {
            VAR_12 = VAR_2;
            goto err;
        }

        VAR_29 = FUNC_15(VAR_9);

        if ((VAR_18 = FUNC_19(VAR_9, VAR_14, VAR_29, ((void*)0), VAR_13)) == ((void*)0)) {
            VAR_12 = VAR_2;
            goto err;
        }

        if ((VAR_21 = FUNC_10(VAR_9)) != ((void*)0))
            VAR_22 = FUNC_16(VAR_9);

        if (!FUNC_1(VAR_8, VAR_10, 128))
            goto err;


        if (FUNC_2(VAR_8, "Field Type: %s\n", FUNC_22(VAR_30))
            <= 0)
            goto err;

        if (VAR_28) {

            int VAR_31 = FUNC_12(VAR_9);
            if (VAR_31 == 0)
                goto err;

            if (!FUNC_1(VAR_8, VAR_10, 128))
                goto err;

            if (FUNC_2(VAR_8, "Basis Type: %s\n",
                           FUNC_22(VAR_31)) <= 0)
                goto err;


            if ((VAR_15 != ((void*)0)) && !FUNC_0(VAR_8, "Polynomial:", VAR_15, ((void*)0),
                                              VAR_10))
                goto err;
        } else {
            if ((VAR_15 != ((void*)0)) && !FUNC_0(VAR_8, "Prime:", VAR_15, ((void*)0), VAR_10))
                goto err;
        }
        if ((VAR_16 != ((void*)0)) && !FUNC_0(VAR_8, "A:   ", VAR_16, ((void*)0), VAR_10))
            goto err;
        if ((VAR_17 != ((void*)0)) && !FUNC_0(VAR_8, "B:   ", VAR_17, ((void*)0), VAR_10))
            goto err;
        if (VAR_29 == VAR_6) {
            if ((VAR_18 != ((void*)0)) && !FUNC_0(VAR_8, VAR_23, VAR_18,
                                                ((void*)0), VAR_10))
                goto err;
        } else if (VAR_29 == VAR_7) {
            if ((VAR_18 != ((void*)0)) && !FUNC_0(VAR_8, VAR_24, VAR_18,
                                                ((void*)0), VAR_10))
                goto err;
        } else {

            if ((VAR_18 != ((void*)0)) && !FUNC_0(VAR_8, VAR_25, VAR_18,
                                                ((void*)0), VAR_10))
                goto err;
        }
        if ((VAR_19 != ((void*)0)) && !FUNC_0(VAR_8, "Order: ", VAR_19,
                                              ((void*)0), VAR_10))
            goto err;
        if ((VAR_20 != ((void*)0)) && !FUNC_0(VAR_8, "Cofactor: ", VAR_20,
                                                 ((void*)0), VAR_10))
            goto err;
        if (VAR_21 && !FUNC_23(VAR_8, "Seed:", VAR_21, VAR_22, VAR_10))
            goto err;
    }
    VAR_11 = 1;
 err:
    if (!VAR_11)
        FUNC_21(VAR_0, VAR_12);
    FUNC_5(VAR_15);
    FUNC_5(VAR_16);
    FUNC_5(VAR_17);
    FUNC_5(VAR_18);
    FUNC_3(VAR_13);
    return VAR_11;
}
