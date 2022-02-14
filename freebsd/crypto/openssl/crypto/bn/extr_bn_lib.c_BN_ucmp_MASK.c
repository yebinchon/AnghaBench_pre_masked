
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; scalar_t__* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const BIGNUM *VAR_0, const BIGNUM *VAR_1)
{
    int VAR_2;
    BN_ULONG VAR_3, VAR_4, *VAR_5, *VAR_6;

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    VAR_2 = VAR_0->top - VAR_1->top;
    if (VAR_2 != 0)
        return VAR_2;
    VAR_5 = VAR_0->d;
    VAR_6 = VAR_1->d;
    for (VAR_2 = VAR_0->top - 1; VAR_2 >= 0; VAR_2--) {
        VAR_3 = VAR_5[VAR_2];
        VAR_4 = VAR_6[VAR_2];
        if (VAR_3 != VAR_4)
            return ((VAR_3 > VAR_4) ? 1 : -1);
    }
    return 0;
}
