
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;


 int FUNC_0 (scalar_t__ const*,scalar_t__ const*,int) ;

int FUNC_1(const BN_ULONG *VAR_0, const BN_ULONG *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    VAR_4 = VAR_2 - 1;

    if (VAR_3 < 0) {
        for (VAR_5 = VAR_3; VAR_5 < 0; VAR_5++) {
            if (VAR_1[VAR_4 - VAR_5] != 0)
                return -1;
        }
    }
    if (VAR_3 > 0) {
        for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5--) {
            if (VAR_0[VAR_4 + VAR_5] != 0)
                return 1;
        }
    }
    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
