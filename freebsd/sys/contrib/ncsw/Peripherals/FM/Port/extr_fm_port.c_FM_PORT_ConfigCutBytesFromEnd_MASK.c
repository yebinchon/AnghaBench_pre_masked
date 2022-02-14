
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int rx_cut_end_bytes; } ;
struct TYPE_5__ {scalar_t__ portType; TYPE_1__ dfltCfg; struct TYPE_5__* p_FmPortDriverParam; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

t_Error FUNC_2(t_Handle VAR_6,
                                      uint8_t VAR_7)
{
    t_FmPort *VAR_8 = (t_FmPort*)VAR_6;

    FUNC_1(VAR_8, VAR_0);
    FUNC_1(VAR_8->p_FmPortDriverParam, VAR_0);
    if ((VAR_8->portType != VAR_5)
            && (VAR_8->portType != VAR_4))
        FUNC_0(VAR_3, VAR_1,
                     ("available for Rx ports only"));

    VAR_8->p_FmPortDriverParam->dfltCfg.rx_cut_end_bytes = VAR_7;

    return VAR_2;
}
