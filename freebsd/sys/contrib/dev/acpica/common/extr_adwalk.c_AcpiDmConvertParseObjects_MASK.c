
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
typedef TYPE_1__ ACPI_OP_WALK_INFO ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 scalar_t__ VAR_2 ;

void
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_NAMESPACE_NODE *VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_OP_WALK_INFO VAR_6;
    ACPI_WALK_STATE *VAR_7;


    if (!VAR_3)
    {
        return;
    }



    VAR_7 = FUNC_4 (0, VAR_3, ((void*)0), ((void*)0));
    if (!VAR_7)
    {
        return;
    }

    VAR_5 = FUNC_5 (VAR_4, VAR_4->Type,
        VAR_7);
    if (FUNC_0 (VAR_5))
    {
        FUNC_1 (VAR_7);
        return;
    }

    VAR_6.Flags = 0;
    VAR_6.Level = 0;
    VAR_6.WalkState = VAR_7;

    FUNC_3 (VAR_3, VAR_1,
        VAR_0, &VAR_6);
    FUNC_1 (VAR_7);

    if (VAR_2) {
        FUNC_2();
    }

    return;
}
