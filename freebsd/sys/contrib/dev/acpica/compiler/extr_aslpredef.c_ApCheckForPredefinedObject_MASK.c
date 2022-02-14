
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_17__ {scalar_t__ ParseOpcode; TYPE_2__* Child; } ;
struct TYPE_19__ {TYPE_4__ Asl; } ;
struct TYPE_16__ {int ExpectedBtypes; int Name; int ArgumentList; } ;
struct TYPE_18__ {TYPE_3__ Info; } ;
struct TYPE_14__ {TYPE_6__* Next; } ;
struct TYPE_15__ {TYPE_1__ Asl; } ;
typedef TYPE_5__ ACPI_PREDEFINED_INFO ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (int ,TYPE_6__*,int ,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__ const*) ;
 int FUNC_3 (int ,int ,TYPE_6__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;

void
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_5,
    char *VAR_6)
{
    UINT32 VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;
    const ACPI_PREDEFINED_INFO *VAR_9;






    VAR_7 = FUNC_0 (VAR_5, VAR_6);

    switch (VAR_7)
    {
    case 129:
    case 128:
    case 131:


        return;

    case 130:






        FUNC_3 (VAR_1, VAR_2, VAR_5,
            "with zero arguments");
        return;

    default:

        break;
    }







    VAR_9 = &VAR_3[VAR_7];
    if (FUNC_4 (VAR_9->Info.ArgumentList) > 0)
    {
        FUNC_3 (VAR_1, VAR_2, VAR_5,
            "with arguments");
        return;
    }







    if (!VAR_9->Info.ExpectedBtypes)
    {
        FUNC_3 (VAR_1, VAR_2, VAR_5,
            "with zero arguments");
        return;
    }



    VAR_8 = VAR_5->Asl.Child->Asl.Next;
    FUNC_1 (VAR_9->Info.Name, VAR_5->Asl.Child->Asl.Next,
        VAR_9->Info.ExpectedBtypes, VAR_0);



    if (VAR_8->Asl.ParseOpcode == VAR_4)
    {
        FUNC_2 (VAR_8, VAR_9);
    }
}
