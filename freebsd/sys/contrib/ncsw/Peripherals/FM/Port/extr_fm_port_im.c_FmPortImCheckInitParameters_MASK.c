
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mrblr; } ;
struct TYPE_7__ {scalar_t__ portType; TYPE_2__* p_FmPortDriverParam; TYPE_1__ im; } ;
typedef TYPE_3__ t_FmPort ;
typedef int t_Error ;
struct TYPE_6__ {int liodnOffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

t_Error FUNC_2(t_FmPort *VAR_9)
{
    if ((VAR_9->portType != VAR_5) &&
        (VAR_9->portType != VAR_6) &&
        (VAR_9->portType != VAR_7) &&
        (VAR_9->portType != VAR_8))
        FUNC_1(VAR_3, VAR_0, VAR_4);

    if ((VAR_9->portType == VAR_5) ||
        (VAR_9->portType == VAR_6))
    {
        if (!FUNC_0(VAR_9->im.mrblr))
            FUNC_1(VAR_3, VAR_0, ("max Rx buffer length must be power of 2!!!"));
        if (VAR_9->im.mrblr < 256)
            FUNC_1(VAR_3, VAR_0, ("max Rx buffer length must at least 256!!!"));
        if (VAR_9->p_FmPortDriverParam->liodnOffset & ~VAR_2)
            FUNC_1(VAR_3, VAR_0, ("liodnOffset is larger than %d", VAR_2+1));
    }

    return VAR_1;
}
