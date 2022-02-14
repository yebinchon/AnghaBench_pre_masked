
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_IO_ADDRESS ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

ACPI_STATUS
FUNC_3(ACPI_IO_ADDRESS VAR_1, UINT32 VAR_2, UINT32 VAR_3)
{

    switch (VAR_3) {
    case 8:
 FUNC_0(VAR_1, VAR_2);
 break;
    case 16:
 FUNC_1(VAR_1, VAR_2);
 break;
    case 32:
 FUNC_2(VAR_1, VAR_2);
 break;
    }

    return (VAR_0);
}
