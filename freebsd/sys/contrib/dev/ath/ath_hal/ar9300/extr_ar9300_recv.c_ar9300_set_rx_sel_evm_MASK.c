
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_get_plcp_hdr; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_2, HAL_BOOL VAR_3, HAL_BOOL VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_2);
    HAL_BOOL VAR_6 = VAR_5->ah_get_plcp_hdr == 0;

    if (VAR_4) {
        return VAR_6;
    }
    if (VAR_3) {
        FUNC_2(VAR_2, VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_2, VAR_0, VAR_1);
    }

    VAR_5->ah_get_plcp_hdr = !VAR_3;

    return VAR_6;
}
