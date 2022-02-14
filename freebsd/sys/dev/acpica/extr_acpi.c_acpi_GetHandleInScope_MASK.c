
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,int *) ;

ACPI_STATUS
FUNC_4(ACPI_HANDLE VAR_2, char *VAR_3, ACPI_HANDLE *VAR_4)
{
    ACPI_HANDLE VAR_5;
    ACPI_STATUS VAR_6;


    for (;;) {
 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_5);
 if (FUNC_1(VAR_6)) {
     *VAR_4 = VAR_5;
     return (VAR_1);
 }

 if (VAR_6 != VAR_0)
     return (VAR_1);
 if (FUNC_0(FUNC_3(VAR_2, &VAR_5)))
     return (VAR_0);
 VAR_2 = VAR_5;
    }
}
