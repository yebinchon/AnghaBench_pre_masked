
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_7__ {int Value; int * Object; } ;
struct TYPE_6__ {int DescriptorType; } ;
struct TYPE_8__ {TYPE_2__ Update; TYPE_1__ Common; } ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;

ACPI_GENERIC_STATE *
FUNC_2 (
    ACPI_OPERAND_OBJECT *VAR_1,
    UINT16 VAR_2)
{
    ACPI_GENERIC_STATE *VAR_3;


    FUNC_0 ();




    VAR_3 = FUNC_1 ();
    if (!VAR_3)
    {
        return (((void*)0));
    }



    VAR_3->Common.DescriptorType = VAR_0;
    VAR_3->Update.Object = VAR_1;
    VAR_3->Update.Value = VAR_2;
    return (VAR_3);
}
