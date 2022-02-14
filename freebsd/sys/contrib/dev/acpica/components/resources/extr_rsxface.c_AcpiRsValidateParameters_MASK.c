
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Type; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;
typedef int ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_HANDLE VAR_5,
    ACPI_BUFFER *VAR_6,
    ACPI_NAMESPACE_NODE **VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9;


    FUNC_1 (VAR_4);





    if (!VAR_5)
    {
        FUNC_4 (VAR_1);
    }

    VAR_9 = FUNC_2 (VAR_5);
    if (!VAR_9)
    {
        FUNC_4 (VAR_1);
    }

    if (VAR_9->Type != VAR_0)
    {
        FUNC_4 (VAR_3);
    }
    VAR_8 = FUNC_3 (VAR_6);
    if (FUNC_0 (VAR_8))
    {
        FUNC_4 (VAR_8);
    }

    *VAR_7 = VAR_9;
    FUNC_4 (VAR_2);
}
