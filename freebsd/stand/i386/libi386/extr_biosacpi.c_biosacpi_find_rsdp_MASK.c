
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ACPI_TABLE_RSDP ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char*,int) ;

__attribute__((used)) static ACPI_TABLE_RSDP *
FUNC_2(void)
{
    ACPI_TABLE_RSDP *VAR_0;
    uint16_t *VAR_1;


    VAR_1 = (uint16_t *)FUNC_0(0x40E);
    if ((VAR_0 = FUNC_1((char *)(*VAR_1 << 4), 0x400)) != ((void*)0))
 return (VAR_0);


    if ((VAR_0 = FUNC_1((char *)0xe0000, 0x20000)) != ((void*)0))
 return (VAR_0);

    return (((void*)0));
}
