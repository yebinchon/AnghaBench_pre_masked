
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;
struct TYPE_4__ {char* Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (char*,char const*,int ) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(vm_paddr_t VAR_2, const char *VAR_3)
{
 ACPI_TABLE_HEADER *VAR_4;

 VAR_4 = FUNC_2(VAR_2, 0, sizeof(ACPI_TABLE_HEADER));
 if (VAR_4 == ((void*)0)) {
  if (VAR_1)
   FUNC_0("ACPI: Failed to map table at 0x%jx\n",
       (uintmax_t)VAR_2);
  return (0);
 }
 if (VAR_1)
  FUNC_0("Table '%.4s' at 0x%jx\n", VAR_4->Signature,
      (uintmax_t)VAR_2);

 if (FUNC_1(VAR_4->Signature, VAR_3, VAR_0) != 0) {
  FUNC_3(VAR_4, sizeof(ACPI_TABLE_HEADER));
  return (0);
 }
 FUNC_3(VAR_4, sizeof(ACPI_TABLE_HEADER));
 return (1);
}
