
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_macVersion; int ah_macRev; } ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_7)
{
    u_int16_t VAR_8, VAR_9;
    u_int32_t VAR_10;






    VAR_10 = FUNC_3(VAR_7, FUNC_1(VAR_7, VAR_0)) & VAR_1;
    if (VAR_10 == 0xFF) {

        VAR_10 = FUNC_3(VAR_7, FUNC_1(VAR_7, VAR_0));




        VAR_8 = (VAR_10 & VAR_6) >> VAR_4;
        VAR_9 = FUNC_2(VAR_10, VAR_3);
    } else {
        VAR_8 = FUNC_2(VAR_10, VAR_5);
        VAR_9 = VAR_10 & VAR_2;
    }
    return (FUNC_0(VAR_7)->ah_macVersion == VAR_8 &&
            FUNC_0(VAR_7)->ah_macRev == VAR_9);
}
