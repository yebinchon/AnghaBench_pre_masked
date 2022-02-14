
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int UINT8 ;
typedef int UINT64 ;
struct TYPE_10__ {int Revision; scalar_t__ XsdtPhysicalAddress; } ;
struct TYPE_8__ {int Length; } ;
struct TYPE_9__ {scalar_t__* TableOffsetEntry; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_TABLE_XSDT ;
typedef TYPE_3__ ACPI_TABLE_RSDP ;
typedef TYPE_2__ ACPI_TABLE_HEADER ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_3 (scalar_t__,int,char const*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__,char const*) ;
 scalar_t__ FUNC_8 (char*,int ) ;

vm_paddr_t
FUNC_9(const char *VAR_3)
{
 ACPI_PHYSICAL_ADDRESS VAR_4;
 ACPI_TABLE_RSDP *VAR_5;
 ACPI_TABLE_XSDT *VAR_6;
 ACPI_TABLE_HEADER *VAR_7;
 vm_paddr_t VAR_8;
 int VAR_9, VAR_10;

 if (FUNC_8("acpi", 0))
  return (0);






 if ((VAR_4 = FUNC_0()) == 0)
  return (0);
 VAR_5 = FUNC_4(VAR_4, sizeof(ACPI_TABLE_RSDP));
 if (VAR_5 == ((void*)0)) {
  if (VAR_2)
   FUNC_6("ACPI: Failed to map RSDP\n");
  return (0);
 }

 VAR_8 = 0;
 if (VAR_5->Revision >= 2 && VAR_5->XsdtPhysicalAddress != 0) {





  if (FUNC_1((UINT8 *)VAR_5, VAR_0)) {
   if (VAR_2)
    FUNC_6("ACPI: RSDP failed extended checksum\n");
   return (0);
  }
  VAR_6 = FUNC_3(VAR_5->XsdtPhysicalAddress, 2, VAR_1);
  if (VAR_6 == ((void*)0)) {
   if (VAR_2)
    FUNC_6("ACPI: Failed to map XSDT\n");
   FUNC_5((vm_offset_t)VAR_5,
       sizeof(ACPI_TABLE_RSDP));
   return (0);
  }
  VAR_10 = (VAR_6->Header.Length - sizeof(ACPI_TABLE_HEADER)) /
      sizeof(UINT64);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   if (FUNC_7(VAR_6->TableOffsetEntry[VAR_9], VAR_3)) {
    VAR_8 = VAR_6->TableOffsetEntry[VAR_9];
    break;
   }
  FUNC_2(VAR_6);
 }
 FUNC_5((vm_offset_t)VAR_5, sizeof(ACPI_TABLE_RSDP));

 if (VAR_8 == 0) {
  if (VAR_2)
   FUNC_6("ACPI: No %s table found\n", VAR_3);
  return (0);
 }
 if (VAR_2)
  FUNC_6("%s: Found table at 0x%jx\n", VAR_3, (uintmax_t)VAR_8);





 VAR_7 = FUNC_3(VAR_8, 0, VAR_3);
 if (VAR_7 == ((void*)0))
  return (0);
 FUNC_2(VAR_7);

 return (VAR_8);
}
