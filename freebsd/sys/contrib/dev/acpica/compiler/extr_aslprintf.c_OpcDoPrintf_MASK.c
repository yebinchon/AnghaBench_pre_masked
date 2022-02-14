
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int LogicalLineNumber; TYPE_2__* Parent; int AmlOpcode; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_2)
{
    ACPI_PARSE_OBJECT *VAR_3;




    VAR_3 = FUNC_1 (VAR_1);
    VAR_3->Asl.AmlOpcode = VAR_0;
    VAR_3->Asl.Parent = VAR_2;
    VAR_3->Asl.LogicalLineNumber = VAR_2->Asl.LogicalLineNumber;

    FUNC_0 (VAR_2, VAR_3);
}
