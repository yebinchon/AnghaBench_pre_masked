
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_hal_9300 {int* ah_total_power_meas_i; int* ah_total_power_meas_q; int* ah_total_iq_corr_meas; int* ah_rx_cal_corr; int ah_rx_cal_complete; scalar_t__ ah_rx_cal_chan_flag; int ah_rx_cal_chan; } ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_5__ {int ah_curchan; } ;
struct TYPE_4__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hal*,int ,char*,int const,...) ;
 int VAR_5 ;
 int FUNC_3 (struct ath_hal*,int const) ;
 int FUNC_4 (struct ath_hal*,int const,int,int) ;
 int FUNC_5 (struct ath_hal*,int const,int) ;
 TYPE_1__* FUNC_6 (struct ath_hal*,int ) ;

void
FUNC_7(struct ath_hal *VAR_6, u_int8_t VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_6);
    u_int32_t VAR_9, VAR_10, VAR_11;
    u_int32_t VAR_12, VAR_13;
    int32_t VAR_14, VAR_15;
    int VAR_16, VAR_17;
    HAL_CHANNEL_INTERNAL *VAR_18;
    static const u_int32_t VAR_19[3] = {
        130,
        129,
        128,
    };

    VAR_18 = FUNC_6(VAR_6, FUNC_1(VAR_6)->ah_curchan);

    for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
        VAR_10 = VAR_8->ah_total_power_meas_i[VAR_17];
        VAR_9 = VAR_8->ah_total_power_meas_q[VAR_17];
        VAR_11 = VAR_8->ah_total_iq_corr_meas[VAR_17];

        FUNC_2(VAR_6, VAR_5,
            "Starting IQ Cal and Correction for Chain %d\n", VAR_17);
        FUNC_2(VAR_6, VAR_5,
            "Orignal: Chn %diq_corr_meas = 0x%08x\n",
            VAR_17, VAR_8->ah_total_iq_corr_meas[VAR_17]);

        VAR_16 = 0;


        if (VAR_11 > 0x80000000) {
            VAR_11 = (0xffffffff - VAR_11) + 1;
            VAR_16 = 1;
        }

        FUNC_2(VAR_6, VAR_5,
            "Chn %d pwr_meas_i = 0x%08x\n", VAR_17, VAR_10);
        FUNC_2(VAR_6, VAR_5,
            "Chn %d pwr_meas_q = 0x%08x\n", VAR_17, VAR_9);
        FUNC_2(VAR_6, VAR_5,
            "iq_corr_neg is 0x%08x\n", VAR_16);

        VAR_13 = (VAR_10 / 2 + VAR_9 / 2) / 256;
        VAR_12 = VAR_9 / 64;


        if ((VAR_13 != 0) && (VAR_12 != 0)) {

            VAR_15 = VAR_11 / VAR_13;
            VAR_14 = VAR_10 / VAR_12 - 64;
            FUNC_2(VAR_6, VAR_5,
                "Chn %d i_coff = 0x%08x\n", VAR_17, VAR_15);
            FUNC_2(VAR_6, VAR_5,
                "Chn %d q_coff = 0x%08x\n", VAR_17, VAR_14);


            if (VAR_15 >= 63) {
                VAR_15 = 63;
            } else if (VAR_15 <= -63) {
                VAR_15 = -63;
            }


            if (VAR_16 == 0x0) {
                VAR_15 = -VAR_15;
            }


            if (VAR_14 >= 63) {
                VAR_14 = 63;
            } else if (VAR_14 <= -63) {
                VAR_14 = -63;
            }

            VAR_15 = VAR_15 & 0x7f;
            VAR_14 = VAR_14 & 0x7f;

            FUNC_2(VAR_6, VAR_5,
                "Chn %d : i_coff = 0x%x  q_coff = 0x%x\n", VAR_17, VAR_15, VAR_14);
            FUNC_2(VAR_6, VAR_5,
                "Register offset (0x%04x) before update = 0x%x\n",
                VAR_19[VAR_17], FUNC_3(VAR_6, VAR_19[VAR_17]));

            FUNC_4(VAR_6, VAR_19[VAR_17],
                VAR_3, VAR_15);
            FUNC_4(VAR_6, VAR_19[VAR_17],
                VAR_4, VAR_14);


     if (VAR_18 != ((void*)0)) {
            VAR_8->ah_rx_cal_corr[VAR_17] = FUNC_3(VAR_6, VAR_19[VAR_17]) & 0x7fff;
            VAR_8->ah_rx_cal_complete = VAR_1;
            VAR_8->ah_rx_cal_chan = VAR_18->channel;

            VAR_8->ah_rx_cal_chan_flag = 0;
     } else {

             VAR_8->ah_rx_cal_complete = VAR_0;

     }

            FUNC_2(VAR_6, VAR_5,
                "Register offset (0x%04x) QI COFF (bitfields 0x%08x) "
                "after update = 0x%x\n",
                VAR_19[VAR_17], VAR_3,
                FUNC_3(VAR_6, VAR_19[VAR_17]));
            FUNC_2(VAR_6, VAR_5,
                "Register offset (0x%04x) QQ COFF (bitfields 0x%08x) "
                "after update = 0x%x\n",
                VAR_19[VAR_17], VAR_4,
                FUNC_3(VAR_6, VAR_19[VAR_17]));
            FUNC_2(VAR_6, VAR_5,
                "IQ Cal and Correction done for Chain %d\n", VAR_17);
        }
    }

    FUNC_5(VAR_6,
        130, VAR_2);
    FUNC_2(VAR_6, VAR_5,
        "IQ Cal and Correction (offset 0x%04x) enabled "
        "(bit position 0x%08x). New Value 0x%08x\n",
        (unsigned) (130),
        VAR_2,
        FUNC_3(VAR_6, 130));
}
