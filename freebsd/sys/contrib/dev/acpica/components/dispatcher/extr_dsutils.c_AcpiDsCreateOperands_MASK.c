
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_10__ {TYPE_3__* Next; } ;
struct TYPE_12__ {TYPE_1__ Common; } ;
struct TYPE_11__ {int NumOperands; scalar_t__ OperandIndex; int ** Operands; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_WALK_STATE *VAR_6,
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_STATUS VAR_8 = VAR_4;
    ACPI_PARSE_OBJECT *VAR_9;
    ACPI_PARSE_OBJECT *VAR_10[VAR_1];
    UINT32 VAR_11 = 0;
    UINT32 VAR_12 = VAR_6->NumOperands;
    UINT32 VAR_13;


    FUNC_3 (VAR_5, VAR_7);




    VAR_9 = VAR_7;
    while (VAR_9)
    {
        if (VAR_12 >= VAR_1)
        {
            FUNC_6 (VAR_2);
        }

        VAR_10[VAR_12] = VAR_9;
        VAR_6->Operands [VAR_12] = ((void*)0);



        VAR_9 = VAR_9->Common.Next;
        VAR_11++;
        VAR_12++;
    }

    FUNC_0 ((VAR_0,
        "NumOperands %d, ArgCount %d, Index %d\n",
        VAR_6->NumOperands, VAR_11, VAR_12));



    VAR_12--;
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
    {
        VAR_9 = VAR_10[VAR_12];
        VAR_6->OperandIndex = (UINT8) VAR_12;

        VAR_8 = FUNC_4 (VAR_6, VAR_9, VAR_12);
        if (FUNC_2 (VAR_8))
        {
            goto Cleanup;
        }

        FUNC_0 ((VAR_0,
            "Created Arg #%u (%p) %u args total\n",
            VAR_12, VAR_9, VAR_11));
        VAR_12--;
    }

    FUNC_6 (VAR_8);


Cleanup:





    FUNC_5 (VAR_11, VAR_6);

    FUNC_1 ((VAR_3, VAR_8, "While creating Arg %u", VAR_12));
    FUNC_6 (VAR_8);
}
