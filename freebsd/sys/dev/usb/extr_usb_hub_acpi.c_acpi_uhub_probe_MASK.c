
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 ACPI_HANDLE VAR_3;

 if (FUNC_0("usb"))
  return (VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_1);

 if (FUNC_2(VAR_2) <= 0) {

  return (VAR_0 + 1);
 }
 return (VAR_1);
}
