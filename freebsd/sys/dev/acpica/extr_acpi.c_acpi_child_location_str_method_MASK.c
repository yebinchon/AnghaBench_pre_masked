
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {scalar_t__ ad_handle; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int*) ;
 char* FUNC_2 (scalar_t__) ;
 struct acpi_device* FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
    struct acpi_device *VAR_4 = FUNC_3(VAR_1);
    char VAR_5[32];
    int VAR_6;

    if (VAR_4->ad_handle) {
        FUNC_4(VAR_2, VAR_3, "handle=%s", FUNC_2(VAR_4->ad_handle));
        if (FUNC_0(FUNC_1(VAR_4->ad_handle, "_PXM", &VAR_6))) {
                FUNC_4(VAR_5, 32, " _PXM=%d", VAR_6);
                FUNC_5(VAR_2, VAR_5, VAR_3);
        }
    } else {
        FUNC_4(VAR_2, VAR_3, "");
    }
    return (0);
}
