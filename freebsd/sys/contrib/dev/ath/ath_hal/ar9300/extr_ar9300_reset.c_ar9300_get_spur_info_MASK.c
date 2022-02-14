
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_3__ {int ath_hal_spur_mode; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_4__ {scalar_t__** ath_hal_spur_chans; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ,char*,scalar_t__) ;
 int VAR_2 ;

int
FUNC_2(struct ath_hal * VAR_3, int *VAR_4, int VAR_5, u_int16_t *VAR_6)
{

    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_6[VAR_7] = 0;
    }

    *VAR_4 = VAR_3->ah_config.ath_hal_spur_mode;
    for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_0; VAR_7++) {
        if (FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][0] != VAR_1) {
            VAR_6[VAR_8++] = FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][0];
            FUNC_1(VAR_3, VAR_2,
                "1. get spur %d\n", FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][0]);
        }
        if (FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][1] != VAR_1) {
            VAR_6[VAR_8++] = FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][1];
            FUNC_1(VAR_3, VAR_2,
                "2. get spur %d\n", FUNC_0(VAR_3)->ath_hal_spur_chans[VAR_7][1]);
        }
    }

    return 0;
}
