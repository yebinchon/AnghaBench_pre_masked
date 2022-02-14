
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Type; } ;
struct TYPE_6__ {int * WalkState; scalar_t__ Level; scalar_t__ Flags; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef int ACPI_OWNER_ID ;
typedef TYPE_1__ ACPI_OP_WALK_INFO ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;

void
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_2,
    ACPI_NAMESPACE_NODE *VAR_3,
    ACPI_OWNER_ID VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_OP_WALK_INFO VAR_6;
    ACPI_WALK_STATE *VAR_7;


    if (!VAR_2)
    {
        return;
    }



    VAR_7 = FUNC_3 (VAR_4, VAR_2, ((void*)0), ((void*)0));
    if (!VAR_7)
    {
        return;
    }

    VAR_5 = FUNC_4 (VAR_3, VAR_3->Type,
        VAR_7);
    if (FUNC_0 (VAR_5))
    {
        return;
    }

    VAR_6.Flags = 0;
    VAR_6.Level = 0;
    VAR_6.WalkState = VAR_7;

    FUNC_2 (VAR_2, VAR_1,
        VAR_0, &VAR_6);
    FUNC_1 (VAR_7);
}
