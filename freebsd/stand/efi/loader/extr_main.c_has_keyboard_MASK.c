
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DeviceClass; int DeviceSubClass; int DeviceProtocol; } ;
typedef TYPE_1__ USB_CLASS_DEVICE_PATH ;
typedef int UINTN ;
struct TYPE_6__ {scalar_t__ (* LocateHandle ) (int ,int *,int ,int*,int *) ;} ;
struct TYPE_5__ {int HID; } ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_2__ ACPI_HID_DEVICE_PATH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,void**) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int*,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int ,int*,int *) ;

__attribute__((used)) static bool
FUNC_11(void)
{
 EFI_STATUS VAR_11;
 EFI_DEVICE_PATH *VAR_12;
 EFI_HANDLE *VAR_13, *VAR_14, *VAR_15;
 UINTN VAR_16;
 bool VAR_17 = 0;





 VAR_16 = 0;
 VAR_13 = ((void*)0);
 VAR_11 = VAR_3->LocateHandle(VAR_4, &VAR_10, 0, &VAR_16, 0);
 if (VAR_11 == VAR_5) {
  VAR_13 = (EFI_HANDLE *)FUNC_8(VAR_16);
  VAR_11 = VAR_3->LocateHandle(VAR_4, &VAR_10, 0, &VAR_16,
      VAR_13);
  if (FUNC_2(VAR_11))
   FUNC_7(VAR_13);
 }
 if (FUNC_2(VAR_11))
  return VAR_17;







 VAR_14 = &VAR_13[VAR_16 / sizeof(*VAR_13)];
 for (VAR_15 = VAR_13; VAR_15 < VAR_14; VAR_15++) {
  VAR_11 = FUNC_6(*VAR_15, &VAR_9, (void **)&VAR_12);
  if (FUNC_2(VAR_11))
   continue;

  while (!FUNC_4(VAR_12)) {







   if (FUNC_1(VAR_12) == VAR_0 &&
       (FUNC_0(VAR_12) == VAR_1 ||
    FUNC_0(VAR_12) == VAR_2)) {
    ACPI_HID_DEVICE_PATH *VAR_18;

    VAR_18 = (ACPI_HID_DEVICE_PATH *)(void *)VAR_12;
    if ((FUNC_3(VAR_18->HID) & 0xff00) == 0x300 &&
        (VAR_18->HID & 0xffff) == VAR_8) {
     VAR_17 = 1;
     goto out;
    }





   } else if (FUNC_1(VAR_12) == VAR_6 &&
       FUNC_0(VAR_12) == VAR_7) {
    USB_CLASS_DEVICE_PATH *VAR_19;

    VAR_19 = (USB_CLASS_DEVICE_PATH *)(void *)VAR_12;
    if (VAR_19->DeviceClass == 3 &&
        VAR_19->DeviceSubClass == 1 &&
        VAR_19->DeviceProtocol == 1) {
     VAR_17 = 1;
     goto out;
    }
   }
   VAR_12 = FUNC_5(VAR_12);
  }
 }
out:
 FUNC_7(VAR_13);
 return VAR_17;
}
