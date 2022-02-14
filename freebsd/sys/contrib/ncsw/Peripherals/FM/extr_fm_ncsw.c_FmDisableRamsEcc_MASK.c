
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_1__* p_FmStateStruct; } ;
typedef TYPE_2__ t_Fm ;
typedef int t_Error ;
struct TYPE_5__ {scalar_t__ ramsEccOwners; int internalCall; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;

t_Error FUNC_3(t_Handle VAR_3)
{
    t_Fm *VAR_4 = (t_Fm*)VAR_3;

    FUNC_2(VAR_4, VAR_0);

    FUNC_0(VAR_4->p_FmStateStruct->ramsEccOwners);
    VAR_4->p_FmStateStruct->ramsEccOwners--;

    if (VAR_4->p_FmStateStruct->ramsEccOwners==0)
    {
        VAR_4->p_FmStateStruct->internalCall = VAR_2;
        return FUNC_1(VAR_4);
    }

    return VAR_1;
}
