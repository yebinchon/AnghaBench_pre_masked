
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int BaudRate; } ;
typedef TYPE_1__ UART_DEVICE_PATH ;
struct TYPE_4__ {int UID; int HID; } ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_2__ ACPI_HID_DEVICE_PATH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,char*,size_t*) ;
 int FUNC_5 (char*,int ) ;

int
FUNC_6(void)
{
 int VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 size_t VAR_15;
 char VAR_16[4096], *VAR_17;
 EFI_DEVICE_PATH *VAR_18;
 ACPI_HID_DEVICE_PATH *VAR_19;
 UART_DEVICE_PATH *VAR_20;
 bool VAR_21;

 VAR_10 = 0;
 VAR_15 = sizeof(VAR_16);
 VAR_11 = FUNC_4("ConOut", VAR_16, &VAR_15);
 if (VAR_11 != VAR_3) {

  VAR_10 = VAR_9;
  goto out;
 }
 VAR_17 = VAR_16 + VAR_15;
 VAR_18 = (EFI_DEVICE_PATH *)VAR_16;
 while ((char *)VAR_18 < VAR_17) {
  VAR_21 = 0;
  if (FUNC_1(VAR_18) == VAR_1 &&
      FUNC_0(VAR_18) == VAR_2) {

   VAR_19 = (void *)VAR_18;
   if (FUNC_2(VAR_19->HID) == 0x501) {
    FUNC_5("efi_8250_uid", VAR_19->UID);
    VAR_13 = ++VAR_14;
   }
  } else if (FUNC_1(VAR_18) == VAR_6 &&
      FUNC_0(VAR_18) == VAR_7) {

   VAR_20 = (void *)VAR_18;
   FUNC_5("efi_com_speed", VAR_20->BaudRate);
  } else if (FUNC_1(VAR_18) == VAR_1 &&
      FUNC_0(VAR_18) == VAR_0) {

   VAR_12 = ++VAR_14;
  } else if (FUNC_1(VAR_18) == VAR_4 &&
      FUNC_0(VAR_18) == VAR_5) {
   VAR_21 = 1;
  }
  VAR_18 = FUNC_3(VAR_18);
 }
 if (VAR_21 && VAR_12 == 0)
  VAR_12 = ++VAR_14;
 VAR_10 = 0;
 if (VAR_12 && VAR_13) {
  VAR_10 |= VAR_8;
  if (VAR_13 < VAR_12)
   VAR_10 |= VAR_9;
 } else if (VAR_13)
  VAR_10 |= VAR_9;
out:
 return (VAR_10);
}
