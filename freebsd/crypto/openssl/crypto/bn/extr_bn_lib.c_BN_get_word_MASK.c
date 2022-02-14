
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int * d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;

BN_ULONG FUNC_0(const BIGNUM *VAR_1)
{
    if (VAR_1->top > 1)
        return VAR_0;
    else if (VAR_1->top == 1)
        return VAR_1->d[0];

    return 0;
}
