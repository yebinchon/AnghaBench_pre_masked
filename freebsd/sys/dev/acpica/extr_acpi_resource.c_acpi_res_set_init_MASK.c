
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_res_context {void* ar_parent; } ;
typedef int device_t ;


 struct acpi_res_context* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_res_context*,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, void *VAR_1, void **VAR_2)
{
    struct acpi_res_context *VAR_3;

    if ((VAR_3 = FUNC_0(sizeof(*VAR_3))) != ((void*)0)) {
 FUNC_1(VAR_3, sizeof(*VAR_3));
 VAR_3->ar_parent = VAR_1;
 *VAR_2 = VAR_3;
    }
}
