
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {int WalkState; } ;
struct TYPE_5__ {int AmlOpcode; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OP_WALK_INFO ;
typedef int ACPI_OBJECT_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    void *VAR_3)
{
    ACPI_OP_WALK_INFO *VAR_4 = VAR_3;
    ACPI_OBJECT_TYPE VAR_5;




    VAR_5 = FUNC_2 (VAR_1->Asl.AmlOpcode);

    if (FUNC_1 (VAR_5))
    {
        (void) FUNC_0 (VAR_4->WalkState);
    }

    return (VAR_0);
}
