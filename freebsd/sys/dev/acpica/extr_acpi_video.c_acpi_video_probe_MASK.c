
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 ACPI_HANDLE VAR_3, VAR_4;
 ACPI_OBJECT_TYPE VAR_5;

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_3("video") ||
     FUNC_0(FUNC_1(VAR_3, "_DOD", &VAR_4)) ||
     FUNC_0(FUNC_1(VAR_3, "_DOS", &VAR_4)) ||
     FUNC_0(FUNC_2(VAR_4, &VAR_5)) ||
     VAR_5 != VAR_0)
  return (VAR_1);

 FUNC_5(VAR_2, "ACPI video extension");
 return (0);
}
