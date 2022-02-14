
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_4__ {int OsMutex; } ;
struct TYPE_5__ {TYPE_1__ Mutex; } ;
typedef int ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__**) ;

ACPI_STATUS
FUNC_3 (
    ACPI_HANDLE VAR_0,
    ACPI_STRING VAR_1,
    UINT16 VAR_2)
{
    ACPI_STATUS VAR_3;
    ACPI_OPERAND_OBJECT *VAR_4;




    VAR_3 = FUNC_2 (VAR_0, VAR_1, &VAR_4);
    if (FUNC_0 (VAR_3))
    {
        return (VAR_3);
    }



    VAR_3 = FUNC_1 (VAR_4->Mutex.OsMutex, VAR_2);
    return (VAR_3);
}
