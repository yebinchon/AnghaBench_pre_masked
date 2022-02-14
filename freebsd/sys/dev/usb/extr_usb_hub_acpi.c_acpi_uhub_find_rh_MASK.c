
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int ,int *,int ,int **) ;
 int * FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3(device_t VAR_3, ACPI_HANDLE *VAR_4)
{
 device_t VAR_5;
 ACPI_HANDLE VAR_6;

 *VAR_4 = ((void*)0);
 VAR_5 = FUNC_2(FUNC_2(VAR_3));

 if ((VAR_6 = FUNC_1(VAR_5)) == ((void*)0))
  return (VAR_1);

 return (FUNC_0(VAR_0, VAR_6, 1,
     VAR_2, ((void*)0), VAR_3, VAR_4));
}
