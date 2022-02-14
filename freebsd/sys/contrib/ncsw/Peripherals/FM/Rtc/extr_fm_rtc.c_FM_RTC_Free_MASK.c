
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int h_Fm; struct TYPE_4__* p_RtcDriverParam; } ;
typedef TYPE_1__ t_FmRtc ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

t_Error FUNC_4(t_Handle VAR_4)
{
    t_FmRtc *VAR_5 = (t_FmRtc *)VAR_4;

    FUNC_2(VAR_5, VAR_0);

    if (VAR_5->p_RtcDriverParam)
    {
        FUNC_3(VAR_5->p_RtcDriverParam);
    }
    else
    {
        FUNC_0(VAR_4);
    }


    FUNC_1(VAR_5->h_Fm, VAR_3, 0, VAR_2);
    FUNC_3(VAR_5);

    return VAR_1;
}
