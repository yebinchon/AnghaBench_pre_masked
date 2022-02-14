
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
struct TYPE_5__ {int internalCall; int ramsEccOwners; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;

t_Error FUNC_2(t_Handle VAR_2)
{
    t_Fm *VAR_3 = (t_Fm*)VAR_2;

    FUNC_1(VAR_3, VAR_0);

    VAR_3->p_FmStateStruct->ramsEccOwners++;
    VAR_3->p_FmStateStruct->internalCall = VAR_1;

    return FUNC_0(VAR_3);
}
