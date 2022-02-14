
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef struct rtc_cfg* t_Handle ;
struct TYPE_4__ {int h_App; int baseAddress; int h_Fm; } ;
typedef TYPE_1__ t_FmRtcParams ;
struct rtc_cfg {int h_App; struct rtc_regs* p_MemMap; int clockPeriodNanoSec; int bypass; struct rtc_cfg* p_RtcDriverParam; int outputClockDivisor; int h_Fm; } ;
typedef struct rtc_cfg t_FmRtc ;
struct rtc_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct rtc_cfg*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct rtc_cfg*) ;
 int FUNC_6 (struct rtc_cfg*,int ,int) ;

t_Handle FUNC_7(t_FmRtcParams *VAR_6)
{
    t_FmRtc *VAR_7;

    FUNC_1(VAR_6, VAR_4, ((void*)0));


    VAR_7 = (t_FmRtc *)FUNC_4(sizeof(t_FmRtc));
    if (!VAR_7)
    {
        FUNC_0(VAR_5, VAR_3, ("FM RTC driver structure"));
        return ((void*)0);
    }

    FUNC_6(VAR_7, 0, sizeof(t_FmRtc));


    VAR_7->p_RtcDriverParam = (struct rtc_cfg *)FUNC_4(sizeof(struct rtc_cfg));
    if (!VAR_7->p_RtcDriverParam)
    {
        FUNC_0(VAR_5, VAR_3, ("FM RTC driver parameters"));
        FUNC_3(VAR_7);
        return ((void*)0);
    }

    FUNC_6(VAR_7->p_RtcDriverParam, 0, sizeof(struct rtc_cfg));


    VAR_7->h_Fm = VAR_6->h_Fm;


    FUNC_5(VAR_7->p_RtcDriverParam);

    VAR_7->outputClockDivisor = VAR_2;
    VAR_7->p_RtcDriverParam->bypass = VAR_0;
    VAR_7->clockPeriodNanoSec = VAR_1;



    VAR_7->p_MemMap = (struct rtc_regs *)FUNC_2(VAR_6->baseAddress);
    VAR_7->h_App = VAR_6->h_App;

    return VAR_7;
}
