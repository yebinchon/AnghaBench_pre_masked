
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct acpi_res_context {int ar_nio; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, void *VAR_3, uint64_t VAR_4,
       uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
    struct acpi_res_context *VAR_8 = (struct acpi_res_context *)VAR_3;

    if (VAR_8 == ((void*)0))
 return;
    if (VAR_5 == (VAR_4 + VAR_6)) {
 if (VAR_1)
     FUNC_1(VAR_2,
  "_CRS has fixed I/O port range defined as relocatable\n");

 FUNC_0(VAR_2, VAR_0, VAR_8->ar_nio++, VAR_4, VAR_6);
 return;
    }

    FUNC_1(VAR_2, "I/O range not supported\n");
}
