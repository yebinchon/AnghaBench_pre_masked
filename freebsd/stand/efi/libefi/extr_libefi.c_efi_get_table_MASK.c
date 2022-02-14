
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int NumberOfTableEntries; TYPE_1__* ConfigurationTable; } ;
struct TYPE_3__ {void* VendorTable; int VendorGuid; } ;
typedef int EFI_GUID ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void *
FUNC_1(EFI_GUID *VAR_1)
{
 EFI_GUID *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->NumberOfTableEntries; VAR_3++) {
  VAR_2 = &VAR_0->ConfigurationTable[VAR_3].VendorGuid;
  if (!FUNC_0(VAR_2, VAR_1, sizeof(EFI_GUID)))
   return (VAR_0->ConfigurationTable[VAR_3].VendorTable);
 }
 return (((void*)0));
}
