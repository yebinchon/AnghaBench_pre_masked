
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct coeff_t {int*** mag_coeff; int*** phs_coeff; int* iqc_coeff; } ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_3__ {int** tx_corr_coeff; int* num_measures; int channel; int one_time_txiqcal_done; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;
typedef scalar_t__ HAL_BOOL ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
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
 int FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int ,char*,int,...) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (struct ath_hal*,int ,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int ,int) ;
 int FUNC_8 (char*,int,int,int,int) ;
 int ** VAR_17 ;

__attribute__((used)) static void
FUNC_9(struct ath_hal *VAR_18, HAL_CHANNEL_INTERNAL *VAR_19, u_int32_t VAR_20,
    struct coeff_t *VAR_21, HAL_BOOL VAR_22)
{
    int VAR_23, VAR_24, VAR_25;
    int32_t VAR_26, VAR_27;
    int32_t VAR_28, VAR_29;
    int32_t VAR_30, VAR_31;

    int32_t VAR_32, VAR_33;
    int32_t VAR_34, VAR_35;

    int32_t VAR_36, VAR_37;
    int32_t VAR_38 = 0;
    int32_t VAR_39 = 0;


    if (FUNC_2(VAR_18)) {
        FUNC_4(VAR_20 == 0x1);

        VAR_17[0][0] = VAR_7;
        VAR_17[1][0] = VAR_7;
        VAR_17[2][0] = VAR_9;
        VAR_17[3][0] = VAR_9;
        VAR_17[4][0] = VAR_10;
        VAR_17[5][0] = VAR_10;
        VAR_17[6][0] = VAR_11;
        VAR_17[7][0] = VAR_11;
    }

    for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
        VAR_23 = FUNC_6(VAR_18,
            FUNC_1(VAR_18), VAR_1);
        if (VAR_23 > VAR_15) {
            VAR_23 = VAR_15;
        }

        if (!FUNC_3(VAR_18)) {




            VAR_28 = -64;
            VAR_29 = -64;
            VAR_30 = 63;
            VAR_31 = 63;
            VAR_36 = 0;
            VAR_37 = 0;
            VAR_32 = 0;
            VAR_34 = 0;
            VAR_33 = 0;
            VAR_35 = 0;


            if (VAR_23 > 1) {




                for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
                    VAR_26 = VAR_21->mag_coeff[VAR_24][VAR_25][0];
                    VAR_27 = VAR_21->phs_coeff[VAR_24][VAR_25][0];

                    VAR_36 = VAR_36 + VAR_26;
                    VAR_37 = VAR_37 + VAR_27;
                    if (VAR_26 > VAR_28) {
                        VAR_28 = VAR_26;
                        VAR_32 = VAR_25;
                    }
                    if (VAR_26 < VAR_30) {
                        VAR_30 = VAR_26;
                        VAR_34 = VAR_25;
                    }
                    if (VAR_27 > VAR_29) {
                        VAR_29 = VAR_27;
                        VAR_33 = VAR_25;
                    }
                    if (VAR_27 < VAR_31) {
                        VAR_31 = VAR_27;
                        VAR_35 = VAR_25;
                    }
                }

                for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
                    VAR_26 = VAR_21->mag_coeff[VAR_24][VAR_25][0];
                    VAR_27 = VAR_21->phs_coeff[VAR_24][VAR_25][0];
                    if ((FUNC_0(VAR_26) < FUNC_0(VAR_28)) ||
                        (FUNC_0(VAR_26) < FUNC_0(VAR_30)))
                    {
                        VAR_36 = VAR_36 + VAR_26;
                    }
                    if ((FUNC_0(VAR_27) < FUNC_0(VAR_29)) ||
                        (FUNC_0(VAR_27) < FUNC_0(VAR_31)))
                    {
                        VAR_37 = VAR_37 + VAR_27;
                    }
                }
                VAR_36 = VAR_36 / (VAR_23 - 1);
                VAR_37 = VAR_37 / (VAR_23 - 1);


                if (FUNC_0(VAR_28 - VAR_30) > VAR_14) {
                    if (FUNC_0(VAR_28 - VAR_36) >
                        FUNC_0(VAR_30 - VAR_36))
                    {

                        VAR_38 = VAR_32;
                    } else {

                        VAR_38 = VAR_34;
                    }
                    VAR_21->mag_coeff[VAR_24][VAR_38][0] = VAR_36;
                    VAR_21->phs_coeff[VAR_24][VAR_38][0] = VAR_37;
                    FUNC_5(VAR_18, VAR_12,
                        "[ch%d][outlier mag gain%d]:: "
                        "mag_avg = %d (/128), phase_avg = %d (/256)\n",
                        VAR_24, VAR_38, VAR_36, VAR_37);
                }

                if (FUNC_0(VAR_29 - VAR_31) > VAR_16) {
                    if (FUNC_0(VAR_29-VAR_37) > FUNC_0(VAR_31 - VAR_37)) {

                        VAR_39 = VAR_33;
                    } else{

                        VAR_39 = VAR_35;
                    }
                    VAR_21->mag_coeff[VAR_24][VAR_39][0] = VAR_36;
                    VAR_21->phs_coeff[VAR_24][VAR_39][0] = VAR_37;
                    FUNC_5(VAR_18, VAR_12,
                        "[ch%d][outlier phs gain%d]:: "
                        "mag_avg = %d (/128), phase_avg = %d (/256)\n",
                        VAR_24, VAR_39, VAR_36, VAR_37);
                }
            }
        }


        for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
            VAR_26 = VAR_21->mag_coeff[VAR_24][VAR_25][0];
            VAR_27 = VAR_21->phs_coeff[VAR_24][VAR_25][0];






            VAR_21->iqc_coeff[0] = (VAR_27 & 0x7f) | ((VAR_26 & 0x7f) << 7);

            if ((VAR_25 % 2) == 0) {
                FUNC_7(VAR_18,
                    VAR_17[VAR_25][VAR_24],
                    VAR_6,
                    VAR_21->iqc_coeff[0]);
            } else {
                FUNC_7(VAR_18,
                    VAR_17[VAR_25][VAR_24],
                    VAR_8,
                    VAR_21->iqc_coeff[0]);
            }



        }



    }

    FUNC_7(VAR_18, VAR_4,
                     VAR_5, 0x1);
    FUNC_7(VAR_18, VAR_2,
                     VAR_3, 0x1);
}
