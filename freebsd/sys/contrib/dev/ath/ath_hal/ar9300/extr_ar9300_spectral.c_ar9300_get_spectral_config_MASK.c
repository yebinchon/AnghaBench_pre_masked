
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {scalar_t__ ah_chip_full_sleep; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;

u_int32_t FUNC_5(struct ath_hal *VAR_4)
{
    u_int32_t VAR_5;
    struct ath_hal_9300 *VAR_6 = FUNC_0(VAR_4);
    HAL_BOOL VAR_7 = VAR_6->ah_chip_full_sleep;

    if ((FUNC_2(VAR_4) || FUNC_1(VAR_4)) && VAR_7) {
        FUNC_4(VAR_4, VAR_2, VAR_0);
    }

    VAR_5 = FUNC_3(VAR_4, VAR_1);

    if ((FUNC_2(VAR_4) || FUNC_1(VAR_4)) && VAR_7) {
        FUNC_4(VAR_4, VAR_3, VAR_0);
    }
    return VAR_5;
}
