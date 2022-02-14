
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct acpi_res_context {int ar_nirq; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, void *VAR_2, uint8_t *VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
    struct acpi_res_context *VAR_7 = (struct acpi_res_context *)VAR_2;
    rman_res_t VAR_8;

    if (VAR_7 == ((void*)0) || VAR_3 == ((void*)0))
 return;


    if (VAR_4 != 1)
 return;

    VAR_8 = *VAR_3;
    FUNC_0(VAR_1, VAR_0, VAR_7->ar_nirq++, VAR_8, 1);
}
