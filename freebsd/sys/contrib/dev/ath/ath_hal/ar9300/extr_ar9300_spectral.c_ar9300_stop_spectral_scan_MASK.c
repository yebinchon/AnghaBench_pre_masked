
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_9300 {int ah_disable_cck; int ah_dc_offset; int ah_radar1; scalar_t__ ah_chip_full_sleep; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_curchan; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct ath_hal*,scalar_t__) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int) ;
 int FUNC_8 (struct ath_hal*,int ,int ) ;

void FUNC_9(struct ath_hal *VAR_14)
{
    u_int32_t VAR_15;
    struct ath_hal_9300 *VAR_16 = FUNC_0(VAR_14);
    HAL_BOOL VAR_17 = VAR_16->ah_chip_full_sleep;

    if ((FUNC_3(VAR_14) || FUNC_2(VAR_14)) && VAR_17) {
        FUNC_8(VAR_14, VAR_12, VAR_0);
    }
    VAR_15 = FUNC_5(VAR_14, VAR_8);






    VAR_15 &= ~VAR_9;
    FUNC_7(VAR_14, VAR_8, VAR_15);
    VAR_15 = FUNC_5(VAR_14, VAR_8);

    FUNC_6(VAR_14, VAR_6, VAR_7,
                     VAR_16->ah_radar1);
    FUNC_6(VAR_14, VAR_10, VAR_11,
                     VAR_16->ah_dc_offset);
    FUNC_7(VAR_14, VAR_1, 0);

    if (FUNC_1(VAR_14)->ah_curchan &&
        FUNC_4(VAR_14, FUNC_1(VAR_14)->ah_curchan))
    {
        FUNC_6(VAR_14, VAR_4, VAR_5,
                         VAR_16->ah_disable_cck);
    }

    VAR_15 = FUNC_5(VAR_14, VAR_1);

    VAR_15 = FUNC_5(VAR_14, VAR_2) & (~VAR_3);
    FUNC_7(VAR_14, VAR_2, VAR_15);

    if ((FUNC_3(VAR_14) || FUNC_2(VAR_14)) && VAR_17) {
        FUNC_8(VAR_14, VAR_13, VAR_0);
    }
}
