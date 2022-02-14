
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {scalar_t__ StartAml; scalar_t__ AmlOffset; int * WalkState; } ;
struct TYPE_8__ {scalar_t__ Aml; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OP_WALK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void
FUNC_2 (
    ACPI_WALK_STATE *VAR_2,
    ACPI_PARSE_OBJECT *VAR_3,
    UINT32 VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5 = VAR_3;
    ACPI_OP_WALK_INFO VAR_6;


    if (!VAR_5)
    {
        return;
    }

    FUNC_1 (&VAR_6, 0, sizeof (ACPI_OP_WALK_INFO));
    VAR_6.WalkState = VAR_2;
    VAR_6.StartAml = VAR_5->Common.Aml - sizeof (ACPI_TABLE_HEADER);
    VAR_6.AmlOffset = VAR_5->Common.Aml - VAR_6.StartAml;

    FUNC_0 (VAR_5, VAR_1, VAR_0, &VAR_6);
    return;
}
