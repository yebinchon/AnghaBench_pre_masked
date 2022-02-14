
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_10)
{
    u_int32_t VAR_11 = VAR_2;
    u_int32_t VAR_12;





    VAR_12 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_5));
    if ((VAR_12 & VAR_6) && (VAR_12 != VAR_7)) {
        return VAR_1;
    }

    VAR_12 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_8));
    if (FUNC_1(VAR_10)) {
        VAR_11 = VAR_3;
    }
    else if (FUNC_2(VAR_10)) {
        VAR_11 = VAR_4;
    }

    if ((VAR_12 & (VAR_11 | VAR_9)) &&
        (VAR_12 != VAR_7)) {
        return VAR_1;
    }

    return VAR_0;
}
