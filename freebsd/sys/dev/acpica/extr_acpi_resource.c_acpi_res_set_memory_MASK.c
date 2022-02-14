
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct acpi_res_context {int ar_nmem; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, void *VAR_2, uint64_t VAR_3,
      uint64_t VAR_4)
{
    struct acpi_res_context *VAR_5 = (struct acpi_res_context *)VAR_2;

    if (VAR_5 == ((void*)0))
 return;
    FUNC_0(VAR_1, VAR_0, VAR_5->ar_nmem++, VAR_3, VAR_4);
}
