
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*,int,int *,int) ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_1, int VAR_2,
    u_int8_t *VAR_3, int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        (void)FUNC_0(VAR_1, VAR_2 - VAR_5, VAR_3 + VAR_5, 1);
    }
    return VAR_0;
}
