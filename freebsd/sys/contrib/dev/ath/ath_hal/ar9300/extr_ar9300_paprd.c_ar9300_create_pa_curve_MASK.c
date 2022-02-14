
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ath_hal {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*,scalar_t__) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_5(struct ath_hal *VAR_7, u_int32_t * VAR_8,
    u_int32_t * VAR_9, int * VAR_10)
{
    int VAR_11;
    int VAR_12;

    u_int32_t VAR_13[48], VAR_14[48];
    u_int32_t VAR_15;

    FUNC_3(VAR_7);
    FUNC_2(VAR_7, VAR_1,
        VAR_2, 0);
    VAR_15 = VAR_3;

    for (VAR_11 = 0; VAR_11 < 48; VAR_11++) {






        VAR_13[VAR_11] = FUNC_1(VAR_7, VAR_15);
        VAR_15 = VAR_15 + 4;
    }

    FUNC_2(VAR_7, VAR_1,
        VAR_2, 1);
    VAR_15 = VAR_3;

    for (VAR_11 = 0; VAR_11 < 48; VAR_11++) {






        VAR_14[VAR_11] = FUNC_1(VAR_7, VAR_15);
        VAR_15 = VAR_15 + 4;
    }






    VAR_12 = 0;
    if (FUNC_4(
            VAR_13, VAR_14,
            VAR_8, VAR_9, VAR_10) ==
            VAR_0)
    {
        VAR_12 = -2;
    }

    if (FUNC_0(VAR_7)) {
        FUNC_2(VAR_7, VAR_6,
            VAR_5, 0);
    } else {
        FUNC_2(VAR_7, VAR_4,
            VAR_5, 0);
    }
    return VAR_12;
}
