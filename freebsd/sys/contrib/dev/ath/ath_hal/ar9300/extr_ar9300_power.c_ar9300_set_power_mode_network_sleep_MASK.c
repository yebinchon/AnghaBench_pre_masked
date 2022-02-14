
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_9300 {int ah_wa_reg_val; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halAutoSleepSupport; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ath_hal*,int ,int ) ;
 int FUNC_8 (struct ath_hal*,int ) ;
 int FUNC_9 (struct ath_hal*,int ,int ) ;
 int FUNC_10 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct ath_hal *VAR_10, int VAR_11)
{
    struct ath_hal_9300 *VAR_12 = FUNC_0(VAR_10);

    FUNC_9(VAR_10, VAR_5, VAR_6);
    if (VAR_11) {
        HAL_CAPABILITIES *VAR_13 = &FUNC_1(VAR_10)->ah_caps;

        if (! VAR_13->halAutoSleepSupport) {

            FUNC_10(VAR_10, VAR_2, VAR_4);
        }
        else {
            if (FUNC_4(VAR_10) || FUNC_3(VAR_10)) {
                FUNC_10(VAR_10, VAR_1,
                        FUNC_8(VAR_10, VAR_1) &
                                    ~VAR_0);
            }


            FUNC_7(VAR_10, VAR_2, VAR_3);

            if (FUNC_4(VAR_10) || FUNC_3(VAR_10)) {





                FUNC_6(30);
            }
        }
    }




    {

        FUNC_10(VAR_10, FUNC_2(VAR_10, VAR_7),
               VAR_12->ah_wa_reg_val & ~VAR_8);
    }
}
