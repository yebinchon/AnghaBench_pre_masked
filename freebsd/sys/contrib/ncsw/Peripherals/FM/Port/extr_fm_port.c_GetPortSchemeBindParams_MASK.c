
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int schemesPerPortVector; int useClsPlan; int hardwarePortId; int netEnvId; } ;
typedef TYPE_1__ t_FmPort ;
struct TYPE_5__ {size_t numOfSchemes; scalar_t__* schemesIds; int useClsPlan; int hardwarePortId; int netEnvId; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleBindPortToSchemes ;



__attribute__((used)) static uint32_t FUNC_0(
        t_Handle VAR_0, t_FmPcdKgInterModuleBindPortToSchemes *VAR_1)
{
    t_FmPort *VAR_2 = (t_FmPort*)VAR_0;
    uint32_t VAR_3 = 0x80000000, VAR_4;
    uint8_t VAR_5 = 0;

    VAR_1->netEnvId = VAR_2->netEnvId;
    VAR_1->hardwarePortId = VAR_2->hardwarePortId;
    VAR_1->useClsPlan = VAR_2->useClsPlan;
    VAR_1->numOfSchemes = 0;
    VAR_4 = VAR_2->schemesPerPortVector;
    if (VAR_4)
    {
        while (VAR_4)
        {
            if (VAR_4 & VAR_3)
            {
                VAR_1->schemesIds[VAR_1->numOfSchemes] = VAR_5;
                VAR_1->numOfSchemes++;
                VAR_4 &= ~VAR_3;
            }
            VAR_3 >>= 1;
            VAR_5++;
        }
    }

    return VAR_4;
}
