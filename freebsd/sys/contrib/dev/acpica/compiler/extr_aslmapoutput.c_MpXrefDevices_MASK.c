
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int References; } ;
typedef TYPE_1__ ACPI_GPIO_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_GPIO_INFO *VAR_4)
{



    FUNC_1 (VAR_2, VAR_1,
        VAR_3, ((void*)0), VAR_4);

    if (!VAR_4->References)
    {
        FUNC_0 (VAR_0, "  // **** No references in table");
    }
}
