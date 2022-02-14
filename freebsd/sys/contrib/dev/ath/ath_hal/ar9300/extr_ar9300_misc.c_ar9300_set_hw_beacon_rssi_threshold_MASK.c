
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {int ah_beacon_rssi_threshold; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ,int ,int ) ;

void FUNC_2(struct ath_hal *VAR_2,
                                        u_int32_t VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_2);

    FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);


    VAR_4->ah_beacon_rssi_threshold = VAR_3;
}
