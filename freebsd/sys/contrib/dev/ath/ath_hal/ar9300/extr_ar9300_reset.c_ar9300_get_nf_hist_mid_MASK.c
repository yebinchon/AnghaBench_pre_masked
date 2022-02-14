
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {scalar_t__** nf_cal_buffer; } ;
typedef TYPE_1__ HAL_NFCAL_HIST_FULL ;


 int FUNC_0 (struct ath_hal*,int ,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int16_t
FUNC_1(struct ath_hal *VAR_2, HAL_NFCAL_HIST_FULL *VAR_3, int VAR_4,
    int VAR_5)
{
    int16_t VAR_6;
    int16_t VAR_7[VAR_1];
    int VAR_8, VAR_9;


    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        VAR_7[VAR_8] = VAR_3->nf_cal_buffer[VAR_8][VAR_4];
        FUNC_0(VAR_2, VAR_0,
            "nf_cal_buffer[%d][%d] = %d\n", VAR_8, VAR_4, (int)VAR_7[VAR_8]);
    }
    for (VAR_8 = 0; VAR_8 < VAR_5 - 1; VAR_8++) {
        for (VAR_9 = 1; VAR_9 < VAR_5 - VAR_8; VAR_9++) {
            if (VAR_7[VAR_9] > VAR_7[VAR_9 - 1]) {
                VAR_6 = VAR_7[VAR_9];
                VAR_7[VAR_9] = VAR_7[VAR_9 - 1];
                VAR_7[VAR_9 - 1] = VAR_6;
            }
        }
    }
    VAR_6 = VAR_7[(VAR_5 - 1) >> 1];

    return VAR_6;
}
