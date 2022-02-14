
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ AmlOpcode; int * Node; TYPE_2__* Parent; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int *) ;

char *
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_NAMESPACE_NODE **VAR_4,
    char **VAR_5)
{
    ACPI_NAMESPACE_NODE *VAR_6;




    while (VAR_3 &&
        (VAR_3->Asl.AmlOpcode != VAR_0) &&
        (VAR_3->Asl.AmlOpcode != VAR_1))
    {
        VAR_3 = VAR_3->Asl.Parent;
    }

    if (!VAR_3)
    {
        FUNC_1 (VAR_2, " No_Parent_Device ");
        goto ErrorExit;
    }



    VAR_6 = VAR_3->Asl.Node;
    if (!VAR_6)
    {
        FUNC_1 (VAR_2, " No_Device_Node ");
        goto ErrorExit;
    }

    *VAR_5 = FUNC_0 (VAR_6);
    return (FUNC_2 (VAR_6));


ErrorExit:
    return ("-No HID-");
}
