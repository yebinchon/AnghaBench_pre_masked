
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(ACPI_HANDLE VAR_1)
{
 UINT32 VAR_2;
 ACPI_STATUS VAR_3;

 FUNC_1(VAR_0);
 VAR_3 = FUNC_3(VAR_1, "_BQC", &VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_5("can't evaluate %s._BQC - %s\n", FUNC_4(VAR_1),
      FUNC_2(VAR_3));
  return (-1);
 }
 if (VAR_2 > 100)
  return (-1);

 return (VAR_2);
}
