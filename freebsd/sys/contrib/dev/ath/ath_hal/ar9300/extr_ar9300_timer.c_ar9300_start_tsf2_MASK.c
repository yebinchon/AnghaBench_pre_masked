
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {scalar_t__ ah_enable_tsf2; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;

void FUNC_2(struct ath_hal *VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_4);

    if (VAR_5->ah_enable_tsf2) {

        FUNC_1(VAR_4, VAR_1, VAR_0);
        FUNC_1(VAR_4, VAR_2, VAR_3);
    }
}
