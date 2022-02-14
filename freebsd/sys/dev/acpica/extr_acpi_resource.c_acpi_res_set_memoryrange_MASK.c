
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct acpi_res_context {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, void *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
    struct acpi_res_context *VAR_6 = (struct acpi_res_context *)VAR_1;

    if (VAR_6 == ((void*)0))
 return;
    FUNC_0(VAR_0, "memory range not supported\n");
}
