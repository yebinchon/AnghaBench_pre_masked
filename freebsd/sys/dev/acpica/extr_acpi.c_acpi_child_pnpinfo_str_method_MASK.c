
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct acpi_device {int ad_handle; } ;
typedef int device_t ;
struct TYPE_7__ {char* String; } ;
struct TYPE_6__ {int String; } ;
struct TYPE_8__ {int Valid; TYPE_2__ HardwareId; TYPE_1__ UniqueId; } ;
typedef TYPE_3__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 struct acpi_device* FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 unsigned long FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, device_t VAR_3, char *VAR_4,
    size_t VAR_5)
{
    struct acpi_device *VAR_6 = FUNC_3(VAR_3);
    ACPI_DEVICE_INFO *VAR_7;

    if (FUNC_0(FUNC_1(VAR_6->ad_handle, &VAR_7))) {
 FUNC_4(VAR_4, VAR_5, "unknown");
 return (0);
    }

    FUNC_4(VAR_4, VAR_5, "_HID=%s _UID=%lu",
 (VAR_7->Valid & VAR_0) ?
 VAR_7->HardwareId.String : "none",
 (VAR_7->Valid & VAR_1) ?
 FUNC_5(VAR_7->UniqueId.String, ((void*)0), 10) : 0UL);
    FUNC_2(VAR_7);

    return (0);
}
