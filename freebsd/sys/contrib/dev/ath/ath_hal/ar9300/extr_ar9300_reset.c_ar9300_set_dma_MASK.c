
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__ halHwUapsdTrig; } ;
struct ath_hal_private {scalar_t__ ah_macRev; scalar_t__ ah_opmode; TYPE_1__ ah_caps; } ;
struct ath_hal_9300 {int rx_buf_size; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 struct ath_hal_private* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*) ;

__attribute__((used)) static inline void
FUNC_7(struct ath_hal *VAR_23)
{
    u_int32_t VAR_24;
    struct ath_hal_9300 *VAR_25 = FUNC_0(VAR_23);
    struct ath_hal_private *VAR_26 = FUNC_1(VAR_23);
    HAL_CAPABILITIES *VAR_27 = &VAR_26->ah_caps;
    VAR_24 = FUNC_3(VAR_23, VAR_19) & ~VAR_21;
    FUNC_5(VAR_23, VAR_19, VAR_24 | VAR_20);
    VAR_24 = FUNC_3(VAR_23, VAR_14) & ~VAR_16;
    FUNC_5(VAR_23, VAR_14, VAR_24 | VAR_15);




    FUNC_5(VAR_23, VAR_17, 0x200);






    if (FUNC_2(VAR_23) &&
        (FUNC_1((VAR_23))->ah_macRev > VAR_18)) {



        FUNC_5(VAR_23, VAR_9, 0x500);
    } else {
        FUNC_5(VAR_23, VAR_9, VAR_10);
    }




    if (VAR_27->halHwUapsdTrig == VAR_0) {

        if (FUNC_1(VAR_23)->ah_opmode == VAR_22) {
            FUNC_5(VAR_23, VAR_8,
                    VAR_5 | VAR_6 | VAR_7);
        }
    } else {

    }




    FUNC_6(VAR_23);






    FUNC_4(VAR_23, VAR_11, VAR_12, 0x1);
    FUNC_4(VAR_23, VAR_11, VAR_13, 0x1);




    if (VAR_25->rx_buf_size) {
        FUNC_5(VAR_23, VAR_3, VAR_25->rx_buf_size);
    }
}
