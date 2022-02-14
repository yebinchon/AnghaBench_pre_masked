
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;

u_int32_t FUNC_2(struct ath_hal *VAR_2, HAL_BOOL VAR_3)
{
    u_int32_t VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_0);

    if (VAR_3) {
        VAR_4 |= VAR_1;
    } else {
        VAR_4 &= ~VAR_1;
    }

    FUNC_1(VAR_2, VAR_0, VAR_4);
    VAR_4 = FUNC_0(VAR_2, VAR_0);
    return VAR_4;
}
