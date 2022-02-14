
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Revision; int RsdtPhysicalAddress; int XsdtPhysicalAddress; int Length; int OemId; } ;
typedef TYPE_1__ ACPI_TABLE_RSDP ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;

void
FUNC_5(void)
{
    ACPI_TABLE_RSDP *VAR_0;
    char VAR_1[24];
    int VAR_2;


    if ((VAR_0 = FUNC_1()) == ((void*)0))
 return;
    FUNC_3(VAR_1, "0x%08x", FUNC_0(VAR_0));
    FUNC_2("hint.acpi.0.rsdp", VAR_1, 1);
    FUNC_2("acpi.rsdp", VAR_1, 1);
    VAR_2 = VAR_0->Revision;
    if (VAR_2 == 0)
 VAR_2 = 1;
    FUNC_3(VAR_1, "%d", VAR_2);
    FUNC_2("hint.acpi.0.revision", VAR_1, 1);
    FUNC_2("acpi.revision", VAR_1, 1);
    FUNC_4(VAR_1, VAR_0->OemId, sizeof(VAR_0->OemId));
    VAR_1[sizeof(VAR_0->OemId)] = '\0';
    FUNC_2("hint.acpi.0.oem", VAR_1, 1);
    FUNC_2("acpi.oem", VAR_1, 1);
    FUNC_3(VAR_1, "0x%08x", VAR_0->RsdtPhysicalAddress);
    FUNC_2("hint.acpi.0.rsdt", VAR_1, 1);
    FUNC_2("acpi.rsdt", VAR_1, 1);
    if (VAR_2 >= 2) {

 FUNC_3(VAR_1, "0x%016llx", VAR_0->XsdtPhysicalAddress);
 FUNC_2("hint.acpi.0.xsdt", VAR_1, 1);
 FUNC_2("acpi.xsdt", VAR_1, 1);
 FUNC_3(VAR_1, "%d", VAR_0->Length);
 FUNC_2("hint.acpi.0.xsdt_length", VAR_1, 1);
 FUNC_2("acpi.xsdt_length", VAR_1, 1);
    }
}
