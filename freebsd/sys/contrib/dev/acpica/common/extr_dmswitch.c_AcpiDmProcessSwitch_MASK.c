
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int AmlOpcode; int DisasmFlags; int DisasmOpcode; } ;
struct TYPE_10__ {int Name; } ;
struct TYPE_13__ {TYPE_2__ Common; TYPE_1__ Named; } ;
struct TYPE_12__ {struct TYPE_12__* Next; TYPE_4__* Op; } ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT_LIST ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 TYPE_3__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (TYPE_4__*,char**) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*,int) ;

ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_8)
{
    char *VAR_9 = ((void*)0);
    ACPI_PARSE_OBJECT_LIST *VAR_10;
    ACPI_PARSE_OBJECT_LIST *VAR_11;
    ACPI_PARSE_OBJECT_LIST *VAR_12;
    BOOLEAN VAR_13 = VAR_5;


    switch (VAR_8->Common.AmlOpcode)
    {
    case 129:

        VAR_9 = (char *) (&VAR_8->Named.Name);

        if (!FUNC_4(VAR_9, "_T_", 3))
        {


            VAR_10 = FUNC_0 (sizeof (ACPI_PARSE_OBJECT_LIST));
            if (!VAR_10)
            {
                return (VAR_2);
            }

            if (VAR_4)
            {
                VAR_11 = VAR_4;
                VAR_4 = VAR_10;
                VAR_4->Op = VAR_8;
                VAR_4->Next = VAR_11;
            }
            else
            {
                VAR_4 = VAR_10;
                VAR_4->Op = VAR_8;
                VAR_4->Next = ((void*)0);
            }
        }
        break;

    case 128:

        if (!FUNC_2 (VAR_8, &VAR_9))
        {
            break;
        }



        VAR_8->Common.DisasmOpcode = VAR_0;

        VAR_12 = VAR_11 = VAR_4;
        while (VAR_11)
        {


            if (!FUNC_4(VAR_9, (char *) (&VAR_11->Op->Named.Name), 4))
            {


                VAR_11->Op->Common.DisasmFlags |= VAR_1;



                if (VAR_11 == VAR_4)
                {
                    VAR_4 = VAR_11->Next;
                }
                else
                {
                    VAR_12->Next = VAR_11->Next;
                }

                VAR_11->Op = ((void*)0);
                VAR_11->Next = ((void*)0);
                FUNC_1 (VAR_11);
                VAR_13 = VAR_6;
                break;
            }

            VAR_12 = VAR_11;
            VAR_11 = VAR_11->Next;
        }

        if (!VAR_13)
        {
            FUNC_3 (VAR_7,
                "Warning: Declaration for temp name %.4s not found\n", VAR_9);
        }
        break;

    default:
        break;
    }

    return (VAR_3);
}
