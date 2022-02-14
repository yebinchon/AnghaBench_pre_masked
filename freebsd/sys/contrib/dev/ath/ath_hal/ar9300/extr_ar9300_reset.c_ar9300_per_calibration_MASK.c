
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int8_t ;
struct ath_hal_9300 {scalar_t__ ah_cal_samples; } ;
struct ath_hal {int dummy; } ;
struct TYPE_10__ {scalar_t__ cal_state; TYPE_1__* cal_data; } ;
struct TYPE_9__ {int calValid; } ;
struct TYPE_8__ {scalar_t__ cal_num_samples; int cal_type; int (* cal_post_proc ) (struct ath_hal*,int) ;int (* cal_collect ) (struct ath_hal*,int) ;} ;
typedef TYPE_2__ HAL_CHANNEL_INTERNAL ;
typedef TYPE_3__ HAL_CAL_LIST ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,TYPE_3__*) ;
 int FUNC_3 (struct ath_hal*,TYPE_3__*) ;
 int FUNC_4 (struct ath_hal*,int) ;
 int FUNC_5 (struct ath_hal*,int) ;

__attribute__((used)) inline static void
FUNC_6(struct ath_hal *VAR_7, HAL_CHANNEL_INTERNAL *VAR_8,
    u_int8_t VAR_9, HAL_CAL_LIST *VAR_10, HAL_BOOL *VAR_11)
{
    struct ath_hal_9300 *VAR_12 = FUNC_0(VAR_7);


    *VAR_11 = VAR_0;


    if (VAR_10->cal_state == VAR_6) {

        if (!(FUNC_1(VAR_7, VAR_3) & VAR_4)) {
            int VAR_13, VAR_14 = 0;
            for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
                if (VAR_9 & (1 << VAR_13)) {
                    VAR_14++;
                }
            }




            VAR_10->cal_data->cal_collect(VAR_7, VAR_14);

            VAR_12->ah_cal_samples++;

            if (VAR_12->ah_cal_samples >= VAR_10->cal_data->cal_num_samples) {



                VAR_10->cal_data->cal_post_proc(VAR_7, VAR_14);


                VAR_8->calValid |= VAR_10->cal_data->cal_type;
                VAR_10->cal_state = VAR_5;
                *VAR_11 = VAR_1;
            } else {



                FUNC_3(VAR_7, VAR_10);
            }
        }
    } else if (!(VAR_8->calValid & VAR_10->cal_data->cal_type)) {

        FUNC_2(VAR_7, VAR_10);
    }
}
