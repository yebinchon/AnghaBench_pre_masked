
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_HT_RXCLEAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_5, HAL_HT_RXCLEAR VAR_6)
{

    if (VAR_6 & VAR_3) {
        FUNC_1(VAR_5, VAR_2, VAR_0);
    } else {
        FUNC_0(VAR_5, VAR_2, VAR_0);
    }

    if (VAR_6 & VAR_4) {
        FUNC_1(VAR_5, VAR_2, VAR_1);
    } else {
        FUNC_0(VAR_5, VAR_2, VAR_1);
    }
}
