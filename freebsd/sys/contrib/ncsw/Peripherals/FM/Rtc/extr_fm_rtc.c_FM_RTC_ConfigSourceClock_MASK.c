
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int src_clk; int ext_src_clk_freq; struct TYPE_3__* p_RtcDriverParam; } ;
typedef TYPE_1__ t_FmRtc ;
typedef int t_Error ;
typedef enum fman_src_clock { ____Placeholder_fman_src_clock } fman_src_clock ;
typedef scalar_t__ e_FmSrcClk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;

t_Error FUNC_1(t_Handle VAR_4,
                                    e_FmSrcClk VAR_5,
                                    uint32_t VAR_6)
{
    t_FmRtc *VAR_7 = (t_FmRtc *)VAR_4;

    FUNC_0(VAR_7, VAR_0);
    FUNC_0(VAR_7->p_RtcDriverParam, VAR_1);

    VAR_7->p_RtcDriverParam->src_clk = (enum fman_src_clock)VAR_5;
    if (VAR_5 != VAR_3)
        VAR_7->p_RtcDriverParam->ext_src_clk_freq = VAR_6;

    return VAR_2;
}
