
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char**,int *) ;
 int FUNC_2 (int ,char*,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 static char *VAR_2[] = {"ACPI0001", "ACPI0005", ((void*)0)};
 ACPI_STATUS VAR_3;
 int VAR_4;

 if (FUNC_3("smbat"))
  return (VAR_0);
 VAR_4 = FUNC_1(FUNC_5(VAR_1), VAR_1, VAR_2, ((void*)0));
 if (VAR_4 > 0)
   return (VAR_4);
 VAR_3 = FUNC_2(FUNC_4(VAR_1), "_EC", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_3))
  return (VAR_0);
 FUNC_6(VAR_1, "ACPI Smart Battery");
 return (VAR_4);
}
