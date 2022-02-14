
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ) ;

__attribute__((used)) static HAL_BOOL FUNC_5(struct ath_hal *VAR_3, u_int16_t VAR_4)
{
    u_int32_t VAR_5;

    VAR_5 = FUNC_4(VAR_3, VAR_4);

    if (FUNC_1(VAR_3) || FUNC_0(VAR_3) || FUNC_2(VAR_3))
    {
        FUNC_3(VAR_3, VAR_0,
            VAR_2, VAR_5);
        FUNC_3(VAR_3, VAR_0,
            VAR_1, VAR_5);
    }
    return 0;
}
