
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct ath_hal*,int,scalar_t__*) ;

int32_t
FUNC_1(struct ath_hal *VAR_0)
{
    u_int16_t VAR_1;



    if (FUNC_0(VAR_0, 2047, &VAR_1)) {
        if (VAR_1 != 0) {
            return 4096;
        }
    }



    if (FUNC_0(VAR_0, 1023, &VAR_1)) {
        if (VAR_1 != 0) {
            return 2048;
        }
    }



    if (FUNC_0(VAR_0, 511, &VAR_1)) {
        if (VAR_1 != 0) {
            return 1024;
        }
    }
    return 0;
}
