
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ggen ;
struct TYPE_3__ {int * g; int * q; int * p; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_1__ DSA ;
typedef int BN_MONT_CTX ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,int *,int *,int *) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int *,int,int *) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,size_t) ;
 int FUNC_21 (int *,int *,int *,int *) ;
 int FUNC_22 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_23 (int *,unsigned int) ;
 int FUNC_24 (int *,int *,int *) ;
 int * FUNC_25 () ;
 int FUNC_26 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_27 (int ,int ) ;
 int VAR_3 ;
 int FUNC_28 (unsigned char*,size_t,unsigned char*,int *,int const*,int *) ;
 int FUNC_29 (int *,unsigned char*,int *) ;
 int FUNC_30 (int *,int const*,int *) ;
 int FUNC_31 (int *,unsigned char const*,int) ;
 int VAR_4 ;
 int FUNC_32 (int *) ;
 int * FUNC_33 () ;
 int FUNC_34 (int const*) ;
 int * FUNC_35 () ;
 int * FUNC_36 () ;
 int * FUNC_37 () ;
 int FUNC_38 (unsigned char*) ;
 unsigned char* FUNC_39 (size_t) ;
 scalar_t__ FUNC_40 (unsigned char*,size_t) ;
 int FUNC_41 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_42 (unsigned char*,int ,int) ;

int FUNC_43(DSA *VAR_5, size_t VAR_6, size_t VAR_7,
                          const EVP_MD *VAR_8, const unsigned char *VAR_9,
                          size_t VAR_10, int VAR_11, unsigned char *VAR_12,
                          int *VAR_13, unsigned long *VAR_14,
                          BN_GENCB *VAR_15)
{
    int VAR_16 = -1;
    unsigned char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    unsigned char VAR_19[VAR_4];
    int VAR_20;
    BIGNUM *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
    BIGNUM *VAR_26 = ((void*)0), *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
    BN_MONT_CTX *VAR_29 = ((void*)0);
    int VAR_30, VAR_31, VAR_32 = 0, VAR_33 = 0, VAR_34 = VAR_7 >> 3;
    int VAR_35 = 0;
    int VAR_36 = 0;
    BN_CTX *VAR_37 = ((void*)0);
    EVP_MD_CTX *VAR_38 = FUNC_33();
    unsigned int VAR_39 = 2;

    if (VAR_38 == ((void*)0))
        goto err;


    if (VAR_6 <= VAR_7) {
        FUNC_27(VAR_0, VAR_1);
        goto err;
    }

    if (VAR_8 == ((void*)0)) {
        if (VAR_7 == 160)
            VAR_8 = FUNC_35();
        else if (VAR_7 == 224)
            VAR_8 = FUNC_36();
        else
            VAR_8 = FUNC_37();
    }

    VAR_20 = FUNC_34(VAR_8);

    if (!VAR_5->p || !VAR_5->q || VAR_11 >= 0) {
        if (VAR_10 == 0)
            VAR_10 = VAR_20;

        VAR_17 = FUNC_39(VAR_10);

        if (VAR_12)
            VAR_18 = VAR_12;
        else
            VAR_18 = FUNC_39(VAR_10);

        if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0))
            goto err;

        if (VAR_9)
            FUNC_41(VAR_17, VAR_9, VAR_10);

    }

    if ((VAR_37 = FUNC_3()) == ((void*)0))
        goto err;

    if ((VAR_29 = FUNC_7()) == ((void*)0))
        goto err;

    FUNC_4(VAR_37);
    VAR_21 = FUNC_2(VAR_37);
    VAR_26 = FUNC_2(VAR_37);
    VAR_22 = FUNC_2(VAR_37);
    VAR_23 = FUNC_2(VAR_37);
    VAR_24 = FUNC_2(VAR_37);
    VAR_25 = FUNC_2(VAR_37);
    if (VAR_25 == ((void*)0))
        goto err;


    if (VAR_5->p && VAR_5->q) {
        VAR_28 = VAR_5->p;
        VAR_27 = VAR_5->q;
        if (VAR_11 >= 0)
            FUNC_41(VAR_18, VAR_17, VAR_10);
        goto g_only;
    } else {
        VAR_28 = FUNC_2(VAR_37);
        VAR_27 = FUNC_2(VAR_37);
        if (VAR_27 == ((void*)0))
            goto err;
    }

    if (!FUNC_18(VAR_25, FUNC_25(), VAR_6 - 1))
        goto err;
    for (;;) {
        for (;;) {
            unsigned char *VAR_40;

            if (!FUNC_5(VAR_15, 0, VAR_33++))
                goto err;

            if (!VAR_9) {
                if (FUNC_40(VAR_17, VAR_10) <= 0)
                    goto err;
            }

            if (!FUNC_28(VAR_17, VAR_10, VAR_19, ((void*)0), VAR_8, ((void*)0)))
                goto err;

            if (VAR_20 > VAR_34)
                VAR_40 = VAR_19 + VAR_20 - VAR_34;
            else
                VAR_40 = VAR_19;

            if (VAR_20 < VAR_34)
                FUNC_42(VAR_19 + VAR_20, 0, VAR_34 - VAR_20);


            VAR_40[0] |= 0x80;
            VAR_40[VAR_34 - 1] |= 0x01;
            if (!FUNC_10(VAR_40, VAR_34, VAR_27))
                goto err;


            VAR_36 = FUNC_17(VAR_27, VAR_3, VAR_37,
                                        VAR_9 ? 1 : 0, VAR_15);
            if (VAR_36 > 0)
                break;
            if (VAR_36 != 0)
                goto err;

            if (VAR_9) {
                VAR_16 = 0;
                FUNC_27(VAR_0, VAR_2);
                goto err;
            }



        }

        if (VAR_12)
            FUNC_41(VAR_12, VAR_17, VAR_10);

        if (!FUNC_5(VAR_15, 2, 0))
            goto err;
        if (!FUNC_5(VAR_15, 3, 0))
            goto err;


        VAR_35 = 0;


        VAR_32 = (VAR_6 - 1) / (VAR_20 << 3);

        for (;;) {
            if ((VAR_35 != 0) && !FUNC_5(VAR_15, 0, VAR_35))
                goto err;


            FUNC_26(VAR_22);

            for (VAR_31 = 0; VAR_31 <= VAR_32; VAR_31++) {



                for (VAR_30 = VAR_10 - 1; VAR_30 >= 0; VAR_30--) {
                    VAR_17[VAR_30]++;
                    if (VAR_17[VAR_30] != 0)
                        break;
                }

                if (!FUNC_28(VAR_17, VAR_10, VAR_19, ((void*)0), VAR_8, ((void*)0)))
                    goto err;


                if (!FUNC_10(VAR_19, VAR_20, VAR_21))
                    goto err;
                if (!FUNC_18(VAR_21, VAR_21, (VAR_20 << 3) * VAR_31))
                    goto err;
                if (!FUNC_9(VAR_22, VAR_22, VAR_21))
                    goto err;
            }


            if (!FUNC_20(VAR_22, VAR_6 - 1))
                goto err;
            if (!FUNC_12(VAR_23, VAR_22))
                goto err;
            if (!FUNC_9(VAR_23, VAR_23, VAR_25))
                goto err;


            if (!FUNC_19(VAR_21, VAR_27))
                goto err;
            if (!FUNC_21(VAR_24, VAR_23, VAR_21, VAR_37))
                goto err;
            if (!FUNC_24(VAR_21, VAR_24, FUNC_25()))
                goto err;
            if (!FUNC_24(VAR_28, VAR_23, VAR_21))
                goto err;


            if (FUNC_11(VAR_28, VAR_25) >= 0) {

                VAR_36 = FUNC_17(VAR_28, VAR_3, VAR_37, 1, VAR_15);
                if (VAR_36 > 0)
                    goto end;
                if (VAR_36 != 0)
                    goto err;
            }


            VAR_35++;



            if (VAR_35 >= (int)(4 * VAR_6))
                break;
        }
        if (VAR_9) {
            VAR_16 = 0;
            FUNC_27(VAR_0, VAR_1);
            goto err;
        }
    }
 end:
    if (!FUNC_5(VAR_15, 2, 1))
        goto err;

 g_only:



    if (!FUNC_24(VAR_25, VAR_28, FUNC_25()))
        goto err;
    if (!FUNC_13(VAR_21, ((void*)0), VAR_25, VAR_27, VAR_37))
        goto err;

    if (VAR_11 < 0) {
        if (!FUNC_23(VAR_25, VAR_39))
            goto err;
    } else
        VAR_39 = 1;
    if (!FUNC_8(VAR_29, VAR_28, VAR_37))
        goto err;

    for (;;) {
        static const unsigned char VAR_41[4] = { 0x67, 0x67, 0x65, 0x6e };
        if (VAR_11 >= 0) {
            VAR_19[0] = VAR_11 & 0xff;
            VAR_19[1] = (VAR_39 >> 8) & 0xff;
            VAR_19[2] = VAR_39 & 0xff;
            if (!FUNC_30(VAR_38, VAR_8, ((void*)0)))
                goto err;
            if (!FUNC_31(VAR_38, VAR_18, VAR_10))
                goto err;
            if (!FUNC_31(VAR_38, VAR_41, sizeof(VAR_41)))
                goto err;
            if (!FUNC_31(VAR_38, VAR_19, 3))
                goto err;
            if (!FUNC_29(VAR_38, VAR_19, ((void*)0)))
                goto err;
            if (!FUNC_10(VAR_19, VAR_20, VAR_25))
                goto err;
        }

        if (!FUNC_22(VAR_26, VAR_25, VAR_21, VAR_28, VAR_37, VAR_29))
            goto err;
        if (!FUNC_16(VAR_26))
            break;
        if (VAR_11 < 0 && !FUNC_9(VAR_25, VAR_25, FUNC_25()))
            goto err;
        VAR_39++;
        if (VAR_11 >= 0 && VAR_39 > 0xffff)
            goto err;
    }

    if (!FUNC_5(VAR_15, 3, 1))
        goto err;

    VAR_16 = 1;
 err:
    if (VAR_16 == 1) {
        if (VAR_28 != VAR_5->p) {
            FUNC_15(VAR_5->p);
            VAR_5->p = FUNC_14(VAR_28);
        }
        if (VAR_27 != VAR_5->q) {
            FUNC_15(VAR_5->q);
            VAR_5->q = FUNC_14(VAR_27);
        }
        FUNC_15(VAR_5->g);
        VAR_5->g = FUNC_14(VAR_26);
        if (VAR_5->p == ((void*)0) || VAR_5->q == ((void*)0) || VAR_5->g == ((void*)0)) {
            VAR_16 = -1;
            goto err;
        }
        if (VAR_13 != ((void*)0))
            *VAR_13 = VAR_35;
        if (VAR_14 != ((void*)0))
            *VAR_14 = VAR_39;
    }
    FUNC_38(VAR_17);
    if (VAR_12 != VAR_18)
        FUNC_38(VAR_18);
    FUNC_0(VAR_37);
    FUNC_1(VAR_37);
    FUNC_6(VAR_29);
    FUNC_32(VAR_38);
    return VAR_16;
}
