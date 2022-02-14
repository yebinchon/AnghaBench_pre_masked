
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
struct TYPE_3__ {char* Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_4(vm_paddr_t VAR_2, const char *VAR_3)
{
 ACPI_TABLE_HEADER *VAR_4;

 VAR_4 = FUNC_0(VAR_2, sizeof(ACPI_TABLE_HEADER));
 if (VAR_4 == ((void*)0)) {
  if (VAR_1)
   FUNC_2("ACPI: Failed to map table at 0x%jx\n",
       (uintmax_t)VAR_2);
  return (0);
 }
 if (VAR_1)
  FUNC_2("Table '%.4s' at 0x%jx\n", VAR_4->Signature,
      (uintmax_t)VAR_2);

 if (FUNC_3(VAR_4->Signature, VAR_3, VAR_0) != 0) {
  FUNC_1((vm_offset_t)VAR_4, sizeof(ACPI_TABLE_HEADER));
  return (0);
 }
 FUNC_1((vm_offset_t)VAR_4, sizeof(ACPI_TABLE_HEADER));
 return (1);
}
