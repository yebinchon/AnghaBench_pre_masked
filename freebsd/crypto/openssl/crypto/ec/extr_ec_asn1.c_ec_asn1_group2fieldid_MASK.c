
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* char_two; int * prime; int other; } ;
struct TYPE_10__ {TYPE_1__ p; int * fieldType; } ;
typedef TYPE_3__ X9_62_FIELDID ;
struct TYPE_9__ {int * onBasis; TYPE_6__* ppBasis; int * tpBasis; } ;
struct TYPE_11__ {long m; TYPE_2__ p; int * type; } ;
typedef TYPE_4__ X9_62_CHARACTERISTIC_TWO ;
struct TYPE_12__ {long k1; long k2; long k3; } ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,long) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 (int *,int *) ;
 int VAR_0 ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (int const*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_12 (int const*,unsigned int*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_16 (int) ;
 TYPE_4__* FUNC_17 () ;
 TYPE_6__* FUNC_18 () ;

__attribute__((used)) static int FUNC_19(const EC_GROUP *VAR_11, X9_62_FIELDID *VAR_12)
{
    int VAR_13 = 0, VAR_14;
    BIGNUM *VAR_15 = ((void*)0);

    if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
        return 0;


    FUNC_3(VAR_12->fieldType);
    FUNC_4(VAR_12->p.other);

    VAR_14 = FUNC_14(FUNC_13(VAR_11));

    if ((VAR_12->fieldType = FUNC_16(VAR_14)) == ((void*)0)) {
        FUNC_15(VAR_0, VAR_6);
        goto err;
    }

    if (VAR_14 == VAR_9) {
        if ((VAR_15 = FUNC_6()) == ((void*)0)) {
            FUNC_15(VAR_0, VAR_5);
            goto err;
        }

        if (!FUNC_9(VAR_11, VAR_15, ((void*)0), ((void*)0), ((void*)0))) {
            FUNC_15(VAR_0, VAR_4);
            goto err;
        }

        VAR_12->p.prime = FUNC_7(VAR_15, ((void*)0));
        if (VAR_12->p.prime == ((void*)0)) {
            FUNC_15(VAR_0, VAR_3);
            goto err;
        }
    } else if (VAR_14 == VAR_7)






    {
        int VAR_16;
        X9_62_CHARACTERISTIC_TWO *VAR_17;

        VAR_12->p.char_two = FUNC_17();
        VAR_17 = VAR_12->p.char_two;

        if (VAR_17 == ((void*)0)) {
            FUNC_15(VAR_0, VAR_5);
            goto err;
        }

        VAR_17->m = (long)FUNC_10(VAR_11);

        VAR_16 = FUNC_8(VAR_11);

        if (VAR_16 == 0) {
            FUNC_15(VAR_0, VAR_4);
            goto err;
        }

        if ((VAR_17->type = FUNC_16(VAR_16)) == ((void*)0)) {
            FUNC_15(VAR_0, VAR_6);
            goto err;
        }

        if (VAR_16 == VAR_10) {
            unsigned int VAR_18;

            if (!FUNC_12(VAR_11, &VAR_18))
                goto err;

            VAR_17->p.tpBasis = FUNC_0();
            if (VAR_17->p.tpBasis == ((void*)0)) {
                FUNC_15(VAR_0, VAR_5);
                goto err;
            }
            if (!FUNC_1(VAR_17->p.tpBasis, (long)VAR_18)) {
                FUNC_15(VAR_0, VAR_3);
                goto err;
            }
        } else if (VAR_16 == VAR_8) {
            unsigned int VAR_19, VAR_20, VAR_21;

            if (!FUNC_11(VAR_11, &VAR_19, &VAR_20, &VAR_21))
                goto err;

            VAR_17->p.ppBasis = FUNC_18();
            if (VAR_17->p.ppBasis == ((void*)0)) {
                FUNC_15(VAR_0, VAR_5);
                goto err;
            }


            VAR_17->p.ppBasis->k1 = (long)VAR_19;
            VAR_17->p.ppBasis->k2 = (long)VAR_20;
            VAR_17->p.ppBasis->k3 = (long)VAR_21;
        } else {


            VAR_17->p.onBasis = FUNC_2();
            if (VAR_17->p.onBasis == ((void*)0)) {
                FUNC_15(VAR_0, VAR_5);
                goto err;
            }
        }
    }

    else {
        FUNC_15(VAR_0, VAR_2);
        goto err;
    }

    VAR_13 = 1;

 err:
    FUNC_5(VAR_15);
    return VAR_13;
}
