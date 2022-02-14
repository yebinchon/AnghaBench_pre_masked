
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int UINT32 ;
struct TYPE_19__ {int const ParseOpcode; TYPE_6__* Child; } ;
struct TYPE_22__ {TYPE_3__ Asl; } ;
struct TYPE_18__ {int ExpectedBtypes; int Name; } ;
struct TYPE_21__ {TYPE_2__ Info; } ;
struct TYPE_20__ {TYPE_14__* Op; } ;
struct TYPE_17__ {int NameSeg; } ;
struct TYPE_16__ {TYPE_1__ Asl; } ;
typedef TYPE_4__ ASL_METHOD_INFO ;
typedef TYPE_5__ ACPI_PREDEFINED_INFO ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;




 int VAR_0 ;


 TYPE_5__* VAR_1 ;
 int FUNC_0 (TYPE_14__*,int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_6__*,int ,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__ const*) ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_5,
    ASL_METHOD_INFO *VAR_6)
{
    UINT32 VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;
    const ACPI_PREDEFINED_INFO *VAR_9;
    VAR_2 = VAR_4;
    VAR_7 = FUNC_0 (VAR_6->Op,
        VAR_6->Op->Asl.NameSeg);
    VAR_2 = VAR_3;

    switch (VAR_7)
    {
    case 137:



        FUNC_1 (VAR_5, VAR_6);
        return;

    case 136:
    case 135:
    case 138:


        return;

    default:

        VAR_9 = &VAR_1[VAR_7];
        if (!VAR_9->Info.ExpectedBtypes)
        {


            FUNC_1 (VAR_5, VAR_6);
            return;
        }



        VAR_8 = VAR_5->Asl.Child;
        switch (VAR_8->Asl.ParseOpcode)
        {
        case 128:
        case 132:
        case 131:
        case 133:
        case 129:
        case 134:
        case 130:



            FUNC_2 (VAR_9->Info.Name, VAR_8,
                VAR_9->Info.ExpectedBtypes, VAR_0);



            if (VAR_8->Asl.ParseOpcode == 130)
            {
                FUNC_3 (VAR_8, VAR_9);
            }
            break;

        default:







            break;
        }
    }
}
