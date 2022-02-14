
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int ad_flags; void* ad_private; int ad_handle; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;





 int VAR_0 ;
 struct acpi_device* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t VAR_4)
{
    struct acpi_device *VAR_5;

    if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0)) {
 FUNC_1(VAR_2, "device has no ivars\n");
 return (VAR_0);
    }

    switch(VAR_3) {
    case 129:
 VAR_5->ad_handle = (ACPI_HANDLE)VAR_4;
 break;
    case 128:
 VAR_5->ad_private = (void *)VAR_4;
 break;
    case 130:
 VAR_5->ad_flags = (int)VAR_4;
 break;
    default:
 FUNC_2("bad ivar write request (%d)", VAR_3);
 return (VAR_0);
    }

    return (0);
}
