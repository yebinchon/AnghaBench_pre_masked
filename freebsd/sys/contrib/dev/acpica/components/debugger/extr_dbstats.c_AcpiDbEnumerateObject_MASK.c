
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_17__ {TYPE_8__* Handler; TYPE_8__** NotifyList; } ;
struct TYPE_16__ {TYPE_8__* Handler; TYPE_8__** NotifyList; } ;
struct TYPE_15__ {TYPE_8__** NotifyList; } ;
struct TYPE_14__ {TYPE_8__* Handler; } ;
struct TYPE_13__ {TYPE_8__* Handler; TYPE_8__** NotifyList; } ;
struct TYPE_12__ {size_t Count; TYPE_8__** Elements; } ;
struct TYPE_11__ {size_t Type; } ;
struct TYPE_18__ {TYPE_7__ ThermalZone; TYPE_6__ Processor; TYPE_5__ PowerResource; TYPE_4__ Region; TYPE_3__ Device; TYPE_2__ Package; TYPE_1__ Common; } ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;




 size_t VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_OPERAND_OBJECT *VAR_5)
{
    UINT32 VAR_6;


    if (!VAR_5)
    {
        return;
    }



    VAR_2++;

    if (VAR_5->Common.Type > VAR_1)
    {
        VAR_4++;
    }
    else
    {
        VAR_3 [VAR_5->Common.Type]++;
    }



    switch (VAR_5->Common.Type)
    {
    case 132:

        for (VAR_6 = 0; VAR_6 < VAR_5->Package.Count; VAR_6++)
        {
            FUNC_1 (VAR_5->Package.Elements[VAR_6]);
        }
        break;

    case 133:

        FUNC_1 (VAR_5->Device.NotifyList[0]);
        FUNC_1 (VAR_5->Device.NotifyList[1]);
        FUNC_1 (VAR_5->Device.Handler);
        break;

    case 134:

        if (FUNC_0 (VAR_5))
        {
            VAR_3 [134]++;
        }
        break;

    case 129:

        VAR_3 [VAR_0 ]++;
        FUNC_1 (VAR_5->Region.Handler);
        break;

    case 131:

        FUNC_1 (VAR_5->PowerResource.NotifyList[0]);
        FUNC_1 (VAR_5->PowerResource.NotifyList[1]);
        break;

    case 130:

        FUNC_1 (VAR_5->Processor.NotifyList[0]);
        FUNC_1 (VAR_5->Processor.NotifyList[1]);
        FUNC_1 (VAR_5->Processor.Handler);
        break;

    case 128:

        FUNC_1 (VAR_5->ThermalZone.NotifyList[0]);
        FUNC_1 (VAR_5->ThermalZone.NotifyList[1]);
        FUNC_1 (VAR_5->ThermalZone.Handler);
        break;

    default:

        break;
    }
}
