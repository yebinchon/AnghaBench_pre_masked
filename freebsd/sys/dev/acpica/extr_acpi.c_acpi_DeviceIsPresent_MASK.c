
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int UINT32 ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (int ) ;

BOOLEAN
FUNC_5(device_t VAR_2)
{
 ACPI_HANDLE VAR_3;
 UINT32 VAR_4;
 ACPI_STATUS VAR_5;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);






 if (FUNC_3(VAR_3, "AMDI0020") || FUNC_3(VAR_3, "AMDI0010"))
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_3, "_STA", &VAR_4);





 if (FUNC_1(VAR_5))
  return (VAR_1);

 return (FUNC_0(VAR_4) ? VAR_1 : VAR_0);
}
