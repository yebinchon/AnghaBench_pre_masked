
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_5__ {int * field; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,unsigned char*) ;
 scalar_t__ FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__ const*,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

size_t FUNC_11(const EC_GROUP *VAR_7, const EC_POINT *VAR_8,
                               point_conversion_form_t VAR_9,
                               unsigned char *VAR_10, size_t VAR_11, BN_CTX *VAR_12)
{
    size_t VAR_13;
    BN_CTX *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    BIGNUM *VAR_16, *VAR_17;
    size_t VAR_18, VAR_19, VAR_20;

    if ((VAR_9 != VAR_4)
        && (VAR_9 != VAR_6)
        && (VAR_9 != VAR_5)) {
        FUNC_10(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_9(VAR_7, VAR_8)) {

        if (VAR_10 != ((void*)0)) {
            if (VAR_11 < 1) {
                FUNC_10(VAR_0, VAR_1);
                return 0;
            }
            VAR_10[0] = 0;
        }
        return 1;
    }


    VAR_18 = FUNC_7(VAR_7->field);
    VAR_13 =
        (VAR_9 ==
         VAR_4) ? 1 + VAR_18 : 1 + 2 * VAR_18;


    if (VAR_10 != ((void*)0)) {
        if (VAR_11 < VAR_13) {
            FUNC_10(VAR_0, VAR_1);
            goto err;
        }

        if (VAR_12 == ((void*)0)) {
            VAR_12 = VAR_14 = FUNC_3();
            if (VAR_12 == ((void*)0))
                return 0;
        }

        FUNC_4(VAR_12);
        VAR_15 = 1;
        VAR_16 = FUNC_2(VAR_12);
        VAR_17 = FUNC_2(VAR_12);
        if (VAR_17 == ((void*)0))
            goto err;

        if (!FUNC_8(VAR_7, VAR_8, VAR_16, VAR_17, VAR_12))
            goto err;

        if ((VAR_9 == VAR_4
             || VAR_9 == VAR_5) && FUNC_6(VAR_17))
            VAR_10[0] = VAR_9 + 1;
        else
            VAR_10[0] = VAR_9;

        VAR_19 = 1;

        VAR_20 = VAR_18 - FUNC_7(VAR_16);
        if (VAR_20 > VAR_18) {
            FUNC_10(VAR_0, VAR_3);
            goto err;
        }
        while (VAR_20 > 0) {
            VAR_10[VAR_19++] = 0;
            VAR_20--;
        }
        VAR_20 = FUNC_5(VAR_16, VAR_10 + VAR_19);
        VAR_19 += VAR_20;
        if (VAR_19 != 1 + VAR_18) {
            FUNC_10(VAR_0, VAR_3);
            goto err;
        }

        if (VAR_9 == VAR_6
            || VAR_9 == VAR_5) {
            VAR_20 = VAR_18 - FUNC_7(VAR_17);
            if (VAR_20 > VAR_18) {
                FUNC_10(VAR_0, VAR_3);
                goto err;
            }
            while (VAR_20 > 0) {
                VAR_10[VAR_19++] = 0;
                VAR_20--;
            }
            VAR_20 = FUNC_5(VAR_17, VAR_10 + VAR_19);
            VAR_19 += VAR_20;
        }

        if (VAR_19 != VAR_13) {
            FUNC_10(VAR_0, VAR_3);
            goto err;
        }
    }

    if (VAR_15)
        FUNC_0(VAR_12);
    FUNC_1(VAR_14);
    return VAR_13;

 err:
    if (VAR_15)
        FUNC_0(VAR_12);
    FUNC_1(VAR_14);
    return 0;
}
