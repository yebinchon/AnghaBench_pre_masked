
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int UINT64 ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

ACPI_STATUS
FUNC_2(ACPI_PHYSICAL_ADDRESS VAR_2, UINT64 *VAR_3, UINT32 VAR_4)
{
    void *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_4 / 8);
    if (VAR_5 == ((void*)0))
 return (VAR_0);

    switch (VAR_4) {
    case 8:
 *VAR_3 = *(volatile uint8_t *)VAR_5;
 break;
    case 16:
 *VAR_3 = *(volatile uint16_t *)VAR_5;
 break;
    case 32:
 *VAR_3 = *(volatile uint32_t *)VAR_5;
 break;
    case 64:
 *VAR_3 = *(volatile uint64_t *)VAR_5;
 break;
    }

    FUNC_1((vm_offset_t)VAR_5, VAR_4 / 8);

    return (VAR_1);
}
