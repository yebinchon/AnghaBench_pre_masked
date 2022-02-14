
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*,int ,int ,int) ;
 int FUNC_7 (struct ath_hal*,int ) ;

HAL_BOOL FUNC_8(struct ath_hal *VAR_10, HAL_BOOL VAR_11)
{




    int VAR_12;
    VAR_12 = FUNC_7(VAR_10, VAR_11);

    if (FUNC_1(VAR_10) || FUNC_3(VAR_10) || FUNC_5(VAR_10)) {
        FUNC_6(VAR_10,
            VAR_0, VAR_1, VAR_12);
    } else if (FUNC_4(VAR_10)) {
        FUNC_6(VAR_10,
            VAR_8, VAR_9, VAR_12);
    } else if (FUNC_2(VAR_10) || FUNC_0(VAR_10)) {
        FUNC_6(VAR_10,
            VAR_6, VAR_7, VAR_12);
    } else {
        FUNC_6(VAR_10,
            VAR_5, VAR_7, VAR_12);
        FUNC_6(VAR_10,
            VAR_2, VAR_3,
            VAR_12 >> 2);
        FUNC_6(VAR_10,
            VAR_2, VAR_4, 1);
    }
    return 0;
}
