
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Template; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_DMTABLE_DATA ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,TYPE_1__ const*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    char *VAR_3,
    UINT32 VAR_4)
{
    const ACPI_DMTABLE_DATA *VAR_5;
    ACPI_STATUS VAR_6;
    if (FUNC_5 (VAR_3) != VAR_0)
    {
        FUNC_3 (VAR_2,
            "%s: Invalid ACPI table signature "
            "(length must be 4 characters)\n", VAR_3);
        return (VAR_1);
    }





    if (!FUNC_4 (VAR_3, "MADT"))
    {
        VAR_3 = "APIC";
    }
    else if (!FUNC_4 (VAR_3, "FADT"))
    {
        VAR_3 = "FACP";
    }



    VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5)
    {
        if (!VAR_5->Template)
        {
            FUNC_3 (VAR_2, "%4.4s: No template available\n", VAR_3);
            return (VAR_1);
        }
    }
    else if (!FUNC_1 (VAR_3))
    {
        FUNC_3 (VAR_2,
            "%4.4s: Unrecognized ACPI table signature\n", VAR_3);
        return (VAR_1);
    }

    VAR_6 = FUNC_2 (VAR_3, VAR_4, VAR_5);
    return (VAR_6);
}
