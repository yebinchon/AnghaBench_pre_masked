
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const BIGNUM *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_0(VAR_1);
    if (VAR_2 < 0)
        return 0;
    VAR_3 = VAR_2 / VAR_0;
    VAR_4 = VAR_2 % VAR_0;
    if (VAR_1->top <= VAR_3)
        return 0;
    return (int)(((VAR_1->d[VAR_3]) >> VAR_4) & ((BN_ULONG)1));
}
