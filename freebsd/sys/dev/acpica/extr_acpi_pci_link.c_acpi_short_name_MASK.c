
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t Length; char* Pointer; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1(ACPI_HANDLE VAR_1, char *VAR_2, size_t VAR_3)
{
 ACPI_BUFFER VAR_4;

 VAR_4.Length = VAR_3;
 VAR_4.Pointer = VAR_2;
 return (FUNC_0(VAR_1, VAR_0, &VAR_4));
}
