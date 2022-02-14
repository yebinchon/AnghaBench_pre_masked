
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ portType; int polling; int h_Fm; struct TYPE_3__* p_FmPortDriverParam; struct TYPE_3__* imEn; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

t_Error FUNC_3(t_Handle VAR_8)
{
    t_FmPort *VAR_9 = (t_FmPort*)VAR_8;

    FUNC_2(VAR_9, VAR_0);
    FUNC_2(VAR_9->imEn, VAR_2);
    FUNC_2(VAR_9->p_FmPortDriverParam, VAR_0);

    if ((VAR_9->portType != VAR_7) && (VAR_9->portType != VAR_6))
        FUNC_1(VAR_4, VAR_1, ("Available for Rx ports only"));

    if (!FUNC_0(VAR_9->h_Fm))
        FUNC_1(VAR_4, VAR_1, ("Available on master-partition only;"
                                                  "in guest-partitions, IM is always in polling!"));

    VAR_9->polling = VAR_5;

    return VAR_3;
}
