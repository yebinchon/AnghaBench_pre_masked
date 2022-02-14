
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int * n; int _method_mod_n; int * e; TYPE_1__* meth; int lock; } ;
struct TYPE_4__ {int (* bn_mod_exp ) (int *,int *,int *,int *,int *,int ) ;} ;
typedef TYPE_2__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;
 int * FUNC_6 (unsigned char const*,int,int *) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (unsigned char*,int) ;
 unsigned char* FUNC_13 (int) ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int FUNC_14 (unsigned char*,int,unsigned char*,int,int) ;
 int FUNC_15 (unsigned char*,int,unsigned char*,int,int) ;
 int FUNC_16 (int ,int ) ;
 int* FUNC_17 (int *) ;
 int FUNC_18 (unsigned char*,unsigned char*,int) ;
 int FUNC_19 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_20(int VAR_12, const unsigned char *VAR_13,
                                  unsigned char *VAR_14, RSA *VAR_15, int VAR_16)
{
    BIGNUM *VAR_17, *VAR_18;
    int VAR_19, VAR_20 = 0, VAR_21 = -1;
    unsigned char *VAR_22 = ((void*)0);
    BN_CTX *VAR_23 = ((void*)0);

    if (FUNC_8(VAR_15->n) > VAR_1) {
        FUNC_16(VAR_5, VAR_9);
        return -1;
    }

    if (FUNC_11(VAR_15->n, VAR_15->e) <= 0) {
        FUNC_16(VAR_5, VAR_6);
        return -1;
    }


    if (FUNC_8(VAR_15->n) > VAR_3) {
        if (FUNC_8(VAR_15->e) > VAR_2) {
            FUNC_16(VAR_5, VAR_6);
            return -1;
        }
    }

    if ((VAR_23 = FUNC_3()) == ((void*)0))
        goto err;
    FUNC_4(VAR_23);
    VAR_17 = FUNC_2(VAR_23);
    VAR_18 = FUNC_2(VAR_23);
    VAR_20 = FUNC_9(VAR_15->n);
    VAR_22 = FUNC_13(VAR_20);
    if (VAR_18 == ((void*)0) || VAR_22 == ((void*)0)) {
        FUNC_16(VAR_5, VAR_0);
        goto err;
    }





    if (VAR_12 > VAR_20) {
        FUNC_16(VAR_5, VAR_7);
        goto err;
    }

    if (FUNC_6(VAR_13, VAR_12, VAR_17) == ((void*)0))
        goto err;

    if (FUNC_11(VAR_17, VAR_15->n) >= 0) {
        FUNC_16(VAR_5,
               VAR_8);
        goto err;
    }

    if (VAR_15->flags & VAR_4)
        if (!FUNC_5(&VAR_15->_method_mod_n, VAR_15->lock,
                                    VAR_15->n, VAR_23))
            goto err;

    if (!VAR_15->meth->bn_mod_exp(VAR_18, VAR_17, VAR_15->e, VAR_15->n, VAR_23,
                               VAR_15->_method_mod_n))
        goto err;

    if ((VAR_16 == 128) && ((FUNC_17(VAR_18)[0] & 0xf) != 12))
        if (!FUNC_10(VAR_18, VAR_15->n, VAR_18))
            goto err;

    VAR_19 = FUNC_7(VAR_18, VAR_22, VAR_20);

    switch (VAR_16) {
    case 129:
        VAR_21 = FUNC_14(VAR_14, VAR_20, VAR_22, VAR_19, VAR_20);
        break;
    case 128:
        VAR_21 = FUNC_15(VAR_14, VAR_20, VAR_22, VAR_19, VAR_20);
        break;
    case 130:
        FUNC_18(VAR_14, VAR_22, (VAR_21 = VAR_19));
        break;
    default:
        FUNC_16(VAR_5, VAR_11);
        goto err;
    }
    if (VAR_21 < 0)
        FUNC_16(VAR_5, VAR_10);

 err:
    FUNC_0(VAR_23);
    FUNC_1(VAR_23);
    FUNC_12(VAR_22, VAR_20);
    return VAR_21;
}
