
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t blocksize; size_t numblocks; size_t w; size_t num; int const** points; int * group; } ;
typedef TYPE_1__ EC_PRE_COMP ;
typedef int const EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int VAR_0 ;
 int const* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int const*,int const*,int *) ;
 int FUNC_9 (int const*,int const*) ;
 int FUNC_10 (int *,int const*,int const*,int *) ;
 int FUNC_11 (int const*) ;
 int const* FUNC_12 (int *) ;
 int FUNC_13 (int *,size_t,int const**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 size_t FUNC_16 (size_t) ;
 int FUNC_17 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_18 (int const**) ;
 int const** FUNC_19 (int) ;
 int FUNC_20 (int *,int ,TYPE_1__*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_21 (int *) ;

int FUNC_22(EC_GROUP *VAR_6, BN_CTX *VAR_7)
{
    const EC_POINT *VAR_8;
    EC_POINT *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), **VAR_11;
    BN_CTX *VAR_12 = ((void*)0);
    const BIGNUM *VAR_13;
    size_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    EC_POINT **VAR_21 = ((void*)0);
    EC_PRE_COMP *VAR_22;
    int VAR_23 = 0;


    FUNC_15(VAR_6);
    if ((VAR_22 = FUNC_21(VAR_6)) == ((void*)0))
        return 0;

    VAR_8 = FUNC_6(VAR_6);
    if (VAR_8 == ((void*)0)) {
        FUNC_17(VAR_0, VAR_1);
        goto err;
    }

    if (VAR_7 == ((void*)0)) {
        VAR_7 = VAR_12 = FUNC_2();
        if (VAR_7 == ((void*)0))
            goto err;
    }

    FUNC_3(VAR_7);

    VAR_13 = FUNC_7(VAR_6);
    if (VAR_13 == ((void*)0))
        goto err;
    if (FUNC_4(VAR_13)) {
        FUNC_17(VAR_0, VAR_2);
        goto err;
    }

    VAR_15 = FUNC_5(VAR_13);






    VAR_18 = 8;
    VAR_16 = 4;
    if (FUNC_16(VAR_15) > VAR_16) {

        VAR_16 = FUNC_16(VAR_15);
    }

    VAR_19 = (VAR_15 + VAR_18 - 1) / VAR_18;



    VAR_17 = (size_t)1 << (VAR_16 - 1);
    VAR_20 = VAR_17 * VAR_19;


    VAR_21 = FUNC_19(sizeof(*VAR_21) * (VAR_20 + 1));
    if (VAR_21 == ((void*)0)) {
        FUNC_17(VAR_0, VAR_4);
        goto err;
    }

    VAR_11 = VAR_21;
    VAR_11[VAR_20] = ((void*)0);
    for (VAR_14 = 0; VAR_14 < VAR_20; VAR_14++) {
        if ((VAR_11[VAR_14] = FUNC_12(VAR_6)) == ((void*)0)) {
            FUNC_17(VAR_0, VAR_4);
            goto err;
        }
    }

    if ((VAR_9 = FUNC_12(VAR_6)) == ((void*)0)
        || (VAR_10 = FUNC_12(VAR_6)) == ((void*)0)) {
        FUNC_17(VAR_0, VAR_4);
        goto err;
    }

    if (!FUNC_9(VAR_10, VAR_8))
        goto err;


    for (VAR_14 = 0; VAR_14 < VAR_19; VAR_14++) {
        size_t VAR_24;

        if (!FUNC_10(VAR_6, VAR_9, VAR_10, VAR_7))
            goto err;

        if (!FUNC_9(*VAR_11++, VAR_10))
            goto err;

        for (VAR_24 = 1; VAR_24 < VAR_17; VAR_24++, VAR_11++) {



            if (!FUNC_8(VAR_6, *VAR_11, VAR_9, *(VAR_11 - 1), VAR_7))
                goto err;
        }

        if (VAR_14 < VAR_19 - 1) {



            size_t VAR_25;

            if (VAR_18 <= 2) {
                FUNC_17(VAR_0, VAR_3);
                goto err;
            }

            if (!FUNC_10(VAR_6, VAR_10, VAR_9, VAR_7))
                goto err;
            for (VAR_25 = 2; VAR_25 < VAR_18; VAR_25++) {
                if (!FUNC_10(VAR_6, VAR_10, VAR_10, VAR_7))
                    goto err;
            }
        }
    }

    if (!FUNC_13(VAR_6, VAR_20, VAR_21, VAR_7))
        goto err;

    VAR_22->group = VAR_6;
    VAR_22->blocksize = VAR_18;
    VAR_22->numblocks = VAR_19;
    VAR_22->w = VAR_16;
    VAR_22->points = VAR_21;
    VAR_21 = ((void*)0);
    VAR_22->num = VAR_20;
    FUNC_20(VAR_6, VAR_5, VAR_22);
    VAR_22 = ((void*)0);
    VAR_23 = 1;

 err:
    FUNC_0(VAR_7);
    FUNC_1(VAR_12);
    FUNC_14(VAR_22);
    if (VAR_21) {
        EC_POINT **VAR_26;

        for (VAR_26 = VAR_21; *VAR_26 != ((void*)0); VAR_26++)
            FUNC_11(*VAR_26);
        FUNC_18(VAR_21);
    }
    FUNC_11(VAR_9);
    FUNC_11(VAR_10);
    return VAR_23;
}
