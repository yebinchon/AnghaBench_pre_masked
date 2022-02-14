
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT_LIST ;
typedef int * ACPI_HANDLE ;
typedef int ACPI_BUFFER ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2(device_t VAR_2, device_t VAR_3, ACPI_STRING VAR_4,
    ACPI_OBJECT_LIST *VAR_5, ACPI_BUFFER *VAR_6)
{
    ACPI_HANDLE VAR_7;

    if (VAR_3 == ((void*)0))
 VAR_7 = VAR_0;
    else if ((VAR_7 = FUNC_1(VAR_3)) == ((void*)0))
 return (VAR_1);
    return (FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6));
}
