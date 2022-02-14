
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ portType; int extBufPools; struct TYPE_3__* p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_FmExtPools ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int *,int) ;

t_Error FUNC_3(t_Handle VAR_5, t_FmExtPools *VAR_6)
{
    t_FmPort *VAR_7 = (t_FmPort*)VAR_5;

    FUNC_1(VAR_7, VAR_0);
    FUNC_1(VAR_7->p_FmPortDriverParam, VAR_0);

    if (VAR_7->portType != VAR_4)
        FUNC_0(VAR_3, VAR_1,
                     ("available for OP ports only"));

    FUNC_2(&VAR_7->p_FmPortDriverParam->extBufPools, VAR_6,
           sizeof(t_FmExtPools));

    return VAR_2;
}
