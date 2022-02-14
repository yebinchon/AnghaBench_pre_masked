
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,scalar_t__) ;

void FUNC_2(struct ath_hal *VAR_1, int VAR_2, u_int32_t *VAR_3)
{

    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_3[VAR_4] = FUNC_1(VAR_1, FUNC_0(VAR_2) + VAR_4 * 4);
    }

}
