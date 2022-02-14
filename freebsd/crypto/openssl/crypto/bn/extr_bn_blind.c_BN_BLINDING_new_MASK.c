
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int counter; int * mod; int * Ai; int * A; int * lock; } ;
typedef TYPE_1__ BN_BLINDING ;
typedef int const BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int const*) ;

BN_BLINDING *FUNC_10(const BIGNUM *VAR_3, const BIGNUM *VAR_4, BIGNUM *VAR_5)
{
    BN_BLINDING *VAR_6 = ((void*)0);

    FUNC_9(VAR_5);

    if ((VAR_6 = FUNC_8(sizeof(*VAR_6))) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_2);
        return ((void*)0);
    }

    VAR_6->lock = FUNC_6();
    if (VAR_6->lock == ((void*)0)) {
        FUNC_5(VAR_1, VAR_2);
        FUNC_7(VAR_6);
        return ((void*)0);
    }

    FUNC_1(VAR_6);

    if (VAR_3 != ((void*)0)) {
        if ((VAR_6->A = FUNC_2(VAR_3)) == ((void*)0))
            goto err;
    }

    if (VAR_4 != ((void*)0)) {
        if ((VAR_6->Ai = FUNC_2(VAR_4)) == ((void*)0))
            goto err;
    }


    if ((VAR_6->mod = FUNC_2(VAR_5)) == ((void*)0))
        goto err;

    if (FUNC_3(VAR_5, VAR_0) != 0)
        FUNC_4(VAR_6->mod, VAR_0);






    VAR_6->counter = -1;

    return VAR_6;

 err:
    FUNC_0(VAR_6);
    return ((void*)0);
}
