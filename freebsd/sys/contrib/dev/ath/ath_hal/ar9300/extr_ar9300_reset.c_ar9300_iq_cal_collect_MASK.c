
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_hal_9300 {scalar_t__* ah_total_iq_corr_meas; void** ah_total_power_meas_q; void** ah_total_power_meas_i; int ah_cal_samples; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ int32_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int ,char*,int ,int,unsigned int,void*,unsigned int,void*,unsigned int,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_5 (struct ath_hal*,scalar_t__) ;

void
FUNC_6(struct ath_hal *VAR_1, u_int8_t VAR_2)
{
    struct ath_hal_9300 *VAR_3 = FUNC_0(VAR_1);
    int VAR_4;




    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_3->ah_total_power_meas_i[VAR_4] = FUNC_5(VAR_1, FUNC_1(VAR_4));
        VAR_3->ah_total_power_meas_q[VAR_4] = FUNC_5(VAR_1, FUNC_2(VAR_4));
        VAR_3->ah_total_iq_corr_meas[VAR_4] =
            (int32_t) FUNC_5(VAR_1, FUNC_3(VAR_4));
        FUNC_4(VAR_1, VAR_0,
            "%d: Chn %d "
            "Reg Offset(0x%04x)pmi=0x%08x; "
            "Reg Offset(0x%04x)pmq=0x%08x; "
            "Reg Offset (0x%04x)iqcm=0x%08x;\n",
            VAR_3->ah_cal_samples,
            VAR_4,
            (unsigned) FUNC_1(VAR_4),
            VAR_3->ah_total_power_meas_i[VAR_4],
            (unsigned) FUNC_2(VAR_4),
            VAR_3->ah_total_power_meas_q[VAR_4],
            (unsigned) FUNC_3(VAR_4),
            VAR_3->ah_total_iq_corr_meas[VAR_4]);
    }
}
