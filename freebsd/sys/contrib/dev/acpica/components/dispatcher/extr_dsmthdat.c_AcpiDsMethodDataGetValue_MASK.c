
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_3__ {int * Object; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int ,int *,TYPE_1__**) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    UINT8 VAR_9,
    UINT32 VAR_10,
    ACPI_WALK_STATE *VAR_11,
    ACPI_OPERAND_OBJECT **VAR_12)
{
    ACPI_STATUS VAR_13;
    ACPI_NAMESPACE_NODE *VAR_14;
    ACPI_OPERAND_OBJECT *VAR_15;


    FUNC_2 (VAR_8);




    if (!VAR_12)
    {
        FUNC_0 ((VAR_4, "Null object descriptor pointer"));
        FUNC_6 (VAR_3);
    }



    VAR_13 = FUNC_3 (VAR_9, VAR_10, VAR_11, &VAR_14);
    if (FUNC_1 (VAR_13))
    {
        FUNC_6 (VAR_13);
    }



    VAR_15 = VAR_14->Object;



    if (!VAR_15)
    {
        if (VAR_7)
        {
            VAR_15 = FUNC_5 ((UINT64) 0);
            if (!VAR_15)
            {
                FUNC_6 (VAR_5);
            }

            VAR_14->Object = VAR_15;
        }



        else switch (VAR_9)
        {
        case 129:

            FUNC_0 ((VAR_4,
                "Uninitialized Arg[%u] at node %p",
                VAR_10, VAR_14));

            FUNC_6 (VAR_1);

        case 128:




            FUNC_6 (VAR_2);

        default:

            FUNC_0 ((VAR_4, "Not a Arg/Local opcode: 0x%X", VAR_9));
            FUNC_6 (VAR_0);
        }
    }





    *VAR_12 = VAR_15;
    FUNC_4 (VAR_15);

    FUNC_6 (VAR_6);
}
