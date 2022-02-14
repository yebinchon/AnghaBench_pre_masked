
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * WalkState; scalar_t__ Level; scalar_t__ Count; scalar_t__ Flags; } ;
typedef int ACPI_PARSE_OBJECT ;
typedef TYPE_1__ ACPI_OP_WALK_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_OP_WALK_INFO VAR_2;


    if (!VAR_1)
    {
        return;
    }

    FUNC_1 ("/*\nAML Parse Tree\n\n");
    VAR_2.Flags = 0;
    VAR_2.Count = 0;
    VAR_2.Level = 0;
    VAR_2.WalkState = ((void*)0);

    FUNC_0 (VAR_1, VAR_0, ((void*)0), &VAR_2);
    FUNC_1 ("*/\n\n");
}
