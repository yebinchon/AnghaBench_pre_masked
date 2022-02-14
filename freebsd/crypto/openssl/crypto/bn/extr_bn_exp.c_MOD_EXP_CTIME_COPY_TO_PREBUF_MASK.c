
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int * d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;



__attribute__((used)) static int FUNC_0(const BIGNUM *VAR_0, int VAR_1,
                                        unsigned char *VAR_2, int VAR_3,
                                        int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = 1 << VAR_4;
    BN_ULONG *VAR_8 = (BN_ULONG *)VAR_2;

    if (VAR_1 > VAR_0->top)
        VAR_1 = VAR_0->top;

    for (VAR_5 = 0, VAR_6 = VAR_3; VAR_5 < VAR_1; VAR_5++, VAR_6 += VAR_7) {
        VAR_8[VAR_6] = VAR_0->d[VAR_5];
    }

    return 1;
}
