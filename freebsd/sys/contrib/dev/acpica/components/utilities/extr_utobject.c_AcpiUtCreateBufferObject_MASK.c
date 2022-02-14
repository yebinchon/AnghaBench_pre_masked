
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_7__ {scalar_t__ Length; int * Pointer; int Flags; } ;
struct TYPE_8__ {TYPE_1__ Buffer; } ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;

ACPI_OPERAND_OBJECT *
FUNC_6 (
    ACPI_SIZE VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5;
    UINT8 *VAR_6 = ((void*)0);


    FUNC_2 (VAR_3, VAR_4);




    VAR_5 = FUNC_3 (VAR_0);
    if (!VAR_5)
    {
        FUNC_5 (((void*)0));
    }



    if (VAR_4 > 0)
    {


        VAR_6 = FUNC_0 (VAR_4);
        if (!VAR_6)
        {
            FUNC_1 ((VAR_1, "Could not allocate size %u",
                (UINT32) VAR_4));

            FUNC_4 (VAR_5);
            FUNC_5 (((void*)0));
        }
    }



    VAR_5->Buffer.Flags |= VAR_2;
    VAR_5->Buffer.Pointer = VAR_6;
    VAR_5->Buffer.Length = (UINT32) VAR_4;



    FUNC_5 (VAR_5);
}
