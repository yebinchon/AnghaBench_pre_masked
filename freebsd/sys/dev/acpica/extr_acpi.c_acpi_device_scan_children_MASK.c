
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_scan_ctx {int * parent; void* arg; int user_fn; } ;
typedef int * device_t ;
typedef int acpi_scan_cb_t ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int,int ,int *,struct acpi_device_scan_ctx*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3(device_t VAR_5, device_t VAR_6, int VAR_7,
    acpi_scan_cb_t VAR_8, void *VAR_9)
{
    ACPI_HANDLE VAR_10;
    struct acpi_device_scan_ctx VAR_11;

    if (FUNC_1("children"))
 return (VAR_3);

    if (VAR_6 == ((void*)0))
 VAR_10 = VAR_0;
    else if ((VAR_10 = FUNC_2(VAR_6)) == ((void*)0))
 return (VAR_2);
    VAR_11.user_fn = VAR_8;
    VAR_11.arg = VAR_9;
    VAR_11.parent = VAR_10;
    return (FUNC_0(VAR_1, VAR_10, VAR_7,
 VAR_4, ((void*)0), &VAR_11, ((void*)0)));
}
