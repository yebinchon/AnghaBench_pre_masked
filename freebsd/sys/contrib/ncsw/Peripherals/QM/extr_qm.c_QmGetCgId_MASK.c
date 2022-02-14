
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {size_t partCgsBase; size_t partNumOfCgs; scalar_t__* cgsUsed; } ;
typedef TYPE_1__ t_Qm ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_3 ;

t_Error FUNC_1(t_Handle VAR_4, uint8_t *VAR_5)
{
    t_Qm *VAR_6 = (t_Qm *)VAR_4;
    uint16_t VAR_7;

    for(VAR_7 = VAR_6->partCgsBase;VAR_7<VAR_6->partCgsBase+VAR_6->partNumOfCgs;VAR_7++)
        if (!VAR_6->cgsUsed[VAR_7])
        {
            VAR_6->cgsUsed[VAR_7] = (uint8_t)VAR_3;
            *VAR_5 = (uint8_t)VAR_7;
            break;
        }
    if(VAR_7 == (VAR_6->partCgsBase+VAR_6->partNumOfCgs))
        FUNC_0(VAR_2, VAR_0, ("No available CG"));
    else
        return VAR_1;
}
