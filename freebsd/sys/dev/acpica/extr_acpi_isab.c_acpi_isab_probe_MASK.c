
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;


 int FUNC_0 (int ,scalar_t__,char**,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 static char *VAR_3[] = { "PNP0A05", "PNP0A06", ((void*)0) };
 int VAR_4;

 if (FUNC_1("isab") ||
     FUNC_2(VAR_1, 0) != VAR_2)
  return (VAR_0);
 VAR_4 = FUNC_0(FUNC_3(VAR_2), VAR_2, VAR_3, ((void*)0));
 if (VAR_4 <= 0)
  FUNC_4(VAR_2, "ACPI Generic ISA bridge");
 return (VAR_4);
}
