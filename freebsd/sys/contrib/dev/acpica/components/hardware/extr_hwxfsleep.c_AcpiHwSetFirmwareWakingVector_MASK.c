
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int Length; int Version; scalar_t__ XFirmwareWakingVector; scalar_t__ FirmwareWakingVector; } ;
typedef TYPE_1__ ACPI_TABLE_FACS ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;


 int FUNC_0 (int (*) (TYPE_1__*,scalar_t__,scalar_t__)) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_TABLE_FACS *VAR_1,
    ACPI_PHYSICAL_ADDRESS VAR_2,
    ACPI_PHYSICAL_ADDRESS VAR_3)
{
    FUNC_0 (FUNC_2);
    VAR_1->FirmwareWakingVector = (UINT32) VAR_2;

    if (VAR_1->Length > 32)
    {
        if (VAR_1->Version >= 1)
        {


            VAR_1->XFirmwareWakingVector = VAR_3;
        }
        else
        {


            VAR_1->XFirmwareWakingVector = 0;
        }
    }

    FUNC_1 (VAR_0);
}
