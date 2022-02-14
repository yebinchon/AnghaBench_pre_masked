
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int Name; } ;
struct TYPE_8__ {int Arg; } ;
struct TYPE_7__ {int Next; int Parent; TYPE_2__ Value; int AmlOpcode; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_0)
{
    const ACPI_OPCODE_INFO *VAR_1;


    VAR_1 = FUNC_2 (VAR_0->Common.AmlOpcode);

    FUNC_1 ("Parser Op Descriptor:\n");
    FUNC_1 ("%20.20s : %4.4X\n", "Opcode", VAR_0->Common.AmlOpcode);

    FUNC_0 (FUNC_1 ("%20.20s : %s\n", "Opcode Name",
        VAR_1->Name));

    FUNC_1 ("%20.20s : %p\n", "Value/ArgList", VAR_0->Common.Value.Arg);
    FUNC_1 ("%20.20s : %p\n", "Parent", VAR_0->Common.Parent);
    FUNC_1 ("%20.20s : %p\n", "NextOp", VAR_0->Common.Next);
}
