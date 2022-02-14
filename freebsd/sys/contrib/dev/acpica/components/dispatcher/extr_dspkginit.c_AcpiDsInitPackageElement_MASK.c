
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_10__ {TYPE_4__** ThisTargetObj; } ;
struct TYPE_13__ {TYPE_2__ Pkg; } ;
struct TYPE_9__ {int Flags; } ;
struct TYPE_11__ {scalar_t__ Type; } ;
struct TYPE_12__ {TYPE_1__ Package; TYPE_3__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_GENERIC_STATE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__**) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
    UINT8 VAR_5,
    ACPI_OPERAND_OBJECT *VAR_6,
    ACPI_GENERIC_STATE *VAR_7,
    void *VAR_8)
{
    ACPI_OPERAND_OBJECT **VAR_9;


    FUNC_0 (VAR_4);


    if (!VAR_6)
    {
        FUNC_2 (VAR_2);
    }







    if (VAR_8)
    {


        VAR_9 = (ACPI_OPERAND_OBJECT **) VAR_8;
    }
    else
    {


        VAR_9 = VAR_7->Pkg.ThisTargetObj;
    }



    if (VAR_6->Common.Type == VAR_0)
    {


        FUNC_1 (VAR_9);
    }
    else if (VAR_6->Common.Type == VAR_1)
    {
        VAR_6->Package.Flags |= VAR_3;
    }

    FUNC_2 (VAR_2);
}
