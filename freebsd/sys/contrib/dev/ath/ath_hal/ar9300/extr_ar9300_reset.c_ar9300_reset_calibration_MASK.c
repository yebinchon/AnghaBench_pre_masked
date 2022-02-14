
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* sign; } ;
struct TYPE_10__ {scalar_t__* sign; } ;
struct TYPE_9__ {scalar_t__* sign; } ;
struct TYPE_8__ {scalar_t__* sign; } ;
struct ath_hal_9300 {scalar_t__ ah_cal_samples; TYPE_4__ ah_meas3; TYPE_3__ ah_meas2; TYPE_2__ ah_meas1; TYPE_1__ ah_meas0; } ;
struct ath_hal {int dummy; } ;
struct TYPE_12__ {int cal_state; } ;
typedef TYPE_5__ HAL_CAL_LIST ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,TYPE_5__*) ;

__attribute__((used)) inline static void
FUNC_2(struct ath_hal *VAR_2, HAL_CAL_LIST *VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_2);
    int VAR_5;


    FUNC_1(VAR_2, VAR_3);


    VAR_3->cal_state = VAR_1;


    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        VAR_4->ah_meas0.sign[VAR_5] = 0;
        VAR_4->ah_meas1.sign[VAR_5] = 0;
        VAR_4->ah_meas2.sign[VAR_5] = 0;
        VAR_4->ah_meas3.sign[VAR_5] = 0;
    }

    VAR_4->ah_cal_samples = 0;
}
