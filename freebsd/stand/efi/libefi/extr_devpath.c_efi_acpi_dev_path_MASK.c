
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int HID; int UID; } ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_1__ ACPI_HID_DEVICE_PATH ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char**,char*,int,...) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(EFI_DEVICE_PATH *VAR_2, char *VAR_3)
{
 uint8_t VAR_4 = FUNC_0(VAR_2);
 ACPI_HID_DEVICE_PATH *VAR_5 = (ACPI_HID_DEVICE_PATH *)VAR_2;
 char *VAR_6, *VAR_7;

 VAR_7 = FUNC_3(VAR_3);
 switch (VAR_4) {
 case 129:
  if ((VAR_5->HID & VAR_1) == VAR_0) {
   switch (FUNC_1 (VAR_5->HID)) {
   case 0x0a03:
    if (FUNC_2(&VAR_6, "PciRoot(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   case 0x0a08:
    if (FUNC_2(&VAR_6, "PcieRoot(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   case 0x0604:
    if (FUNC_2(&VAR_6, "Floppy(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   case 0x0301:
    if (FUNC_2(&VAR_6, "Keyboard(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   case 0x0501:
    if (FUNC_2(&VAR_6, "Serial(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   case 0x0401:
    if (FUNC_2(&VAR_6, "ParallelPort(%x)%s",
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   default:
    if (FUNC_2(&VAR_6, "Acpi(PNP%04x,%x)%s",
        FUNC_1(VAR_5->HID),
        VAR_5->UID, VAR_7) < 0)
     VAR_6 = ((void*)0);
    break;
   }
  } else {
   if (FUNC_2(&VAR_6, "Acpi(%08x,%x)%s",
       VAR_5->HID, VAR_5->UID, VAR_7) < 0)
    VAR_6 = ((void*)0);
  }
  break;
 case 128:
 default:
  if (FUNC_2(&VAR_6, "UnknownACPI(%x)%s", VAR_4, VAR_7) < 0)
   VAR_6 = ((void*)0);
  break;
 }
 FUNC_4(VAR_7);
 return (VAR_6);
}
