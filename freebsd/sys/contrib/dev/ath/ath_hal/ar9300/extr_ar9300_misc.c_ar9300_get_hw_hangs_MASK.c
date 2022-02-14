
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_hang_wars; } ;
struct ath_hal {int dummy; } ;
typedef int hal_hw_hangs_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ,int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_12, hal_hw_hangs_t *VAR_13)
{
    struct ath_hal_9300 *VAR_14 = FUNC_0(VAR_12);
    *VAR_13 = 0;

    if (FUNC_1(VAR_12, VAR_2, 0, VAR_0) == VAR_8) {
        *VAR_13 |= VAR_10;
    }
    if (FUNC_1(VAR_12, VAR_1, 0, VAR_0) == VAR_8) {
        *VAR_13 |= VAR_6;
    }
    if (FUNC_1(VAR_12, VAR_3, 0, VAR_0)
        == VAR_8)
    {
        *VAR_13 |= VAR_11;
    }
    if (FUNC_1(VAR_12, VAR_4, 0, VAR_0) == VAR_8) {
        *VAR_13 |= VAR_7;
    }
    if (FUNC_1(VAR_12, VAR_5, 0, VAR_0)
        == VAR_8)
    {
        *VAR_13 |= VAR_9;
    }

    VAR_14->ah_hang_wars = *VAR_13;
}
