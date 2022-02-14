
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ prime_t ;
typedef scalar_t__ BN_ULONG ;
typedef int BIGNUM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int FUNC_6(BIGNUM *VAR_6, int VAR_7, prime_t *VAR_8)
{
    int VAR_9;
    BN_ULONG VAR_10;
    BN_ULONG VAR_11 = VAR_1 - VAR_5[VAR_4 - 1];
    char VAR_12 = VAR_7 <= VAR_0;

 again:

    if (!FUNC_4(VAR_6, VAR_7, VAR_3, VAR_2))
        return 0;

    for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
        BN_ULONG VAR_13 = FUNC_2(VAR_6, (BN_ULONG)VAR_5[VAR_9]);
        if (VAR_13 == (BN_ULONG)-1)
            return 0;
        VAR_8[VAR_9] = (prime_t) VAR_13;
    }




    if (VAR_12) {
        BN_ULONG VAR_14;

        if (VAR_7 == VAR_0) {




            VAR_14 = ~((BN_ULONG)0) - FUNC_1(VAR_6);
        } else {
            VAR_14 = (((BN_ULONG)1) << VAR_7) - FUNC_1(VAR_6) - 1;
        }
        if (VAR_14 < VAR_11)
            VAR_11 = VAR_14;
    }
    VAR_10 = 0;
 loop:
    if (VAR_12) {
        BN_ULONG VAR_15 = FUNC_1(VAR_6);
        for (VAR_9 = 1; VAR_9 < VAR_4 && VAR_5[VAR_9] < VAR_15; VAR_9++) {
            if ((VAR_8[VAR_9] + VAR_10) % VAR_5[VAR_9] == 0) {
                VAR_10 += 2;
                if (VAR_10 > VAR_11)
                    goto again;
                goto loop;
            }
        }
    } else {
        for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {




            if (((VAR_8[VAR_9] + VAR_10) % VAR_5[VAR_9]) <= 1) {
                VAR_10 += 2;
                if (VAR_10 > VAR_11)
                    goto again;
                goto loop;
            }
        }
    }
    if (!FUNC_0(VAR_6, VAR_10))
        return 0;
    if (FUNC_3(VAR_6) != VAR_7)
        goto again;
    FUNC_5(VAR_6);
    return 1;
}
