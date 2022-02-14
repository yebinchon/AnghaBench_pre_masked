
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_11__ {int ObjectType; } ;
struct TYPE_10__ {int * WalkState; } ;
struct TYPE_8__ {scalar_t__ Node; int AmlOpcode; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OP_WALK_INFO ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;
typedef int ACPI_OBJECT_TYPE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    void *VAR_3)
{
    ACPI_OP_WALK_INFO *VAR_4 = VAR_3;
    const ACPI_OPCODE_INFO *VAR_5;
    ACPI_WALK_STATE *VAR_6;
    ACPI_OBJECT_TYPE VAR_7;
    ACPI_STATUS VAR_8;


    VAR_6 = VAR_4->WalkState;
    VAR_5 = FUNC_4 (VAR_1->Common.AmlOpcode);



    VAR_7 = VAR_5->ObjectType;
    if (FUNC_3 (VAR_7))
    {
        if (VAR_1->Common.Node)
        {

            VAR_8 = FUNC_2 (VAR_1->Common.Node, VAR_7,
                VAR_6);
            if (FUNC_0 (VAR_8))
            {
                return (VAR_8);
            }
        }
    }





    FUNC_1 (VAR_1, VAR_6);
    return (VAR_0);
}
