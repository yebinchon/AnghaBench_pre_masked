
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ath_hal_9300 {scalar_t__ ah_tx_trig_level; int ah_mask_reg; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_INT ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ath_hal*,int,int ) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_6, HAL_BOOL VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_6);
    u_int32_t VAR_9, VAR_10, VAR_11;
    HAL_INT VAR_12;

    if (FUNC_0(VAR_6)->ah_tx_trig_level >= VAR_4 &&
        VAR_7)
    {
        return VAR_0;
    }




    VAR_12 = FUNC_5(VAR_6, VAR_8->ah_mask_reg &~ VAR_3, 0);

    VAR_9 = FUNC_2(VAR_6, VAR_2);
    VAR_10 = FUNC_1(VAR_9, VAR_1);
    VAR_11 = VAR_10;

    if (VAR_7) {
        if (VAR_10 < VAR_4) {
            VAR_11++;
        }
    } else if (VAR_10 > VAR_5) {
        VAR_11--;
    }

    if (VAR_11 != VAR_10) {

        FUNC_3(VAR_6,
            VAR_2, (VAR_9 &~ VAR_1) | FUNC_4(VAR_11, VAR_1));
    }


    FUNC_5(VAR_6, VAR_12, 0);

    FUNC_0(VAR_6)->ah_tx_trig_level = VAR_11;

    return (VAR_11 != VAR_10);
}
