
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int srcClkFreqMhz; int clockPeriodNanoSec; struct rtc_cfg* p_RtcDriverParam; int h_Fm; int outputClockDivisor; struct rtc_regs* p_MemMap; } ;
typedef TYPE_1__ t_FmRtc ;
typedef scalar_t__ t_Error ;
struct rtc_regs {int dummy; } ;
struct rtc_cfg {scalar_t__ src_clk; int ext_src_clk_freq; scalar_t__ bypass; int timer_slave_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct rtc_cfg*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct rtc_cfg*,struct rtc_regs*,int ,int ,int ,int,int,int ) ;

t_Error FUNC_7(t_Handle VAR_13)
{
    t_FmRtc *VAR_14 = (t_FmRtc *)VAR_13;
    struct rtc_cfg *VAR_15;
    struct rtc_regs *VAR_16;
    uint32_t VAR_17 = 0;
    uint64_t VAR_18;
    bool VAR_19 = VAR_4;

    VAR_15 = VAR_14->p_RtcDriverParam;
    VAR_16 = VAR_14->p_MemMap;

    if (FUNC_0(VAR_14)!=VAR_3)
        FUNC_4(VAR_8, VAR_1,
                     ("Init Parameters are not Valid"));




    if (VAR_14->p_RtcDriverParam->src_clk != VAR_2)
        VAR_14->srcClkFreqMhz = VAR_14->p_RtcDriverParam->ext_src_clk_freq;
    else
        VAR_14->srcClkFreqMhz = (uint32_t)(FUNC_2(VAR_14->h_Fm));



    if (!VAR_15->timer_slave_mode && VAR_14->p_RtcDriverParam->bypass)
        VAR_14->clockPeriodNanoSec = (1000 / VAR_14->srcClkFreqMhz);
    else
    {




        VAR_19 = VAR_10;
        VAR_17 = (uint32_t)FUNC_1(VAR_0 * 1000,
                                              VAR_14->clockPeriodNanoSec * VAR_14->srcClkFreqMhz);
    }



    VAR_18 = 10000 * (uint64_t)VAR_14->clockPeriodNanoSec * (uint64_t)VAR_14->srcClkFreqMhz;
    if ((VAR_18) <= 10001)
        FUNC_4(VAR_8, VAR_1,
              ("Invalid relation between source and destination clocks. Should be larger than 1.0001"));

    FUNC_6(VAR_15,
             VAR_16,
             VAR_5,
             VAR_7,
             VAR_6,
             VAR_19,
             VAR_17,
             VAR_14->outputClockDivisor);


    FUNC_3(VAR_14->h_Fm, VAR_12, 0, VAR_11, VAR_9 , VAR_14);


    FUNC_5(VAR_14->p_RtcDriverParam);
    VAR_14->p_RtcDriverParam = ((void*)0);

    return VAR_3;
}
