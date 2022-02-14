
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct acpi_device {int ad_flags; int ad_cls_class; void* ad_private; int ad_handle; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;





 int VAR_0 ;







 int FUNC_0 (int ) ;
 struct acpi_device* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
    struct acpi_device *VAR_5;

    if ((VAR_5 = FUNC_1(VAR_2)) == ((void*)0)) {
 FUNC_2(VAR_2, "device has no ivars\n");
 return (VAR_0);
    }


    switch(VAR_3) {
    case 136:
 *(ACPI_HANDLE *)VAR_4 = VAR_5->ad_handle;
 break;
    case 135:
 *(void **)VAR_4 = VAR_5->ad_private;
 break;
    case 137:
 *(int *)VAR_4 = VAR_5->ad_flags;
 break;
    case 131:
    case 132:
    case 134:
 *(int *)VAR_4 = -1;
 break;
    case 133:
 *(int *)VAR_4 = FUNC_0(VAR_2);
 break;
    case 130:
 *(uint8_t*)VAR_4 = (VAR_5->ad_cls_class >> 16) & 0xff;
 break;
    case 128:
 *(uint8_t*)VAR_4 = (VAR_5->ad_cls_class >> 8) & 0xff;
 break;
    case 129:
 *(uint8_t*)VAR_4 = (VAR_5->ad_cls_class >> 0) & 0xff;
 break;
    default:
 return (VAR_0);
    }

    return (0);
}
