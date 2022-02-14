
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 ACPI_HANDLE VAR_2, VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_2("dock") ||
     FUNC_0(FUNC_1(VAR_2, "_DCK", &VAR_3)))
  return (VAR_0);

 FUNC_4(VAR_1, "ACPI Docking Station");





 return (0);
}
