
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT ;
typedef scalar_t__ ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(ACPI_HANDLE VAR_1, ACPI_HANDLE VAR_2)
{
 int VAR_3;
 ACPI_STATUS VAR_4;
 ACPI_BUFFER VAR_5;
 ACPI_OBJECT *VAR_6;

 VAR_3 = 0;

 VAR_5.Pointer = ((void*)0);
 VAR_5.Length = VAR_0;
 VAR_4 = FUNC_1(VAR_2, "_EJD", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_4))
  goto out;

 VAR_6 = (ACPI_OBJECT *)VAR_5.Pointer;
 if (VAR_1 == FUNC_3(((void*)0), VAR_6))
  VAR_3 = 1;

out:
 if (VAR_5.Pointer != ((void*)0))
  FUNC_2(VAR_5.Pointer);

 return (VAR_3);
}
