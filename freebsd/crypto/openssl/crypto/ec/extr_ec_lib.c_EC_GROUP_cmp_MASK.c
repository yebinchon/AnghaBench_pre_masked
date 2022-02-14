
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* meth; } ;
struct TYPE_13__ {int flags; int (* group_get_curve ) (TYPE_2__ const*,int const*,int const*,int const*,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 int VAR_0 ;
 int const* FUNC_6 (TYPE_2__ const*) ;
 int FUNC_7 (TYPE_2__ const*) ;
 int const* FUNC_8 (TYPE_2__ const*) ;
 scalar_t__ FUNC_9 (TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__ const*,int ,int ,int *) ;
 int FUNC_13 (TYPE_2__ const*,int const*,int const*,int const*,int *) ;
 int FUNC_14 (TYPE_2__ const*,int const*,int const*,int const*,int *) ;

int FUNC_15(const EC_GROUP *VAR_1, const EC_GROUP *VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    BN_CTX *VAR_11 = ((void*)0);


    if (FUNC_11(FUNC_10(VAR_1)) !=
        FUNC_11(FUNC_10(VAR_2)))
        return 1;

    if (FUNC_9(VAR_1) && FUNC_9(VAR_2) &&
        FUNC_9(VAR_1) != FUNC_9(VAR_2))
        return 1;
    if (VAR_1->meth->flags & VAR_0)
        return 0;

    if (VAR_3 == ((void*)0))
        VAR_11 = VAR_3 = FUNC_3();
    if (VAR_3 == ((void*)0))
        return -1;

    FUNC_4(VAR_3);
    VAR_5 = FUNC_2(VAR_3);
    VAR_6 = FUNC_2(VAR_3);
    VAR_7 = FUNC_2(VAR_3);
    VAR_8 = FUNC_2(VAR_3);
    VAR_9 = FUNC_2(VAR_3);
    VAR_10 = FUNC_2(VAR_3);
    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_3);
        FUNC_1(VAR_11);
        return -1;
    }





    if (!VAR_1->meth->group_get_curve(VAR_1, VAR_5, VAR_6, VAR_7, VAR_3) ||
        !VAR_2->meth->group_get_curve(VAR_2, VAR_8, VAR_9, VAR_10, VAR_3))
        VAR_4 = 1;

    if (VAR_4 || FUNC_5(VAR_5, VAR_8) || FUNC_5(VAR_6, VAR_9) || FUNC_5(VAR_7, VAR_10))
        VAR_4 = 1;


    if (VAR_4 || FUNC_12(VAR_1, FUNC_7(VAR_1),
                          FUNC_7(VAR_2), VAR_3))
        VAR_4 = 1;

    if (!VAR_4) {
        const BIGNUM *VAR_12, *VAR_13, *VAR_14, *VAR_15;

        VAR_12 = FUNC_8(VAR_1);
        VAR_13 = FUNC_8(VAR_2);
        VAR_14 = FUNC_6(VAR_1);
        VAR_15 = FUNC_6(VAR_2);
        if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
            FUNC_0(VAR_3);
            FUNC_1(VAR_11);
            return -1;
        }
        if (FUNC_5(VAR_12, VAR_13) || FUNC_5(VAR_14, VAR_15))
            VAR_4 = 1;
    }

    FUNC_0(VAR_3);
    FUNC_1(VAR_11);

    return VAR_4;
}
