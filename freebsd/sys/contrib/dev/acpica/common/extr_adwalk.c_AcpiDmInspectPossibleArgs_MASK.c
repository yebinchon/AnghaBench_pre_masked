
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_10__ {scalar_t__ Class; } ;
struct TYPE_7__ {TYPE_3__* Arg; } ;
struct TYPE_8__ {scalar_t__ AmlOpcode; TYPE_3__* Next; TYPE_1__ Value; } ;
struct TYPE_9__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static UINT32
FUNC_1 (
    UINT32 VAR_9,
    UINT32 VAR_10,
    ACPI_PARSE_OBJECT *VAR_11)
{
    const ACPI_OPCODE_INFO *VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14 = 0;
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;


    if (!VAR_11)
    {
        return (0);
    }



    VAR_15 = VAR_11->Common.Next;

    for (VAR_13 = 0; (VAR_13 < VAR_0) && VAR_15; VAR_13++)
    {
        VAR_12 = FUNC_0 (VAR_15->Common.AmlOpcode);



        if ((VAR_15->Common.AmlOpcode == VAR_8) ||
            (VAR_15->Common.AmlOpcode == VAR_6) ||
            (VAR_12->Class == VAR_1) ||
            (VAR_12->Class == VAR_2) ||
            (VAR_12->Class == VAR_4))
        {
            break;
        }

        if (VAR_12->Class == VAR_3)
        {


            VAR_16 = VAR_15->Common.Value.Arg;
            while (VAR_16)
            {
                if ((VAR_16->Common.AmlOpcode == VAR_5) &&
                    (VAR_16->Common.Value.Arg == ((void*)0)))
                {


                    break;
                }

                if (VAR_15->Common.AmlOpcode == VAR_7)
                {
                    break;
                }

                VAR_16 = VAR_16->Common.Next;
            }

            if (!VAR_16)
            {


                return (VAR_14);
            }
        }

        VAR_14++;
        VAR_15 = VAR_15->Common.Next;
    }

    return (VAR_14);
}
