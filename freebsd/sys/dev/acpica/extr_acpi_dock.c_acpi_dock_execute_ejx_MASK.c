
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ejx ;
typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, int VAR_1, int VAR_2)
{
 ACPI_HANDLE VAR_3;
 ACPI_STATUS VAR_4;
 char VAR_5[5];

 VAR_3 = FUNC_2(VAR_0);
 FUNC_3(VAR_5, sizeof(VAR_5), "_EJ%d", VAR_2);
 VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_1);
 if (FUNC_0(VAR_4))
  return (0);

 return (-1);
}
