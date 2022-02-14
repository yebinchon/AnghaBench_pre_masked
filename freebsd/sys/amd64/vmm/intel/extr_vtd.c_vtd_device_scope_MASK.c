
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct vtdmap {int dummy; } ;
struct TYPE_9__ {int Length; int EntryType; scalar_t__ Bus; } ;
struct TYPE_6__ {int Length; } ;
struct TYPE_8__ {TYPE_1__ Header; int Flags; } ;
struct TYPE_7__ {scalar_t__ Device; scalar_t__ Function; } ;
typedef TYPE_2__ ACPI_DMAR_PCI_PATH ;
typedef TYPE_3__ ACPI_DMAR_HARDWARE_UNIT ;
typedef TYPE_4__ ACPI_DMAR_DEVICE_SCOPE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 struct vtdmap** VAR_2 ;

__attribute__((used)) static struct vtdmap *
FUNC_4(uint16_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 char *VAR_7, *VAR_8;
 struct vtdmap *VAR_9;
 ACPI_DMAR_HARDWARE_UNIT *VAR_10;
 ACPI_DMAR_DEVICE_SCOPE *VAR_11;
 ACPI_DMAR_PCI_PATH *VAR_12;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_10 = VAR_1[VAR_4];

  if (FUNC_3(VAR_10->Flags)) {






   VAR_9 = VAR_2[VAR_4];
   return(VAR_9);
  }

  VAR_7 = (char *)VAR_10 + VAR_10->Header.Length;
  VAR_5 = VAR_10->Header.Length - sizeof(ACPI_DMAR_HARDWARE_UNIT);
  while (VAR_5 > sizeof(ACPI_DMAR_DEVICE_SCOPE)) {
   VAR_11 = (ACPI_DMAR_DEVICE_SCOPE *)(VAR_7 - VAR_5);
   VAR_5 -= VAR_11->Length;

   switch (VAR_11->EntryType){

    case 0x01:
    case 0x02:
     break;
    default:
     continue;
   }

   if (FUNC_0(VAR_3) != VAR_11->Bus)
    continue;

   VAR_8 = (char *)VAR_11 + VAR_11->Length;
   VAR_6 = VAR_11->Length - sizeof(ACPI_DMAR_DEVICE_SCOPE);
   while (VAR_6 >= sizeof(ACPI_DMAR_PCI_PATH)) {
    VAR_12 = (ACPI_DMAR_PCI_PATH *)(VAR_8 - VAR_6);
    VAR_6 -= sizeof(ACPI_DMAR_PCI_PATH);

    if (FUNC_2(VAR_3) != VAR_12->Device)
     continue;
    if (FUNC_1(VAR_3) != VAR_12->Function)
     continue;

    VAR_9 = VAR_2[VAR_4];
    return (VAR_9);
   }
  }
 }


 return (((void*)0));
}
