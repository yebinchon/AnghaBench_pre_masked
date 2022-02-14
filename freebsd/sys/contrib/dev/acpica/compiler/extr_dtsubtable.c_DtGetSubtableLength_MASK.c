
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_8__ {char* Name; int Opcode; } ;
struct TYPE_7__ {struct TYPE_7__* Next; } ;
typedef TYPE_1__ DT_FIELD ;
typedef TYPE_2__ ACPI_DMTABLE_INFO ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,char*,char*) ;

UINT32
FUNC_3 (
    DT_FIELD *VAR_4,
    ACPI_DMTABLE_INFO *VAR_5)
{
    UINT32 VAR_6 = 0;
    UINT8 VAR_7;
    UINT8 VAR_8;




    for (; VAR_5->Name; VAR_5++)
    {
        if (VAR_5->Opcode == VAR_0)
        {
            continue;
        }

        if (!VAR_4)
        {
            goto Error;
        }

        VAR_6 += FUNC_1 (VAR_4, VAR_5);

        switch (VAR_5->Opcode)
        {
        case 130:

            VAR_7 = 5;
            break;

        case 129:

            VAR_7 = 9;
            break;

        case 128:

            VAR_7 = 10;
            break;

        default:

            VAR_7 = 1;
            break;
        }

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        {
            if (!VAR_4)
            {
                goto Error;
            }

            VAR_4 = VAR_4->Next;
        }
    }

    return (VAR_6);

Error:
    if (!VAR_4)
    {
        FUNC_2 (VAR_3, "Found NULL field - Field name \"%s\" needed",
            VAR_5->Name);
        FUNC_0 (VAR_2, ((void*)0), VAR_3);
    }

    return (VAR_1);
}
