
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 ACPI_HANDLE VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
  return (VAR_1);

 if (!FUNC_0(VAR_3, "LNRO0005"))
  return (VAR_1);

 FUNC_2(VAR_2, "VirtIO MMIO adapter");
 return (VAR_0);
}
