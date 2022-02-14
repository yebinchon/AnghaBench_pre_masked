
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outputClockDivisor; struct rtc_cfg* p_RtcDriverParam; } ;
typedef TYPE_1__ t_FmRtc ;
typedef int t_Error ;
struct rtc_cfg {scalar_t__ src_clk; scalar_t__* alarm_polarity; scalar_t__* trigger_polarity; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_1(t_FmRtc *VAR_14)
{
    struct rtc_cfg *VAR_15 = VAR_14->p_RtcDriverParam;
    int VAR_16;

    if ((VAR_15->src_clk != VAR_2) &&
        (VAR_15->src_clk != VAR_4) &&
        (VAR_15->src_clk != VAR_3))
        FUNC_0(VAR_13, VAR_7, ("Source clock undefined"));

    if (VAR_14->outputClockDivisor == 0)
    {
        FUNC_0(VAR_13, VAR_9,
                     ("Divisor for output clock (should be positive)"));
    }

    for (VAR_16=0; VAR_16 < VAR_11; VAR_16++)
    {
        if ((VAR_15->alarm_polarity[VAR_16] != VAR_1) &&
            (VAR_15->alarm_polarity[VAR_16] != VAR_0))
        {
            FUNC_0(VAR_13, VAR_8, ("Alarm %d signal polarity", VAR_16));
        }
    }
    for (VAR_16=0; VAR_16 < VAR_12; VAR_16++)
    {
        if ((VAR_15->trigger_polarity[VAR_16] != VAR_5) &&
            (VAR_15->trigger_polarity[VAR_16] != VAR_6))
        {
            FUNC_0(VAR_13, VAR_8, ("Trigger %d signal polarity", VAR_16));
        }
    }

    return VAR_10;
}
