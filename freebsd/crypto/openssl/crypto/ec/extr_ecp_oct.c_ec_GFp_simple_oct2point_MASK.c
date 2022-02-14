
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_6__ {int field; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char const*,size_t,int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_0 ;
 int FUNC_9 (TYPE_1__ const*,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_1__ const*,int *,int *,int,int *) ;
 int FUNC_11 (TYPE_1__ const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_13(const EC_GROUP *VAR_6, EC_POINT *VAR_7,
                            const unsigned char *VAR_8, size_t VAR_9, BN_CTX *VAR_10)
{
    point_conversion_form_t VAR_11;
    int VAR_12;
    BN_CTX *VAR_13 = ((void*)0);
    BIGNUM *VAR_14, *VAR_15;
    size_t VAR_16, VAR_17;
    int VAR_18 = 0;

    if (VAR_9 == 0) {
        FUNC_12(VAR_0, VAR_1);
        return 0;
    }
    VAR_11 = VAR_8[0];
    VAR_12 = VAR_11 & 1;
    VAR_11 = VAR_11 & ~1U;
    if ((VAR_11 != 0) && (VAR_11 != VAR_3)
        && (VAR_11 != VAR_5)
        && (VAR_11 != VAR_4)) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }
    if ((VAR_11 == 0 || VAR_11 == VAR_5) && VAR_12) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_11 == 0) {
        if (VAR_9 != 1) {
            FUNC_12(VAR_0, VAR_2);
            return 0;
        }

        return FUNC_11(VAR_6, VAR_7);
    }

    VAR_16 = FUNC_7(VAR_6->field);
    VAR_17 =
        (VAR_11 ==
         VAR_3) ? 1 + VAR_16 : 1 + 2 * VAR_16;

    if (VAR_9 != VAR_17) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_10 == ((void*)0)) {
        VAR_10 = VAR_13 = FUNC_3();
        if (VAR_10 == ((void*)0))
            return 0;
    }

    FUNC_4(VAR_10);
    VAR_14 = FUNC_2(VAR_10);
    VAR_15 = FUNC_2(VAR_10);
    if (VAR_15 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_8 + 1, VAR_16, VAR_14))
        goto err;
    if (FUNC_8(VAR_14, VAR_6->field) >= 0) {
        FUNC_12(VAR_0, VAR_2);
        goto err;
    }

    if (VAR_11 == VAR_3) {
        if (!FUNC_10(VAR_6, VAR_7, VAR_14, VAR_12, VAR_10))
            goto err;
    } else {
        if (!FUNC_5(VAR_8 + 1 + VAR_16, VAR_16, VAR_15))
            goto err;
        if (FUNC_8(VAR_15, VAR_6->field) >= 0) {
            FUNC_12(VAR_0, VAR_2);
            goto err;
        }
        if (VAR_11 == VAR_4) {
            if (VAR_12 != FUNC_6(VAR_15)) {
                FUNC_12(VAR_0, VAR_2);
                goto err;
            }
        }





        if (!FUNC_9(VAR_6, VAR_7, VAR_14, VAR_15, VAR_10))
            goto err;
    }

    VAR_18 = 1;

 err:
    FUNC_0(VAR_10);
    FUNC_1(VAR_13);
    return VAR_18;
}
