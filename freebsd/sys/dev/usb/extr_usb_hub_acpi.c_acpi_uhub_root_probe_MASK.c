
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 ACPI_STATUS VAR_3;
 ACPI_HANDLE VAR_4;

 if (FUNC_1("usb"))
  return (VAR_1);

 VAR_3 = FUNC_2(VAR_2, &VAR_4);
 if (FUNC_0(VAR_3) && VAR_4 != ((void*)0) &&
     FUNC_3(VAR_2) <= 0) {

  return (VAR_0 + 1);
 }
 return (VAR_1);
}
