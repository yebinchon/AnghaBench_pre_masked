
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UINT64 ;
typedef int UINT32 ;
struct TYPE_13__ {size_t Value; } ;
struct TYPE_12__ {size_t Count; TYPE_4__** Elements; } ;
struct TYPE_15__ {TYPE_2__ Integer; TYPE_1__ Package; } ;
struct TYPE_14__ {int Opcode; TYPE_4__* ResultObj; TYPE_4__** Operands; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_4 (int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__**) ;
 int FUNC_6 (int) ;
 TYPE_4__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_OPERAND_OBJECT **VAR_10 = &VAR_9->Operands[0];
    ACPI_OPERAND_OBJECT *VAR_11 = ((void*)0);
    ACPI_STATUS VAR_12 = VAR_6;
    UINT64 VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14;


    FUNC_3 (VAR_7,
        FUNC_6 (VAR_9->Opcode));


    switch (VAR_9->Opcode)
    {
    case 128:







        if ((VAR_10[1]->Integer.Value > VAR_8) ||
            (VAR_10[3]->Integer.Value > VAR_8))
        {
            FUNC_0 ((VAR_4, "Match operator out of range"));
            VAR_12 = VAR_2;
            goto Cleanup;
        }



        VAR_13 = VAR_10[5]->Integer.Value;
        if (VAR_13 >= VAR_10[0]->Package.Count)
        {
            FUNC_0 ((VAR_4,
                "Index (0x%8.8X%8.8X) beyond package end (0x%X)",
                FUNC_2 (VAR_13), VAR_10[0]->Package.Count));
            VAR_12 = VAR_3;
            goto Cleanup;
        }




        VAR_11 = FUNC_7 (VAR_0);
        if (!VAR_11)
        {
            VAR_12 = VAR_5;
            goto Cleanup;

        }
        for ( ; VAR_13 < VAR_10[0]->Package.Count; VAR_13++)
        {


            VAR_14 = VAR_10[0]->Package.Elements[VAR_13];



            if (!VAR_14)
            {
                continue;
            }






            if (!FUNC_4 ((UINT32) VAR_10[1]->Integer.Value,
                    VAR_14, VAR_10[2]))
            {
                continue;
            }

            if (!FUNC_4 ((UINT32) VAR_10[3]->Integer.Value,
                    VAR_14, VAR_10[4]))
            {
                continue;
            }



            VAR_11->Integer.Value = VAR_13;
            break;
        }
        break;

    case 129:

        VAR_12 = FUNC_5 (VAR_9, &VAR_11);
        break;

    default:

        FUNC_0 ((VAR_4, "Unknown AML opcode 0x%X",
            VAR_9->Opcode));

        VAR_12 = VAR_1;
        goto Cleanup;
    }


Cleanup:



    if (FUNC_1 (VAR_12))
    {
        FUNC_8 (VAR_11);
    }



    else
    {
        VAR_9->ResultObj = VAR_11;
    }

    FUNC_9 (VAR_12);
}
