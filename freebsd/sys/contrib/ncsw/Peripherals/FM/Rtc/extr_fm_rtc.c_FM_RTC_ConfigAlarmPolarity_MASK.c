
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int* alarm_polarity; struct TYPE_3__* p_RtcDriverParam; } ;
typedef TYPE_1__ t_FmRtc ;
typedef int t_Error ;
typedef enum fman_rtc_alarm_polarity { ____Placeholder_fman_rtc_alarm_polarity } fman_rtc_alarm_polarity ;
typedef scalar_t__ e_FmRtcAlarmPolarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

t_Error FUNC_2(t_Handle VAR_6,
                                   uint8_t VAR_7,
                                   e_FmRtcAlarmPolarity VAR_8)
{
    t_FmRtc *VAR_9 = (t_FmRtc *)VAR_6;

    FUNC_1(VAR_9, VAR_0);
    FUNC_1(VAR_9->p_RtcDriverParam, VAR_2);

    if (VAR_7 >= VAR_4)
        FUNC_0(VAR_5, VAR_1, ("Alarm ID"));

    VAR_9->p_RtcDriverParam->alarm_polarity[VAR_7] =
        (enum fman_rtc_alarm_polarity)VAR_8;

    return VAR_3;
}
