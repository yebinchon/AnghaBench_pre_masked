
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_2__ {int UseCount; } ;
typedef int ACPI_UPDATE_STATE ;
typedef int ACPI_THREAD_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_SCOPE_STATE ;
typedef int ACPI_RESULT_VALUES ;
typedef int ACPI_PSCOPE_STATE ;
typedef int ACPI_PKG_STATE ;
typedef int ACPI_PARSE_OBJ_NAMED ;
typedef int ACPI_PARSE_OBJ_COMMON ;
typedef int ACPI_PARSE_OBJ_ASL ;
typedef int ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_THERMAL_ZONE ;
typedef int ACPI_OBJECT_STRING ;
typedef int ACPI_OBJECT_REGION_FIELD ;
typedef int ACPI_OBJECT_REGION ;
typedef int ACPI_OBJECT_REFERENCE ;
typedef int ACPI_OBJECT_PROCESSOR ;
typedef int ACPI_OBJECT_POWER_RESOURCE ;
typedef int ACPI_OBJECT_PACKAGE ;
typedef int ACPI_OBJECT_NOTIFY_HANDLER ;
typedef int ACPI_OBJECT_MUTEX ;
typedef int ACPI_OBJECT_METHOD ;
typedef int ACPI_OBJECT_INTEGER ;
typedef int ACPI_OBJECT_INDEX_FIELD ;
typedef int ACPI_OBJECT_EXTRA ;
typedef int ACPI_OBJECT_EVENT ;
typedef int ACPI_OBJECT_DEVICE ;
typedef int ACPI_OBJECT_DATA ;
typedef int ACPI_OBJECT_COMMON ;
typedef int ACPI_OBJECT_BUFFER_FIELD ;
typedef int ACPI_OBJECT_BUFFER ;
typedef int ACPI_OBJECT_BANK_FIELD ;
typedef int ACPI_OBJECT_ADDR_HANDLER ;
typedef int ACPI_OBJECT ;
typedef int ACPI_NOTIFY_INFO ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_GENERIC_STATE ;
typedef int ACPI_CONTROL_STATE ;
typedef int ACPI_COMMON_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
ACPI_STATUS
FUNC_9 (
    char *VAR_23)
{
    UINT32 VAR_24;
    UINT32 VAR_25;


    FUNC_8 (VAR_23);
    VAR_25 = FUNC_3 (VAR_23, VAR_4);
    if (VAR_25 == VAR_1)
    {
        FUNC_4 ("Invalid or unsupported argument\n");
        return (VAR_3);
    }


    switch (VAR_25)
    {
    case 134:




        break;

    case 128:

        FUNC_4 ("ACPI Table Information (not implemented):\n\n");
        break;

    case 131:

        FUNC_1 ();

        FUNC_4 ("\nObjects defined in the current namespace:\n\n");

        FUNC_4 ("%16.16s %10.10s %10.10s\n",
            "ACPI_TYPE", "NODES", "OBJECTS");

        for (VAR_24 = 0; VAR_24 < VAR_2; VAR_24++)
        {
            FUNC_4 ("%16.16s %10u %10u\n", FUNC_7 (VAR_24),
                VAR_10 [VAR_24], VAR_16 [VAR_24]);
        }

        FUNC_4 ("%16.16s %10u %10u\n", "Misc/Unknown",
            VAR_11, VAR_17);

        FUNC_4 ("%16.16s %10u %10u\n", "TOTALS:",
            VAR_14, VAR_15);
        break;

    case 133:
        break;

    case 132:

        FUNC_4 ("\nMiscellaneous Statistics:\n\n");
        FUNC_4 ("%-28s:       %7u\n", "Calls to AcpiPsFind",
            VAR_19);
        FUNC_4 ("%-28s:       %7u\n", "Calls to AcpiNsLookup",
            VAR_12);

        FUNC_4 ("\nMutex usage:\n\n");
        for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++)
        {
            FUNC_4 ("%-28s:       %7u\n",
                FUNC_6 (VAR_24), VAR_9[VAR_24].UseCount);
        }
        break;

    case 130:

        FUNC_4 ("\nInternal object sizes:\n\n");

        FUNC_4 ("Common           %3d\n", (UINT32) sizeof (ACPI_OBJECT_COMMON));
        FUNC_4 ("Number           %3d\n", (UINT32) sizeof (ACPI_OBJECT_INTEGER));
        FUNC_4 ("String           %3d\n", (UINT32) sizeof (ACPI_OBJECT_STRING));
        FUNC_4 ("Buffer           %3d\n", (UINT32) sizeof (ACPI_OBJECT_BUFFER));
        FUNC_4 ("Package          %3d\n", (UINT32) sizeof (ACPI_OBJECT_PACKAGE));
        FUNC_4 ("BufferField      %3d\n", (UINT32) sizeof (ACPI_OBJECT_BUFFER_FIELD));
        FUNC_4 ("Device           %3d\n", (UINT32) sizeof (ACPI_OBJECT_DEVICE));
        FUNC_4 ("Event            %3d\n", (UINT32) sizeof (ACPI_OBJECT_EVENT));
        FUNC_4 ("Method           %3d\n", (UINT32) sizeof (ACPI_OBJECT_METHOD));
        FUNC_4 ("Mutex            %3d\n", (UINT32) sizeof (ACPI_OBJECT_MUTEX));
        FUNC_4 ("Region           %3d\n", (UINT32) sizeof (ACPI_OBJECT_REGION));
        FUNC_4 ("PowerResource    %3d\n", (UINT32) sizeof (ACPI_OBJECT_POWER_RESOURCE));
        FUNC_4 ("Processor        %3d\n", (UINT32) sizeof (ACPI_OBJECT_PROCESSOR));
        FUNC_4 ("ThermalZone      %3d\n", (UINT32) sizeof (ACPI_OBJECT_THERMAL_ZONE));
        FUNC_4 ("RegionField      %3d\n", (UINT32) sizeof (ACPI_OBJECT_REGION_FIELD));
        FUNC_4 ("BankField        %3d\n", (UINT32) sizeof (ACPI_OBJECT_BANK_FIELD));
        FUNC_4 ("IndexField       %3d\n", (UINT32) sizeof (ACPI_OBJECT_INDEX_FIELD));
        FUNC_4 ("Reference        %3d\n", (UINT32) sizeof (ACPI_OBJECT_REFERENCE));
        FUNC_4 ("Notify           %3d\n", (UINT32) sizeof (ACPI_OBJECT_NOTIFY_HANDLER));
        FUNC_4 ("AddressSpace     %3d\n", (UINT32) sizeof (ACPI_OBJECT_ADDR_HANDLER));
        FUNC_4 ("Extra            %3d\n", (UINT32) sizeof (ACPI_OBJECT_EXTRA));
        FUNC_4 ("Data             %3d\n", (UINT32) sizeof (ACPI_OBJECT_DATA));

        FUNC_4 ("\n");

        FUNC_4 ("ParseObject      %3d\n", (UINT32) sizeof (ACPI_PARSE_OBJ_COMMON));
        FUNC_4 ("ParseObjectNamed %3d\n", (UINT32) sizeof (ACPI_PARSE_OBJ_NAMED));
        FUNC_4 ("ParseObjectAsl   %3d\n", (UINT32) sizeof (ACPI_PARSE_OBJ_ASL));
        FUNC_4 ("OperandObject    %3d\n", (UINT32) sizeof (ACPI_OPERAND_OBJECT));
        FUNC_4 ("NamespaceNode    %3d\n", (UINT32) sizeof (ACPI_NAMESPACE_NODE));
        FUNC_4 ("AcpiObject       %3d\n", (UINT32) sizeof (ACPI_OBJECT));

        FUNC_4 ("\n");

        FUNC_4 ("Generic State    %3d\n", (UINT32) sizeof (ACPI_GENERIC_STATE));
        FUNC_4 ("Common State     %3d\n", (UINT32) sizeof (ACPI_COMMON_STATE));
        FUNC_4 ("Control State    %3d\n", (UINT32) sizeof (ACPI_CONTROL_STATE));
        FUNC_4 ("Update State     %3d\n", (UINT32) sizeof (ACPI_UPDATE_STATE));
        FUNC_4 ("Scope State      %3d\n", (UINT32) sizeof (ACPI_SCOPE_STATE));
        FUNC_4 ("Parse Scope      %3d\n", (UINT32) sizeof (ACPI_PSCOPE_STATE));
        FUNC_4 ("Package State    %3d\n", (UINT32) sizeof (ACPI_PKG_STATE));
        FUNC_4 ("Thread State     %3d\n", (UINT32) sizeof (ACPI_THREAD_STATE));
        FUNC_4 ("Result Values    %3d\n", (UINT32) sizeof (ACPI_RESULT_VALUES));
        FUNC_4 ("Notify Info      %3d\n", (UINT32) sizeof (ACPI_NOTIFY_INFO));
        break;

    case 129:
        break;

    default:

        break;
    }

    FUNC_4 ("\n");
    return (VAR_3);
}
