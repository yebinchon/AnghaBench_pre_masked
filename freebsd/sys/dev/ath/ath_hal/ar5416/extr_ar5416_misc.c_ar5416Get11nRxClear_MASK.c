
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_HT_RXCLEAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ) ;

HAL_HT_RXCLEAR
FUNC_1(struct ath_hal *VAR_5)
{
    HAL_HT_RXCLEAR VAR_6 = 0;
    uint32_t VAR_7;

    VAR_7 = FUNC_0(VAR_5, VAR_2);


    if (VAR_7 & VAR_0) {
        VAR_6 |= VAR_3;
    }

    if (VAR_7 & VAR_1) {
        VAR_6 |= VAR_4;
    }
    return VAR_6;
}
