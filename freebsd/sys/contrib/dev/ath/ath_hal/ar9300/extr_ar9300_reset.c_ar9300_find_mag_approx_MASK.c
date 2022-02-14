
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_1(struct ath_hal *VAR_0, int32_t VAR_1, int32_t VAR_2)
{
    int32_t VAR_3 = FUNC_0(VAR_1);
    int32_t VAR_4 = FUNC_0(VAR_2);
    int32_t VAR_5, VAR_6;

    if (VAR_3 > VAR_4) {
        VAR_5 = VAR_3;
        VAR_6 = VAR_4;
    } else {
        VAR_5 = VAR_4;
        VAR_6 = VAR_3;
    }

    return (VAR_5 - (VAR_5 / 32) + (VAR_6 / 8) + (VAR_6 / 4));
}
