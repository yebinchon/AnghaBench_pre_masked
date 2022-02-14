
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_5__ {int poolsParams; int poolDepletionParams; } ;
typedef TYPE_1__ t_FmPortObservedBufPoolDepletion ;
struct TYPE_6__ {scalar_t__ portType; int extBufPools; struct TYPE_6__* p_FmPortDriverParam; int bufPoolDepletion; int enBufPoolDepletion; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_FmExtPools ;
typedef int t_FmBufPoolDepletion ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int *,int) ;

t_Error FUNC_3(
        t_Handle VAR_6,
        t_FmPortObservedBufPoolDepletion *VAR_7)
{
    t_FmPort *VAR_8 = (t_FmPort*)VAR_6;

    FUNC_1(VAR_8, VAR_0);
    FUNC_1(VAR_8->p_FmPortDriverParam, VAR_0);
    if (VAR_8->portType != VAR_5)
        FUNC_0(VAR_3, VAR_1,
                     ("available for OP ports only"));

    VAR_8->p_FmPortDriverParam->enBufPoolDepletion = VAR_4;
    FUNC_2(&VAR_8->p_FmPortDriverParam->bufPoolDepletion,
           &VAR_7->poolDepletionParams,
           sizeof(t_FmBufPoolDepletion));
    FUNC_2(&VAR_8->p_FmPortDriverParam->extBufPools,
           &VAR_7->poolsParams,
           sizeof(t_FmExtPools));

    return VAR_2;
}
