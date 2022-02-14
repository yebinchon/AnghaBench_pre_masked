
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int order; int * cofactor; int field; TYPE_1__* meth; } ;
struct TYPE_4__ {scalar_t__ field_type; } ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int *,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_13(EC_GROUP *VAR_1) {
    int VAR_2 = 0;
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0);





    if (FUNC_8(VAR_1->order) <= (FUNC_8(VAR_1->field) + 1) / 2 + 3) {

        FUNC_12(VAR_1->cofactor);

        return 1;
    }

    if ((VAR_3 = FUNC_3()) == ((void*)0))
        return 0;

    FUNC_4(VAR_3);
    if ((VAR_4 = FUNC_2(VAR_3)) == ((void*)0))
        goto err;


    if (VAR_1->meth->field_type == VAR_0) {
        FUNC_12(VAR_4);
        if (!FUNC_10(VAR_4, FUNC_8(VAR_1->field) - 1))
            goto err;
    } else {
        if (!FUNC_6(VAR_4, VAR_1->field))
            goto err;
    }


    if (!FUNC_9(VAR_1->cofactor, VAR_1->order)
        || !FUNC_5(VAR_1->cofactor, VAR_1->cofactor, VAR_4)

        || !FUNC_5(VAR_1->cofactor, VAR_1->cofactor, FUNC_11())

        || !FUNC_7(VAR_1->cofactor, ((void*)0), VAR_1->cofactor, VAR_1->order, VAR_3))
        goto err;
    VAR_2 = 1;
 err:
    FUNC_0(VAR_3);
    FUNC_1(VAR_3);
    return VAR_2;
}
