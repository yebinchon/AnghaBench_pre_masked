
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
struct TYPE_18__ {int Flags; scalar_t__ Value; } ;
struct TYPE_15__ {scalar_t__ Value; } ;
struct TYPE_14__ {int Pointer; } ;
struct TYPE_13__ {scalar_t__ Type; } ;
struct TYPE_17__ {TYPE_4__ Integer; TYPE_3__ String; TYPE_2__ Common; } ;
struct TYPE_16__ {TYPE_6__* ReturnDesc; TYPE_1__* Arguments; } ;
struct TYPE_12__ {TYPE_6__* Object; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef TYPE_7__ ACPI_INTERFACE_INFO ;
typedef scalar_t__ (* ACPI_INTERFACE_HANDLER ) (int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 (int ) ;
 TYPE_7__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_11 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_12)
{
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14;
    ACPI_INTERFACE_INFO *VAR_15;
    ACPI_INTERFACE_HANDLER VAR_16;
    ACPI_STATUS VAR_17;
    UINT64 VAR_18;


    FUNC_2 (VAR_11);




    VAR_13 = VAR_12->Arguments[0].Object;
    if (!VAR_13 ||
        (VAR_13->Common.Type != VAR_3))
    {
        FUNC_9 (VAR_8);
    }



    VAR_14 = FUNC_6 (VAR_2);
    if (!VAR_14)
    {
        FUNC_9 (VAR_6);
    }



    VAR_18 = 0;
    VAR_17 = FUNC_4 (VAR_10, VAR_5);
    if (FUNC_1 (VAR_17))
    {
        FUNC_8 (VAR_14);
        FUNC_9 (VAR_17);
    }



    VAR_15 = FUNC_7 (VAR_13->String.Pointer);
    if (VAR_15 &&
        !(VAR_15->Flags & VAR_1))
    {





        if (VAR_15->Value > VAR_9)
        {
            VAR_9 = VAR_15->Value;
        }

        VAR_18 = VAR_4;
    }

    FUNC_5 (VAR_10);






    VAR_16 = FUNC_3;
    if (VAR_16)
    {
        if (VAR_16 (
            VAR_13->String.Pointer, (UINT32) VAR_18))
        {
            VAR_18 = VAR_4;
        }
    }

    FUNC_0 ((VAR_0,
        "ACPI: BIOS _OSI(\"%s\") is %ssupported\n",
        VAR_13->String.Pointer, VAR_18 == 0 ? "not " : ""));



    VAR_14->Integer.Value = VAR_18;
    VAR_12->ReturnDesc = VAR_14;
    FUNC_9 (VAR_7);
}
