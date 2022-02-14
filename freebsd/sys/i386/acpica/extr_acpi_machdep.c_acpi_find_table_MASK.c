
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_11__ {int Revision; scalar_t__ XsdtPhysicalAddress; scalar_t__ RsdtPhysicalAddress; } ;
struct TYPE_9__ {int Length; } ;
struct TYPE_10__ {scalar_t__* TableOffsetEntry; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_TABLE_XSDT ;
typedef TYPE_2__ ACPI_TABLE_RSDT ;
typedef TYPE_4__ ACPI_TABLE_RSDP ;
typedef TYPE_2__ ACPI_TABLE_HEADER ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_3 (scalar_t__,int,char const*) ;
 TYPE_4__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__,char const*) ;
 scalar_t__ FUNC_8 (char*,int ) ;

vm_paddr_t
FUNC_9(const char *VAR_4)
{
 ACPI_PHYSICAL_ADDRESS VAR_5;
 ACPI_TABLE_RSDP *VAR_6;
 ACPI_TABLE_RSDT *VAR_7;
 ACPI_TABLE_XSDT *VAR_8;
 ACPI_TABLE_HEADER *VAR_9;
 vm_paddr_t VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_8("acpi", 0))
  return (0);






 if ((VAR_5 = FUNC_0()) == 0)
  return (0);
 VAR_6 = FUNC_4(VAR_5, sizeof(ACPI_TABLE_RSDP));
 if (VAR_6 == ((void*)0)) {
  if (VAR_3)
   FUNC_6("ACPI: Failed to map RSDP\n");
  return (0);
 }







 VAR_10 = 0;
 if (VAR_6->Revision >= 2 && VAR_6->XsdtPhysicalAddress != 0) {





  if (FUNC_1((UINT8 *)VAR_6, VAR_0)) {
   if (VAR_3)
    FUNC_6("ACPI: RSDP failed extended checksum\n");
   return (0);
  }
  VAR_8 = FUNC_3(VAR_6->XsdtPhysicalAddress, 2, VAR_2);
  if (VAR_8 == ((void*)0)) {
   if (VAR_3)
    FUNC_6("ACPI: Failed to map XSDT\n");
   return (0);
  }
  VAR_12 = (VAR_8->Header.Length - sizeof(ACPI_TABLE_HEADER)) /
      sizeof(UINT64);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if (FUNC_7(VAR_8->TableOffsetEntry[VAR_11], VAR_4)) {
    VAR_10 = VAR_8->TableOffsetEntry[VAR_11];
    break;
   }
  FUNC_2(VAR_8);
 } else {
  VAR_7 = FUNC_3(VAR_6->RsdtPhysicalAddress, 2, VAR_1);
  if (VAR_7 == ((void*)0)) {
   if (VAR_3)
    FUNC_6("ACPI: Failed to map RSDT\n");
   return (0);
  }
  VAR_12 = (VAR_7->Header.Length - sizeof(ACPI_TABLE_HEADER)) /
      sizeof(UINT32);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   if (FUNC_7(VAR_7->TableOffsetEntry[VAR_11], VAR_4)) {
    VAR_10 = VAR_7->TableOffsetEntry[VAR_11];
    break;
   }
  FUNC_2(VAR_7);
 }
 FUNC_5((vm_offset_t)VAR_6, sizeof(ACPI_TABLE_RSDP));
 if (VAR_10 == 0) {
  if (VAR_3)
   FUNC_6("ACPI: No %s table found\n", VAR_4);
  return (0);
 }
 if (VAR_3)
  FUNC_6("%s: Found table at 0x%jx\n", VAR_4, (uintmax_t)VAR_10);





 VAR_9 = FUNC_3(VAR_10, 0, VAR_4);
 if (VAR_9 == ((void*)0))
  return (0);
 FUNC_2(VAR_9);

 return (VAR_10);
}
