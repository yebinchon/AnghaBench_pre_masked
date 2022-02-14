
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_13__ {int Type; int Flags; } ;
struct TYPE_12__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_11__ {int * Pointer; } ;
struct TYPE_10__ {int Value; } ;
struct TYPE_14__ {TYPE_4__ Common; TYPE_3__ String; TYPE_2__ Buffer; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ,TYPE_5__*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_6,
    ACPI_OPERAND_OBJECT **VAR_7)
{
    ACPI_OPERAND_OBJECT *VAR_8;
    UINT8 *VAR_9;


    FUNC_0 (VAR_5, VAR_6);


    switch (VAR_6->Common.Type)
    {
    case 130:



        *VAR_7 = VAR_6;
        FUNC_3 (VAR_1);


    case 129:




        VAR_8 = FUNC_1 (VAR_4);
        if (!VAR_8)
        {
            FUNC_3 (VAR_0);
        }



        VAR_9 = VAR_8->Buffer.Pointer;
        FUNC_2 (VAR_9, &VAR_6->Integer.Value, VAR_4);
        break;

    case 128:
        VAR_8 = FUNC_1 ((ACPI_SIZE)
            VAR_6->String.Length + 1);
        if (!VAR_8)
        {
            FUNC_3 (VAR_0);
        }



        VAR_9 = VAR_8->Buffer.Pointer;
        FUNC_4 ((char *) VAR_9, (char *) VAR_6->String.Pointer,
            VAR_6->String.Length);
        break;

    default:

        FUNC_3 (VAR_2);
    }



    VAR_8->Common.Flags |= VAR_3;
    *VAR_7 = VAR_8;
    FUNC_3 (VAR_1);
}
