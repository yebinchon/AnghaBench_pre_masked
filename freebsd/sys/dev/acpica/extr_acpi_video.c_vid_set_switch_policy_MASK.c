
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_5(ACPI_HANDLE VAR_0, UINT32 VAR_1)
{
 ACPI_STATUS VAR_2;

 VAR_2 = FUNC_2(VAR_0, "_DOS", VAR_1);
 if (FUNC_0(VAR_2))
  FUNC_4("can't evaluate %s._DOS - %s\n",
         FUNC_3(VAR_0), FUNC_1(VAR_2));
}
