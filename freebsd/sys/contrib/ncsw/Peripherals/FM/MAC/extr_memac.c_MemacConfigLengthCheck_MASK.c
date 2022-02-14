
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int no_length_check_enable; struct TYPE_3__* p_MemacDriverParam; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static t_Error FUNC_1(t_Handle VAR_3, bool VAR_4)
{
    t_Memac *VAR_5 = (t_Memac *)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_MemacDriverParam, VAR_1);

    VAR_5->p_MemacDriverParam->no_length_check_enable = !VAR_4;

    return VAR_2;
}
