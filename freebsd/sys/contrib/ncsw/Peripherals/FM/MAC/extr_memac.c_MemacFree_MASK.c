
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_MemacDriverParam; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_2)
{
    t_Memac *VAR_3 = (t_Memac *)VAR_2;

    FUNC_1(VAR_3, VAR_0);

    if (VAR_3->p_MemacDriverParam)
    {

        FUNC_2(VAR_3->p_MemacDriverParam);
        VAR_3->p_MemacDriverParam = ((void*)0);
    }
    else

        FUNC_0(VAR_3);

    FUNC_2(VAR_3);

    return VAR_1;
}
