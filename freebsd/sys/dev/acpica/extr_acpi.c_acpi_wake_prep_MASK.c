
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4, void **VAR_5)
{
    int VAR_6;


    VAR_6 = *(int *)VAR_4;
    if (VAR_1)
 FUNC_1(VAR_2, VAR_6);
    else
 FUNC_0(VAR_2, VAR_6);
    return (VAR_0);
}
