
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Type; int Name; } ;
typedef char* ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PREDEFINED_NAMES ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

ACPI_STATUS
FUNC_3(const ACPI_PREDEFINED_NAMES *VAR_4,
    ACPI_STRING *VAR_5)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_1);

 *VAR_5 = ((void*)0);
 if (FUNC_0(VAR_4->Name, "_OS_") &&
     VAR_4->Type == VAR_0 && FUNC_2(VAR_3) > 0) {
  FUNC_1("ACPI: Overriding _OS definition with \"%s\"\n",
      VAR_3);
  *VAR_5 = VAR_3;
 }
 return (VAR_2);
}
