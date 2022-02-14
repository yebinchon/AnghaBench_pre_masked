
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
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ,int ,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_6, HAL_BOOL VAR_7)
{

    if ((FUNC_2(VAR_6, VAR_4, 0, VAR_1) == VAR_5)) {
        if (FUNC_0(VAR_6, VAR_3, 0, VAR_1) == VAR_5) {
            return FUNC_1(VAR_6, VAR_7);
        }
        return VAR_0;
    }

    return VAR_2;
}
