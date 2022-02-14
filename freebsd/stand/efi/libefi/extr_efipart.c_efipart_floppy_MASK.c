
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ HID; } ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_1__ ACPI_HID_DEVICE_PATH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ACPI_HID_DEVICE_PATH *
FUNC_3(EFI_DEVICE_PATH *VAR_5)
{
 ACPI_HID_DEVICE_PATH *VAR_6;

 if (FUNC_1(VAR_5) == VAR_0 &&
     FUNC_0(VAR_5) == VAR_1) {
  VAR_6 = (ACPI_HID_DEVICE_PATH *) VAR_5;
  if (VAR_6->HID == FUNC_2(VAR_2) ||
      VAR_6->HID == FUNC_2(VAR_3) ||
      VAR_6->HID == FUNC_2(VAR_4)) {
   return (VAR_6);
  }
 }
 return (((void*)0));
}
