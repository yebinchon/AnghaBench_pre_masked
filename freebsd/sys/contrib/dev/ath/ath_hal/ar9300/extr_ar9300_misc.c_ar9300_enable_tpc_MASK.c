
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int ath_hal_desc_tpc; } ;
struct ath_hal {TYPE_1__ ah_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void FUNC_4(struct ath_hal *VAR_5)
{
    u_int32_t VAR_6 = 0;

    VAR_5->ah_config.ath_hal_desc_tpc = 1;


    FUNC_2(VAR_5, VAR_4, VAR_0, 1);





    VAR_6 = FUNC_1(VAR_5, VAR_1);
    if (FUNC_0(VAR_5)) {
        FUNC_3(VAR_5, VAR_1,
                         VAR_6 & VAR_2);
    } else {
        FUNC_3(VAR_5, VAR_1,
                         VAR_6 & VAR_3);
    }
}
