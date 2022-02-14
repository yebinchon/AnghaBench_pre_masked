
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hal*,scalar_t__) ;

u_int32_t
FUNC_1(struct ath_hal *VAR_3)
{
    u_int32_t VAR_4;
    u_int32_t VAR_5;
    u_int32_t VAR_6;

    if (FUNC_0(VAR_3, VAR_0) & VAR_2) {
        VAR_5 = 0x2000;
        VAR_6 = 0x1000;
    } else {
        VAR_5 = 0x1000;
        VAR_6 = 0x2000;
    }

    VAR_4 = ((0xff & FUNC_0(VAR_3, VAR_1 )) << 0) |
             ((0xff & FUNC_0(VAR_3, VAR_1 + VAR_5)) << 8) |
             ((0xff & FUNC_0(VAR_3, VAR_1 + VAR_6)) << 16);

    return VAR_4;
}
