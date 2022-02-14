
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int ACPI_HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(ACPI_HANDLE VAR_1, int *VAR_2)
{
 ACPI_OBJECT_TYPE VAR_3;
 FUNC_0(VAR_1, &VAR_3);
 if (VAR_3 == VAR_0)
  *VAR_2 = 0;
 else if (FUNC_1(VAR_1, "PNP0C01") ||
     FUNC_1(VAR_1, "PNP0C02"))
  *VAR_2 = 1;
 else if (FUNC_1(VAR_1, "PNP0100") ||
     FUNC_1(VAR_1, "PNP0103") ||
     FUNC_1(VAR_1, "PNP0B00"))
  *VAR_2 = 2;
 else if (FUNC_1(VAR_1, "PNP0C09"))
  *VAR_2 = 3;
 else if (FUNC_1(VAR_1, "PNP0C0F"))
  *VAR_2 = 4;
}
