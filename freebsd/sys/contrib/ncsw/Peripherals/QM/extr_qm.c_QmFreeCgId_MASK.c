
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {size_t* cgsUsed; } ;
typedef TYPE_1__ t_Qm ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;

t_Error FUNC_1(t_Handle VAR_4, uint8_t VAR_5)
{
    t_Qm *VAR_6 = (t_Qm *)VAR_4;

    if (!VAR_6->cgsUsed[VAR_5])
        FUNC_0(VAR_3, VAR_0, ("CG is not in use"));
    else
        VAR_6->cgsUsed[VAR_5] = (uint8_t)VAR_2;

    return VAR_1;
}
