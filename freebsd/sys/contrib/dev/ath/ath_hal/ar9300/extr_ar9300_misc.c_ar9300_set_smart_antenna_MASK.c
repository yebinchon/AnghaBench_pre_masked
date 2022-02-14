
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_smartantenna_enable; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 scalar_t__ FUNC_5 (struct ath_hal*,int ,int ,int ) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_6, HAL_BOOL VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_6);

    if (VAR_7) {
        FUNC_3(VAR_6, VAR_3, VAR_0);
    } else {
        FUNC_2(VAR_6, VAR_3, VAR_0);
    }







    if (VAR_7 && FUNC_1(VAR_6) &&
           (VAR_5 == FUNC_5(VAR_6, VAR_4, 0,0))) {

       FUNC_4(VAR_6, VAR_1, 0x440);
       FUNC_4(VAR_6, VAR_2, 0);
    }

    VAR_8->ah_smartantenna_enable = VAR_7;
    return 1;
}
