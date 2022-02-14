
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_9300 {scalar_t__ ah_rifs_enabled; int* ah_rifs_reg; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_curchan; } ;
typedef int HAL_CHANNEL_INTERNAL ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int * FUNC_7 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_8(struct ath_hal *VAR_5, HAL_BOOL VAR_6)
{
    struct ath_hal_9300 *VAR_7 = FUNC_0(VAR_5);
    HAL_CHANNEL_INTERNAL *VAR_8 =
      FUNC_7(VAR_5, FUNC_1(VAR_5)->ah_curchan);
    HAL_BOOL VAR_9 = FUNC_3(VAR_8);
    u_int32_t VAR_10 = 0;

    if (VAR_6) {
        if (VAR_7->ah_rifs_enabled == VAR_1) {
            return VAR_1;
        }

        FUNC_6(VAR_5, VAR_4, VAR_7->ah_rifs_reg[0]);
        FUNC_6(VAR_5, VAR_3,
                     VAR_7->ah_rifs_reg[1]);

        VAR_7->ah_rifs_enabled = VAR_1;
        FUNC_4(VAR_7->ah_rifs_reg, sizeof(VAR_7->ah_rifs_reg));
    } else {
        if (VAR_7->ah_rifs_enabled == VAR_1) {
            VAR_7->ah_rifs_reg[0] = FUNC_5(VAR_5,
                                              VAR_4);
            VAR_7->ah_rifs_reg[1] = FUNC_5(VAR_5, VAR_3);
        }

        FUNC_6(VAR_5, VAR_3,
                     (VAR_7->ah_rifs_reg[1] & ~(VAR_2)));
        VAR_10 = 0xfffff000 & FUNC_5(VAR_5, VAR_4);
        if (VAR_9) {
            if (FUNC_2(FUNC_1(VAR_5)->ah_curchan)) {
                FUNC_6(VAR_5, VAR_4, VAR_10 | 500);
            } else {
                FUNC_6(VAR_5, VAR_4, VAR_10 | 250);
            }
        } else {
            if (FUNC_2(FUNC_1(VAR_5)->ah_curchan)) {
                FUNC_6(VAR_5, VAR_4, VAR_10 | 0x370);
            } else {
                FUNC_6(VAR_5, VAR_4, VAR_10 | 0x1b8);
            }
        }

        VAR_7->ah_rifs_enabled = VAR_0;
    }
    return VAR_1;

}
