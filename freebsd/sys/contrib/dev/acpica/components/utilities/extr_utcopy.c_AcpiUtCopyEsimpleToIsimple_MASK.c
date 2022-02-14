
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int UINT8 ;
struct TYPE_22__ {int Object; int Class; } ;
struct TYPE_20__ {int Value; } ;
struct TYPE_19__ {int Flags; int Length; void* Pointer; } ;
struct TYPE_16__ {int Length; void* Pointer; } ;
struct TYPE_24__ {TYPE_7__ Reference; TYPE_5__ Integer; TYPE_4__ Buffer; TYPE_1__ String; } ;
struct TYPE_23__ {int Handle; } ;
struct TYPE_21__ {int Value; } ;
struct TYPE_18__ {int Length; int Pointer; } ;
struct TYPE_17__ {int Length; int Pointer; } ;
struct TYPE_15__ {int Type; TYPE_8__ Reference; TYPE_6__ Integer; TYPE_3__ Buffer; TYPE_2__ String; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_9__ ACPI_OPERAND_OBJECT ;
typedef TYPE_10__ ACPI_OBJECT ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_9__*) ;
 int VAR_6 ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_OBJECT *VAR_7,
    ACPI_OPERAND_OBJECT **VAR_8)
{
    ACPI_OPERAND_OBJECT *VAR_9;


    FUNC_2 (VAR_6);





    switch (VAR_7->Type)
    {
    case 128:
    case 131:
    case 130:
    case 129:

        VAR_9 = FUNC_3 (
            (UINT8) VAR_7->Type);
        if (!VAR_9)
        {
            FUNC_7 (VAR_2);
        }
        break;

    case 132:

        *VAR_8 = ((void*)0);
        FUNC_7 (VAR_3);

    default:



        FUNC_1 ((VAR_1,
            "Unsupported object type, cannot convert to internal object: %s",
            FUNC_4 (VAR_7->Type)));

        FUNC_7 (VAR_4);
    }




    switch (VAR_7->Type)
    {
    case 128:

        VAR_9->String.Pointer =
            FUNC_0 ((ACPI_SIZE)
                VAR_7->String.Length + 1);

        if (!VAR_9->String.Pointer)
        {
            goto ErrorExit;
        }

        FUNC_6 (VAR_9->String.Pointer,
            VAR_7->String.Pointer,
            VAR_7->String.Length);

        VAR_9->String.Length = VAR_7->String.Length;
        break;

    case 131:

        VAR_9->Buffer.Pointer =
            FUNC_0 (VAR_7->Buffer.Length);
        if (!VAR_9->Buffer.Pointer)
        {
            goto ErrorExit;
        }

        FUNC_6 (VAR_9->Buffer.Pointer,
            VAR_7->Buffer.Pointer,
            VAR_7->Buffer.Length);

        VAR_9->Buffer.Length = VAR_7->Buffer.Length;



        VAR_9->Buffer.Flags |= VAR_5;
        break;

    case 130:

        VAR_9->Integer.Value = VAR_7->Integer.Value;
        break;

    case 129:



        VAR_9->Reference.Class = VAR_0;
        VAR_9->Reference.Object = VAR_7->Reference.Handle;
        break;

    default:



        break;
    }

    *VAR_8 = VAR_9;
    FUNC_7 (VAR_3);


ErrorExit:
    FUNC_5 (VAR_9);
    FUNC_7 (VAR_2);
}
