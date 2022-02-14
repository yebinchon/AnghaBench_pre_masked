
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ portType; int errorsToDiscard; struct TYPE_3__* p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_Error ;
typedef int fmPortFrameErrSelect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

t_Error FUNC_2(t_Handle VAR_7,
                                      fmPortFrameErrSelect_t VAR_8)
{
    t_FmPort *VAR_9 = (t_FmPort*)VAR_7;

    FUNC_1(VAR_9, VAR_0);
    FUNC_1(VAR_9->p_FmPortDriverParam, VAR_0);
    if ((VAR_9->portType != VAR_6)
            && (VAR_9->portType != VAR_5)
            && (VAR_9->portType != VAR_4))
        FUNC_0( VAR_3, VAR_1,
                     ("available for Rx and offline parsing ports only"));

    VAR_9->p_FmPortDriverParam->errorsToDiscard = VAR_8;

    return VAR_2;
}
