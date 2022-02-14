
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_RX_QUEUE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_4, u_int32_t VAR_5, HAL_RX_QUEUE VAR_6)
{
    FUNC_0((VAR_6 == VAR_2) || (VAR_6 == VAR_3));

    if (VAR_6 == VAR_2) {
        FUNC_1(VAR_4, VAR_0, VAR_5);
    } else {
        FUNC_1(VAR_4, VAR_1, VAR_5);
    }
}
