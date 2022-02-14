
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINTN ;
struct TYPE_4__ {size_t NumberOfTableEntries; TYPE_1__* ConfigurationTable; } ;
struct TYPE_3__ {unsigned long VendorTable; int VendorGuid; } ;
typedef int EFI_GUID ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char *VAR_3[])
{
 UINTN VAR_4;
 char *VAR_5;

 FUNC_2("NumberOfTableEntries=%lu\n",
  (unsigned long)VAR_1->NumberOfTableEntries);

 for (VAR_4 = 0; VAR_4 < VAR_1->NumberOfTableEntries; VAR_4++) {
  EFI_GUID *VAR_6;

  FUNC_2("  ");
  VAR_6 = &VAR_1->ConfigurationTable[VAR_4].VendorGuid;

  if (FUNC_0(VAR_6, &VAR_5) == 1) {
   FUNC_2(VAR_5);
   FUNC_1(VAR_5);
  } else {
   FUNC_2("Error while translating UUID to name");
  }
  FUNC_2(" at %p\n", VAR_1->ConfigurationTable[VAR_4].VendorTable);
 }

 return (VAR_0);
}
