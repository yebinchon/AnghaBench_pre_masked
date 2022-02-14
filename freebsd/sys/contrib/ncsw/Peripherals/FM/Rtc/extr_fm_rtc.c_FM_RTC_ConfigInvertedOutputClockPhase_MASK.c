
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int invert_output_clk_phase; struct TYPE_3__* p_RtcDriverParam; } ;
typedef TYPE_1__ t_FmRtc ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3, bool VAR_4)
{
    t_FmRtc *VAR_5 = (t_FmRtc *)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_RtcDriverParam, VAR_1);

    VAR_5->p_RtcDriverParam->invert_output_clk_phase = VAR_4;

    return VAR_2;
}
